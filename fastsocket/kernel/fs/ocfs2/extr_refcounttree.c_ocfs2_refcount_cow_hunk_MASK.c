
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_refcount_tree {int dummy; } ;
struct ocfs2_inode_info {int ip_dyn_features; } ;
struct TYPE_2__ {int i_list; } ;
struct ocfs2_dinode {int i_refcount_loc; TYPE_1__ id2; } ;
struct ocfs2_cow_context {int data_et; int get_clusters; int cow_duplicate_clusters; struct buffer_head* ref_root_bh; struct ocfs2_refcount_tree* ref_tree; scalar_t__ cow_len; scalar_t__ cow_start; struct inode* inode; } ;
struct inode {int i_ino; int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct inode*) ;
 int VAR_2 ;
 struct ocfs2_inode_info* FUNC_2 (struct inode*) ;
 struct ocfs2_super* FUNC_3 (int ) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct ocfs2_cow_context*) ;
 struct ocfs2_cow_context* FUNC_6 (int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_9 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (struct inode*,scalar_t__) ;
 int FUNC_11 (int *,int ,struct buffer_head*) ;
 int FUNC_12 (struct ocfs2_super*,int ,int,struct ocfs2_refcount_tree**,struct buffer_head**) ;
 int FUNC_13 (struct inode*,int *,scalar_t__,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_14 (struct ocfs2_cow_context*) ;
 int FUNC_15 (struct ocfs2_super*,struct ocfs2_refcount_tree*,int) ;

__attribute__((used)) static int FUNC_16(struct inode *VAR_5,
       struct buffer_head *VAR_6,
       u32 VAR_7, u32 VAR_8, u32 VAR_9)
{
 int VAR_10;
 u32 VAR_11 = 0, VAR_12 = 0;
 struct ocfs2_inode_info *VAR_13 = FUNC_2(VAR_5);
 struct ocfs2_super *VAR_14 = FUNC_3(VAR_5->i_sb);
 struct ocfs2_dinode *VAR_15 = (struct ocfs2_dinode *)VAR_6->b_data;
 struct buffer_head *VAR_16 = ((void*)0);
 struct ocfs2_refcount_tree *VAR_17;
 struct ocfs2_cow_context *VAR_18 = ((void*)0);

 FUNC_0(!(VAR_13->ip_dyn_features & VAR_2));

 VAR_10 = FUNC_13(VAR_5, &VAR_15->id2.i_list,
           VAR_7, VAR_8, VAR_9,
           &VAR_11, &VAR_12);
 if (VAR_10) {
  FUNC_9(VAR_10);
  goto out;
 }

 FUNC_8(0, "CoW inode %lu, cpos %u, write_len %u, cow_start %u, "
      "cow_len %u\n", VAR_5->i_ino,
      VAR_7, VAR_8, VAR_11, VAR_12);

 FUNC_0(VAR_12 == 0);

 VAR_18 = FUNC_6(sizeof(struct ocfs2_cow_context), VAR_1);
 if (!VAR_18) {
  VAR_10 = -VAR_0;
  FUNC_9(VAR_10);
  goto out;
 }

 VAR_10 = FUNC_12(VAR_14, FUNC_7(VAR_15->i_refcount_loc),
           1, &VAR_17, &VAR_16);
 if (VAR_10) {
  FUNC_9(VAR_10);
  goto out;
 }

 VAR_18->inode = VAR_5;
 VAR_18->cow_start = VAR_11;
 VAR_18->cow_len = VAR_12;
 VAR_18->ref_tree = VAR_17;
 VAR_18->ref_root_bh = VAR_16;
 VAR_18->cow_duplicate_clusters = VAR_4;
 VAR_18->get_clusters = VAR_3;

 FUNC_11(&VAR_18->data_et,
          FUNC_1(VAR_5), VAR_6);

 VAR_10 = FUNC_14(VAR_18);
 if (VAR_10)
  FUNC_9(VAR_10);






 FUNC_10(VAR_5, VAR_11);

 FUNC_15(VAR_14, VAR_17, 1);
 FUNC_4(VAR_16);
out:
 FUNC_5(VAR_18);
 return VAR_10;
}
