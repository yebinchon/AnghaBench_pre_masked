
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dlm_ctxt {int dlm_reco_thread_wq; int name; } ;


 int FUNC_0 (struct dlm_ctxt*,int ) ;
 int FUNC_1 (int ,char*,int ,int,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;

int FUNC_5(struct dlm_ctxt *VAR_0, u8 VAR_1, int VAR_2)
{
 if (VAR_2) {
  FUNC_1(0, "%s: waiting %dms for notification of "
       "recovery of node %u\n", VAR_0->name, VAR_2, VAR_1);
  FUNC_4(VAR_0->dlm_reco_thread_wq,
      FUNC_0(VAR_0, VAR_1),
      FUNC_2(VAR_2));
 } else {
  FUNC_1(0, "%s: waiting indefinitely for notification "
       "of recovery of node %u\n", VAR_0->name, VAR_1);
  FUNC_3(VAR_0->dlm_reco_thread_wq,
      FUNC_0(VAR_0, VAR_1));
 }

 return 0;
}
