
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ctxt {int * dlm_reco_thread_task; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int * FUNC_2 (int ,struct dlm_ctxt*,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;

int FUNC_5(struct dlm_ctxt *VAR_2)
{
 FUNC_3(0, "starting dlm recovery thread...\n");

 VAR_2->dlm_reco_thread_task = FUNC_2(VAR_1, VAR_2,
      "dlm_reco_thread");
 if (FUNC_0(VAR_2->dlm_reco_thread_task)) {
  FUNC_4(FUNC_1(VAR_2->dlm_reco_thread_task));
  VAR_2->dlm_reco_thread_task = ((void*)0);
  return -VAR_0;
 }

 return 0;
}
