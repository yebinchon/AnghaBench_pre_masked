
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_super {int dummy; } ;
struct ocfs2_dinode {int i_flags; int i_dtime; int i_suballoc_slot; } ;
struct inode {int i_mutex; int i_sb; } ;
struct buffer_head {scalar_t__ b_data; } ;
typedef int handle_t ;
struct TYPE_2__ {int tv_sec; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ocfs2_super* FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct ocfs2_super*,int *) ;
 int FUNC_13 (int *,struct inode*,struct buffer_head*,struct ocfs2_dinode*) ;
 struct inode* FUNC_14 (struct ocfs2_super*,int ,int ) ;
 int FUNC_15 (struct inode*,struct buffer_head**,int) ;
 int FUNC_16 (struct inode*,int) ;
 int FUNC_17 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_18 (int *,struct buffer_head*) ;
 int FUNC_19 (struct ocfs2_super*,int *,struct inode*,struct inode*,struct buffer_head*) ;
 scalar_t__ FUNC_20 (int ) ;
 int FUNC_21 (int ,struct buffer_head*) ;
 int * FUNC_22 (struct ocfs2_super*,scalar_t__) ;
 int FUNC_23 (struct inode*) ;

__attribute__((used)) static int FUNC_24(struct inode *VAR_7,
         struct buffer_head *VAR_8,
         struct inode *VAR_9,
         struct buffer_head *VAR_10)
{
 int VAR_11;
 struct inode *VAR_12 = ((void*)0);
 struct buffer_head *VAR_13 = ((void*)0);
 handle_t *VAR_14;
 struct ocfs2_super *VAR_15 = FUNC_2(VAR_7->i_sb);
 struct ocfs2_dinode *VAR_16 = (struct ocfs2_dinode *) VAR_8->b_data;

 VAR_12 =
  FUNC_14(VAR_15, VAR_2,
         FUNC_8(VAR_16->i_suballoc_slot));
 if (!VAR_12) {
  VAR_11 = -VAR_1;
  FUNC_9(VAR_11);
  goto bail;
 }

 FUNC_10(&VAR_12->i_mutex);
 VAR_11 = FUNC_15(VAR_12, &VAR_13, 1);
 if (VAR_11 < 0) {
  FUNC_11(&VAR_12->i_mutex);

  FUNC_9(VAR_11);
  goto bail;
 }

 VAR_14 = FUNC_22(VAR_15, VAR_3 +
       FUNC_20(VAR_7->i_sb));
 if (FUNC_1(VAR_14)) {
  VAR_11 = FUNC_3(VAR_14);
  FUNC_9(VAR_11);
  goto bail_unlock;
 }

 VAR_11 = FUNC_19(VAR_15, VAR_14, VAR_9, VAR_7,
      VAR_10);
 if (VAR_11 < 0) {
  FUNC_9(VAR_11);
  goto bail_commit;
 }


 VAR_11 = FUNC_17(VAR_14, FUNC_0(VAR_7), VAR_8,
      VAR_4);
 if (VAR_11 < 0) {
  FUNC_9(VAR_11);
  goto bail_commit;
 }

 VAR_16->i_dtime = FUNC_6(VAR_0.tv_sec);
 VAR_16->i_flags &= FUNC_5(~(VAR_6 | VAR_5));

 VAR_11 = FUNC_18(VAR_14, VAR_8);
 if (VAR_11 < 0) {
  FUNC_9(VAR_11);
  goto bail_commit;
 }

 FUNC_21(FUNC_0(VAR_7), VAR_8);
 FUNC_23(VAR_7);

 VAR_11 = FUNC_13(VAR_14, VAR_12,
       VAR_13, VAR_16);
 if (VAR_11 < 0)
  FUNC_9(VAR_11);

bail_commit:
 FUNC_12(VAR_15, VAR_14);
bail_unlock:
 FUNC_16(VAR_12, 1);
 FUNC_11(&VAR_12->i_mutex);
 FUNC_4(VAR_13);
bail:
 FUNC_7(VAR_12);

 return VAR_11;
}
