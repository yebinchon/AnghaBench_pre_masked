
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nilfs_sc_info {int sc_state_lock; int * sc_task; int sc_wait_task; int sc_wait_daemon; int sc_state; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct nilfs_sc_info *VAR_1)
{
 VAR_1->sc_state |= VAR_0;

 while (VAR_1->sc_task) {
  FUNC_3(&VAR_1->sc_wait_daemon);
  FUNC_1(&VAR_1->sc_state_lock);
  FUNC_2(VAR_1->sc_wait_task, VAR_1->sc_task == ((void*)0));
  FUNC_0(&VAR_1->sc_state_lock);
 }
}
