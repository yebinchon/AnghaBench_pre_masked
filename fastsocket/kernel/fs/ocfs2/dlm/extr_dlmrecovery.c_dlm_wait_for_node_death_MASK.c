
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dlm_ctxt {int dlm_reco_thread_wq; int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct dlm_ctxt*,int ) ;
 int FUNC_1 (int ,char*,int ,int,...) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;

int FUNC_5(struct dlm_ctxt *VAR_1, u8 VAR_2, int VAR_3)
{
 if (VAR_3) {
  FUNC_1(VAR_0, "%s: waiting %dms for notification of "
       "death of node %u\n", VAR_1->name, VAR_3, VAR_2);
  FUNC_4(VAR_1->dlm_reco_thread_wq,
      FUNC_0(VAR_1, VAR_2),
      FUNC_2(VAR_3));
 } else {
  FUNC_1(VAR_0, "%s: waiting indefinitely for notification "
       "of death of node %u\n", VAR_1->name, VAR_2);
  FUNC_3(VAR_1->dlm_reco_thread_wq,
      FUNC_0(VAR_1, VAR_2));
 }

 return 0;
}
