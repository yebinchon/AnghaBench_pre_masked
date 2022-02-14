
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct ocfs2_truncate_context {int tc_dealloc; } ;
struct ocfs2_super {int sb; } ;
struct ocfs2_path {int dummy; } ;
struct ocfs2_extent_list {scalar_t__ l_tree_depth; TYPE_2__* l_recs; } ;
struct ocfs2_extent_block {scalar_t__ h_next_leaf_blk; scalar_t__ h_blkno; } ;
struct TYPE_4__ {struct ocfs2_extent_list i_list; } ;
struct ocfs2_dinode {scalar_t__ i_last_eb_blk; int i_clusters; TYPE_1__ id2; } ;
struct ocfs2_alloc_context {int dummy; } ;
struct inode {int i_blocks; int i_ino; int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_6__ {int ip_lock; scalar_t__ ip_clusters; } ;
struct TYPE_5__ {scalar_t__ e_int_clusters; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (struct inode*) ;
 int VAR_2 ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,unsigned int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,scalar_t__) ;
 int FUNC_9 (int ,unsigned int) ;
 int FUNC_10 (struct inode*,int *,int ,unsigned int,struct ocfs2_alloc_context*,int *,int) ;
 int FUNC_11 (int ,char*,int ,int ) ;
 int FUNC_12 (struct inode*,unsigned int,struct ocfs2_path*,struct buffer_head**) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_15 (int ,int *,struct ocfs2_path*) ;
 int FUNC_16 (int *,struct buffer_head*) ;
 int FUNC_17 (struct inode*,struct ocfs2_path*,int *,struct ocfs2_truncate_context*,unsigned int,scalar_t__*,int*) ;
 int FUNC_18 (struct ocfs2_super*,int *,scalar_t__,unsigned int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (struct inode*,int ) ;

__attribute__((used)) static int FUNC_22(struct ocfs2_super *VAR_3,
        unsigned int VAR_4,
        struct inode *VAR_5,
        struct buffer_head *VAR_6,
        handle_t *VAR_7,
        struct ocfs2_truncate_context *VAR_8,
        struct ocfs2_path *VAR_9,
        struct ocfs2_alloc_context *VAR_10)
{
 int VAR_11;
 struct ocfs2_dinode *VAR_12;
 struct ocfs2_extent_block *VAR_13 = ((void*)0);
 struct ocfs2_extent_list *VAR_14;
 struct buffer_head *VAR_15 = ((void*)0);
 u64 VAR_16 = 0;
 u8 VAR_17;

 VAR_12 = (struct ocfs2_dinode *) VAR_6->b_data;

 VAR_11 = FUNC_12(VAR_5, VAR_4,
          VAR_9, &VAR_15);
 if (VAR_11 < 0) {
  FUNC_6(VAR_11);
  goto bail;
 }





 VAR_11 = FUNC_15(FUNC_0(VAR_5), VAR_7, VAR_9);
 if (VAR_11 < 0) {
  FUNC_6(VAR_11);
  goto bail;
 }

 if (VAR_15) {
  VAR_11 = FUNC_14(VAR_7, FUNC_0(VAR_5), VAR_15,
       VAR_2);
  if (VAR_11 < 0) {
   FUNC_6(VAR_11);
   goto bail;
  }

  VAR_13 = (struct ocfs2_extent_block *) VAR_15->b_data;
 }

 VAR_14 = &(VAR_12->id2.i_list);





 if (VAR_14->l_tree_depth && VAR_14->l_recs[0].e_int_clusters == 0) {
  FUNC_11(VAR_5->i_sb,
       "Inode %lu has an empty extent record, depth %u\n",
       VAR_5->i_ino, FUNC_3(VAR_14->l_tree_depth));
  VAR_11 = -VAR_0;
  goto bail;
 }

 FUNC_21(VAR_5,
   FUNC_9(VAR_3->sb, VAR_4));
 FUNC_19(&FUNC_1(VAR_5)->ip_lock);
 FUNC_1(VAR_5)->ip_clusters = FUNC_5(VAR_12->i_clusters) -
          VAR_4;
 FUNC_20(&FUNC_1(VAR_5)->ip_lock);
 FUNC_4(&VAR_12->i_clusters, -VAR_4);
 VAR_5->i_blocks = FUNC_13(VAR_5);

 VAR_11 = FUNC_17(VAR_5, VAR_9, VAR_7, VAR_8,
     VAR_4, &VAR_16, &VAR_17);
 if (VAR_11) {
  FUNC_6(VAR_11);
  goto bail;
 }

 if (FUNC_5(VAR_12->i_clusters) == 0) {

  VAR_14->l_tree_depth = 0;
  VAR_12->i_last_eb_blk = 0;
 } else if (VAR_13)
  VAR_12->i_last_eb_blk = VAR_13->h_blkno;

 VAR_11 = FUNC_16(VAR_7, VAR_6);
 if (VAR_11 < 0) {
  FUNC_6(VAR_11);
  goto bail;
 }

 if (VAR_13) {



  VAR_13->h_next_leaf_blk = 0;
  VAR_11 = FUNC_16(VAR_7, VAR_15);
  if (VAR_11 < 0) {
   FUNC_6(VAR_11);
   goto bail;
  }
 }

 if (VAR_16) {
  if (VAR_17 & VAR_1)
   VAR_11 = FUNC_10(VAR_5, VAR_7,
     FUNC_8(VAR_3->sb,
         VAR_16),
     VAR_4, VAR_10,
     &VAR_8->tc_dealloc, 1);
  else
   VAR_11 = FUNC_18(VAR_3, VAR_7,
          VAR_16,
          VAR_4);
  if (VAR_11 < 0) {
   FUNC_6(VAR_11);
   goto bail;
  }
 }
 VAR_11 = 0;
bail:
 FUNC_2(VAR_15);
 FUNC_7(VAR_11);
 return VAR_11;
}
