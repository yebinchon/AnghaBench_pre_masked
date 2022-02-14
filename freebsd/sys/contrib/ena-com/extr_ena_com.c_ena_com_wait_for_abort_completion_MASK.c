
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ena_com_admin_queue {int q_lock; int outstanding_cmds; } ;
struct ena_com_dev {struct ena_com_admin_queue admin_queue; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ,unsigned long) ;

void FUNC_4(struct ena_com_dev *VAR_1)
{
 struct ena_com_admin_queue *VAR_2 = &VAR_1->admin_queue;
 unsigned long VAR_3 = 0;

 FUNC_2(VAR_2->q_lock, VAR_3);
 while (FUNC_0(&VAR_2->outstanding_cmds) != 0) {
  FUNC_3(VAR_2->q_lock, VAR_3);
  FUNC_1(VAR_0);
  FUNC_2(VAR_2->q_lock, VAR_3);
 }
 FUNC_3(VAR_2->q_lock, VAR_3);
}
