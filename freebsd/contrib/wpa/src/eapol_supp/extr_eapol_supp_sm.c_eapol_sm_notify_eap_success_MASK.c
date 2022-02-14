
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eapol_sm {int eap; void* altAccept; void* eapSuccess; } ;
typedef void* Boolean ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct eapol_sm*) ;
 int FUNC_2 (int ,char*,void*) ;

void FUNC_3(struct eapol_sm *VAR_1, Boolean VAR_2)
{
 if (VAR_1 == ((void*)0))
  return;
 FUNC_2(VAR_0, "EAPOL: External notification - "
     "EAP success=%d", VAR_2);
 VAR_1->eapSuccess = VAR_2;
 VAR_1->altAccept = VAR_2;
 if (VAR_2)
  FUNC_0(VAR_1->eap);
 FUNC_1(VAR_1);
}
