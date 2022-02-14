
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct ocfs2_super {int sb; } ;
struct ocfs2_group_desc {int bg_blkno; int bg_bits; } ;
struct TYPE_3__ {int cl_cpg; int cl_bpc; } ;
struct TYPE_4__ {TYPE_1__ i_chain; } ;
struct ocfs2_dinode {TYPE_2__ id2; int i_clusters; } ;
struct inode {int i_mutex; int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct ocfs2_dinode*) ;
 struct ocfs2_super* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 () ;
 int FUNC_12 (int) ;
 int FUNC_13 () ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (struct ocfs2_super*,int *) ;
 struct inode* FUNC_17 (struct ocfs2_super*,int ,int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct inode*,struct buffer_head**,int) ;
 int FUNC_20 (struct inode*,int) ;
 scalar_t__ FUNC_21 (struct ocfs2_super*) ;
 scalar_t__ FUNC_22 (struct ocfs2_super*) ;
 int FUNC_23 (struct inode*,struct ocfs2_dinode*,int ,struct buffer_head**) ;
 int * FUNC_24 (struct ocfs2_super*,int ) ;
 int FUNC_25 (int *,struct inode*,struct buffer_head*,struct buffer_head*,scalar_t__,int) ;
 int FUNC_26 (struct inode*,int) ;
 int FUNC_27 (struct inode*,scalar_t__) ;

int FUNC_28(struct inode * VAR_6, int VAR_7)
{
 int VAR_8;
 handle_t *VAR_9;
 struct buffer_head *VAR_10 = ((void*)0);
 struct buffer_head *VAR_11 = ((void*)0);
 struct inode *VAR_12 = ((void*)0);
 struct ocfs2_dinode *VAR_13 = ((void*)0);
 struct ocfs2_group_desc *VAR_14 = ((void*)0);
 struct ocfs2_super *VAR_15 = FUNC_3(VAR_6->i_sb);
 u16 VAR_16;
 u32 VAR_17;
 u64 VAR_18;

 FUNC_11();

 if (FUNC_21(VAR_15) || FUNC_22(VAR_15))
  return -VAR_1;

 if (VAR_7 < 0)
  return -VAR_0;
 else if (VAR_7 == 0)
  return 0;

 VAR_12 = FUNC_17(VAR_15,
          VAR_2,
          VAR_5);
 if (!VAR_12) {
  VAR_8 = -VAR_0;
  FUNC_12(VAR_8);
  goto out;
 }

 FUNC_14(&VAR_12->i_mutex);

 VAR_8 = FUNC_19(VAR_12, &VAR_10, 1);
 if (VAR_8 < 0) {
  FUNC_12(VAR_8);
  goto out_mutex;
 }

 VAR_13 = (struct ocfs2_dinode *)VAR_10->b_data;



 FUNC_0(!FUNC_2(VAR_13));

 if (FUNC_7(VAR_13->id2.i_chain.cl_cpg) !=
     FUNC_18(VAR_15->sb) * 8) {
  FUNC_10(VAR_3, "The disk is too old and small. "
       "Force to do offline resize.");
  VAR_8 = -VAR_0;
  goto out_unlock;
 }

 VAR_17 = FUNC_8(VAR_13->i_clusters);
 VAR_18 = FUNC_27(VAR_12,
           VAR_17 - 1);

 VAR_8 = FUNC_23(VAR_12, VAR_13, VAR_18,
       &VAR_11);
 if (VAR_8 < 0) {
  FUNC_12(VAR_8);
  goto out_unlock;
 }
 VAR_14 = (struct ocfs2_group_desc *)VAR_11->b_data;

 VAR_16 = FUNC_7(VAR_13->id2.i_chain.cl_bpc);
 if (FUNC_7(VAR_14->bg_bits) / VAR_16 + VAR_7 >
  FUNC_7(VAR_13->id2.i_chain.cl_cpg)) {
  VAR_8 = -VAR_0;
  goto out_unlock;
 }

 FUNC_10(0, "extend the last group at %llu, new clusters = %d\n",
      (unsigned long long)FUNC_9(VAR_14->bg_blkno), VAR_7);

 VAR_9 = FUNC_24(VAR_15, VAR_4);
 if (FUNC_1(VAR_9)) {
  FUNC_12(FUNC_4(VAR_9));
  VAR_8 = -VAR_0;
  goto out_unlock;
 }


 VAR_8 = FUNC_25(VAR_9, VAR_12,
      VAR_10, VAR_11,
      VAR_17,
      VAR_7);
 if (VAR_8) {
  FUNC_12(VAR_8);
  goto out_commit;
 }

 FUNC_26(VAR_12, VAR_7);

out_commit:
 FUNC_16(VAR_15, VAR_9);
out_unlock:
 FUNC_5(VAR_11);
 FUNC_5(VAR_10);

 FUNC_20(VAR_12, 1);

out_mutex:
 FUNC_15(&VAR_12->i_mutex);
 FUNC_6(VAR_12);

out:
 FUNC_13();
 return VAR_8;
}
