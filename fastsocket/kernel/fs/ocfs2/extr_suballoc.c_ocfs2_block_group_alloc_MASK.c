
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
typedef size_t u16 ;
struct ocfs2_super {int sb; } ;
struct ocfs2_group_desc {int bg_bits; int bg_free_bits_count; } ;
struct TYPE_8__ {int i_total; int i_used; } ;
struct TYPE_9__ {TYPE_3__ bitmap1; } ;
struct ocfs2_chain_list {int cl_cpg; int cl_next_free_rec; int cl_count; TYPE_2__* cl_recs; } ;
struct TYPE_6__ {struct ocfs2_chain_list i_chain; } ;
struct ocfs2_dinode {void* i_size; int i_clusters; TYPE_4__ id1; TYPE_1__ id2; } ;
struct ocfs2_alloc_context {scalar_t__ ac_last_group; } ;
struct inode {int i_blocks; int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_10__ {int ip_lock; int ip_clusters; } ;
struct TYPE_7__ {void* c_blkno; int c_total; int c_free; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct inode*) ;
 scalar_t__ FUNC_2 (int *) ;
 TYPE_5__* FUNC_3 (struct inode*) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct buffer_head*) ;
 void* FUNC_6 (scalar_t__) ;
 int FUNC_7 (struct inode*,int ) ;
 int FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int *,scalar_t__) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (void*) ;
 int FUNC_13 (int ,char*,size_t,...) ;
 int FUNC_14 () ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int *,struct inode*,struct buffer_head*,scalar_t__,size_t,struct ocfs2_chain_list*) ;
 int FUNC_18 (int ,scalar_t__) ;
 int FUNC_19 (struct ocfs2_super*,int *,struct ocfs2_alloc_context*,scalar_t__,int *,int *) ;
 scalar_t__ FUNC_20 (int ,int ) ;
 scalar_t__ FUNC_21 (int ,int ) ;
 int FUNC_22 (struct ocfs2_super*,int *) ;
 size_t FUNC_23 (struct ocfs2_chain_list*) ;
 int FUNC_24 (struct ocfs2_alloc_context*) ;
 int FUNC_25 (struct inode*) ;
 int FUNC_26 (struct inode*) ;
 int FUNC_27 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_28 (int *,struct buffer_head*) ;
 int FUNC_29 (struct ocfs2_super*,scalar_t__,scalar_t__,int,struct ocfs2_alloc_context**) ;
 int FUNC_30 (int ,struct buffer_head*) ;
 int * FUNC_31 (struct ocfs2_super*,int) ;
 struct buffer_head* FUNC_32 (int ,scalar_t__) ;
 int FUNC_33 (int *) ;
 int FUNC_34 (int *) ;

