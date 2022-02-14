
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ctxt {int * dlm_thread_task; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*) ;

void FUNC_2(struct dlm_ctxt *VAR_1)
{
 if (VAR_1->dlm_thread_task) {
  FUNC_1(VAR_0, "waiting for dlm thread to exit\n");
  FUNC_0(VAR_1->dlm_thread_task);
  VAR_1->dlm_thread_task = ((void*)0);
 }
}
