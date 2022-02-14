
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ocfs2_super {scalar_t__ local_alloc_state; struct buffer_head* local_alloc_bh; int slot_num; int la_enable_wq; } ;
struct ocfs2_dinode {int dummy; } ;
struct inode {int i_mutex; } ;
struct buffer_head {int b_size; scalar_t__ b_data; } ;
typedef int handle_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct ocfs2_dinode*) ;
 struct ocfs2_dinode* FUNC_8 (int ,int ) ;
 int FUNC_9 (struct ocfs2_dinode*,struct ocfs2_dinode*,int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int) ;
 int FUNC_12 () ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct ocfs2_dinode*) ;
 int FUNC_16 (struct ocfs2_super*,int *) ;
 struct inode* FUNC_17 (struct ocfs2_super*,int ,int ) ;
 int FUNC_18 (struct inode*,struct buffer_head**,int) ;
 int FUNC_19 (struct inode*,int) ;
 int FUNC_20 (int *,int ,struct buffer_head*,int ) ;
 int FUNC_21 (int *,struct buffer_head*) ;
 int * FUNC_22 (struct ocfs2_super*,int ) ;
 int FUNC_23 (struct ocfs2_super*,int *,struct ocfs2_dinode*,struct inode*,struct buffer_head*) ;
 int VAR_11 ;

void FUNC_24(struct ocfs2_super *VAR_12)
{
 int VAR_13;
 handle_t *VAR_14;
 struct inode *VAR_15 = ((void*)0);
 struct buffer_head *VAR_16 = ((void*)0);
 struct buffer_head *VAR_17 = ((void*)0);
 struct inode *VAR_18 = ((void*)0);
 struct ocfs2_dinode *VAR_19 = ((void*)0);
 struct ocfs2_dinode *VAR_20 = ((void*)0);

 FUNC_10();

 FUNC_4(&VAR_12->la_enable_wq);
 FUNC_5(VAR_11);

 if (VAR_12->local_alloc_state == VAR_9)
  goto out;

 VAR_15 =
  FUNC_17(VAR_12,
         VAR_5,
         VAR_12->slot_num);
 if (!VAR_15) {
  VAR_13 = -VAR_1;
  FUNC_11(VAR_13);
  goto out;
 }

 VAR_12->local_alloc_state = VAR_8;

 VAR_18 = FUNC_17(VAR_12,
          VAR_4,
          VAR_6);
 if (!VAR_18) {
  VAR_13 = -VAR_0;
  FUNC_11(VAR_13);
  goto out;
 }

 FUNC_13(&VAR_18->i_mutex);

 VAR_13 = FUNC_18(VAR_18, &VAR_17, 1);
 if (VAR_13 < 0) {
  FUNC_11(VAR_13);
  goto out_mutex;
 }


 VAR_14 = FUNC_22(VAR_12, VAR_10);
 if (FUNC_1(VAR_14)) {
  FUNC_11(FUNC_2(VAR_14));
  VAR_14 = ((void*)0);
  goto out_unlock;
 }

 VAR_16 = VAR_12->local_alloc_bh;
 VAR_20 = (struct ocfs2_dinode *) VAR_16->b_data;

 VAR_19 = FUNC_8(VAR_16->b_size, VAR_3);
 if (!VAR_19) {
  VAR_13 = -VAR_2;
  goto out_commit;
 }
 FUNC_9(VAR_19, VAR_20, VAR_16->b_size);

 VAR_13 = FUNC_20(VAR_14, FUNC_0(VAR_15),
      VAR_16, VAR_7);
 if (VAR_13 < 0) {
  FUNC_11(VAR_13);
  goto out_commit;
 }

 FUNC_15(VAR_20);

 VAR_13 = FUNC_21(VAR_14, VAR_16);
 if (VAR_13 < 0) {
  FUNC_11(VAR_13);
  goto out_commit;
 }

 FUNC_3(VAR_16);
 VAR_12->local_alloc_bh = ((void*)0);
 VAR_12->local_alloc_state = VAR_9;

 VAR_13 = FUNC_23(VAR_12, VAR_14, VAR_19,
       VAR_18, VAR_17);
 if (VAR_13 < 0)
  FUNC_11(VAR_13);

out_commit:
 FUNC_16(VAR_12, VAR_14);

out_unlock:
 FUNC_3(VAR_17);

 FUNC_19(VAR_18, 1);

out_mutex:
 FUNC_14(&VAR_18->i_mutex);
 FUNC_6(VAR_18);

out:
 if (VAR_15)
  FUNC_6(VAR_15);

 if (VAR_19)
  FUNC_7(VAR_19);

 FUNC_12();
}