__attribute__((used)) static int FUNC_35(struct ocfs2_super *VAR_3,
       struct inode *VAR_4,
       struct buffer_head *VAR_5,
       u64 VAR_6,
       u64 *VAR_7,
       int VAR_8)
{
 int VAR_9, VAR_10;
 struct ocfs2_dinode *VAR_11 = (struct ocfs2_dinode *) VAR_5->b_data;
 struct ocfs2_chain_list *VAR_12;
 struct ocfs2_alloc_context *VAR_13 = ((void*)0);
 handle_t *VAR_14 = ((void*)0);
 u32 VAR_15, VAR_16;
 u16 VAR_17;
 u64 VAR_18;
 struct buffer_head *VAR_19 = ((void*)0);
 struct ocfs2_group_desc *VAR_20;

 FUNC_0(FUNC_26(VAR_4));

 FUNC_14();

 VAR_12 = &VAR_11->id2.i_chain;
 VAR_9 = FUNC_29(VAR_3,
         FUNC_9(VAR_12->cl_cpg),
         VAR_6, VAR_8, &VAR_13);
 if (VAR_9 < 0) {
  if (VAR_9 != -VAR_1)
   FUNC_15(VAR_9);
  goto bail;
 }

 VAR_10 = FUNC_18(VAR_3->sb,
       FUNC_9(VAR_12->cl_cpg));
 VAR_14 = FUNC_31(VAR_3, VAR_10);
 if (FUNC_2(VAR_14)) {
  VAR_9 = FUNC_4(VAR_14);
  VAR_14 = ((void*)0);
  FUNC_15(VAR_9);
  goto bail;
 }

 if (VAR_7 && *VAR_7 != 0) {
  FUNC_13(0, "use old allocation group %llu for block group alloc\n",
       (unsigned long long)*VAR_7);
  VAR_13->ac_last_group = *VAR_7;
 }
 VAR_9 = FUNC_19(VAR_3,
          VAR_14,
          VAR_13,
          FUNC_9(VAR_12->cl_cpg),
          &VAR_15,
          &VAR_16);
 if (VAR_9 < 0) {
  if (VAR_9 != -VAR_1)
   FUNC_15(VAR_9);
  goto bail;
 }

 VAR_17 = FUNC_23(VAR_12);


 VAR_18 = FUNC_20(VAR_3->sb, VAR_15);
 FUNC_13(0, "new descriptor, record %u, at block %llu\n",
      VAR_17, (unsigned long long)VAR_18);

 VAR_19 = FUNC_32(VAR_3->sb, VAR_18);
 if (!VAR_19) {
  VAR_9 = -VAR_0;
  FUNC_15(VAR_9);
  goto bail;
 }
 FUNC_30(FUNC_1(VAR_4), VAR_19);

 VAR_9 = FUNC_17(VAR_14,
     VAR_4,
     VAR_19,
     VAR_18,
     VAR_17,
     VAR_12);
 if (VAR_9 < 0) {
  FUNC_15(VAR_9);
  goto bail;
 }

 VAR_20 = (struct ocfs2_group_desc *) VAR_19->b_data;

 VAR_9 = FUNC_27(VAR_14, FUNC_1(VAR_4),
      VAR_5, VAR_2);
 if (VAR_9 < 0) {
  FUNC_15(VAR_9);
  goto bail;
 }

 FUNC_10(&VAR_12->cl_recs[VAR_17].c_free,
       FUNC_9(VAR_20->bg_free_bits_count));
 FUNC_10(&VAR_12->cl_recs[VAR_17].c_total, FUNC_9(VAR_20->bg_bits));
 VAR_12->cl_recs[VAR_17].c_blkno = FUNC_6(VAR_18);
 if (FUNC_9(VAR_12->cl_next_free_rec) < FUNC_9(VAR_12->cl_count))
  FUNC_8(&VAR_12->cl_next_free_rec, 1);

 FUNC_10(&VAR_11->id1.bitmap1.i_used, FUNC_9(VAR_20->bg_bits) -
     FUNC_9(VAR_20->bg_free_bits_count));
 FUNC_10(&VAR_11->id1.bitmap1.i_total, FUNC_9(VAR_20->bg_bits));
 FUNC_10(&VAR_11->i_clusters, FUNC_9(VAR_12->cl_cpg));

 VAR_9 = FUNC_28(VAR_14, VAR_5);
 if (VAR_9 < 0) {
  FUNC_15(VAR_9);
  goto bail;
 }

 FUNC_33(&FUNC_3(VAR_4)->ip_lock);
 FUNC_3(VAR_4)->ip_clusters = FUNC_11(VAR_11->i_clusters);
 VAR_11->i_size = FUNC_6(FUNC_21(VAR_4->i_sb,
          FUNC_11(VAR_11->i_clusters)));
 FUNC_34(&FUNC_3(VAR_4)->ip_lock);
 FUNC_7(VAR_4, FUNC_12(VAR_11->i_size));
 VAR_4->i_blocks = FUNC_25(VAR_4);

 VAR_9 = 0;


 if (VAR_7)
  *VAR_7 = VAR_13->ac_last_group;

bail:
 if (VAR_14)
  FUNC_22(VAR_3, VAR_14);

 if (VAR_13)
  FUNC_24(VAR_13);

 FUNC_5(VAR_19);

 FUNC_16(VAR_9);
 return VAR_9;
}
