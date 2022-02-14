
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct ocfs2_super {int dummy; } ;
struct ocfs2_dx_root_block {int dr_suballoc_bit; int dr_blkno; int dr_suballoc_slot; } ;
struct ocfs2_dinode {int i_dx_root; int i_dyn_features; } ;
struct inode {int i_mutex; int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_2__ {int ip_dyn_features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 struct ocfs2_super* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (unsigned long long) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct ocfs2_super*,int *) ;
 int FUNC_15 (int *,struct inode*,struct buffer_head*,int ,int ,int) ;
 struct inode* FUNC_16 (struct ocfs2_super*,int ,int ) ;
 int FUNC_17 (struct inode*,struct buffer_head**,int) ;
 int FUNC_18 (struct inode*,int) ;
 int FUNC_19 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_20 (int *,struct buffer_head*) ;
 int * FUNC_21 (struct ocfs2_super*,int ) ;
 int FUNC_22 (int ,int ) ;

__attribute__((used)) static int FUNC_23(struct inode *VAR_5,
         struct buffer_head *VAR_6,
         struct buffer_head *VAR_7)
{
 int VAR_8;
 struct ocfs2_super *VAR_9 = FUNC_3(VAR_5->i_sb);
 struct ocfs2_dinode *VAR_10 = (struct ocfs2_dinode *)VAR_6->b_data;
 struct ocfs2_dx_root_block *VAR_11;
 struct inode *VAR_12 = ((void*)0);
 struct buffer_head *VAR_13 = ((void*)0);
 handle_t *VAR_14;
 u64 VAR_15;
 u16 VAR_16;
 u64 VAR_17;

 VAR_11 = (struct ocfs2_dx_root_block *) VAR_7->b_data;

 VAR_12 = FUNC_16(VAR_9,
     VAR_1,
     FUNC_9(VAR_11->dr_suballoc_slot));
 if (!VAR_12) {
  VAR_8 = -VAR_0;
  FUNC_11(VAR_8);
  goto out;
 }
 FUNC_12(&VAR_12->i_mutex);

 VAR_8 = FUNC_17(VAR_12, &VAR_13, 1);
 if (VAR_8) {
  FUNC_11(VAR_8);
  goto out_mutex;
 }

 VAR_14 = FUNC_21(VAR_9, VAR_2);
 if (FUNC_1(VAR_14)) {
  VAR_8 = FUNC_4(VAR_14);
  FUNC_11(VAR_8);
  goto out_unlock;
 }

 VAR_8 = FUNC_19(VAR_14, FUNC_0(VAR_5), VAR_6,
          VAR_4);
 if (VAR_8) {
  FUNC_11(VAR_8);
  goto out_commit;
 }

 FUNC_2(VAR_5)->ip_dyn_features &= ~VAR_3;
 VAR_10->i_dyn_features = FUNC_6(FUNC_2(VAR_5)->ip_dyn_features);
 VAR_10->i_dx_root = FUNC_7(0ULL);

 FUNC_20(VAR_14, VAR_6);

 VAR_15 = FUNC_10(VAR_11->dr_blkno);
 VAR_16 = FUNC_9(VAR_11->dr_suballoc_bit);
 VAR_17 = FUNC_22(VAR_15, VAR_16);
 VAR_8 = FUNC_15(VAR_14, VAR_12, VAR_13,
           VAR_16, VAR_17, 1);
 if (VAR_8)
  FUNC_11(VAR_8);

out_commit:
 FUNC_14(VAR_9, VAR_14);

out_unlock:
 FUNC_18(VAR_12, 1);

out_mutex:
 FUNC_13(&VAR_12->i_mutex);
 FUNC_5(VAR_13);
out:
 FUNC_8(VAR_12);
 return VAR_8;
}
