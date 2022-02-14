
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eapol_sm {void* eapReq; void* eapolEap; scalar_t__ eapReqData; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (struct eapol_sm*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(void *VAR_2)
{
 struct eapol_sm *VAR_3 = VAR_2;
 if (VAR_3 == ((void*)0))
  return;
 if (VAR_3->eapReqData && !VAR_3->eapReq) {
  FUNC_1(VAR_0, "EAPOL: received notification from EAP "
      "state machine - retrying pending EAP Request");
  VAR_3->eapolEap = VAR_1;
  VAR_3->eapReq = VAR_1;
  FUNC_0(VAR_3);
 }
}
