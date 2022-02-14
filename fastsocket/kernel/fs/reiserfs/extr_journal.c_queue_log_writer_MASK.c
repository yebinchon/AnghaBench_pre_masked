
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wait_queue_t ;
struct super_block {int dummy; } ;
struct reiserfs_journal {int j_join_wait; int j_state; } ;


 int VAR_0 ;
 struct reiserfs_journal* FUNC_0 (struct super_block*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int VAR_3 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(struct super_block *VAR_4)
{
 wait_queue_t VAR_5;
 struct reiserfs_journal *VAR_6 = FUNC_0(VAR_4);
 FUNC_6(VAR_0, &VAR_6->j_state);





 FUNC_3(&VAR_5, VAR_3);
 FUNC_2(&VAR_6->j_join_wait, &VAR_5);
 FUNC_7(VAR_2);
 if (FUNC_8(VAR_0, &VAR_6->j_state))
  FUNC_5();
 FUNC_1(VAR_1);
 FUNC_4(&VAR_6->j_join_wait, &VAR_5);
}
