
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eapol_sm {int eap; int eapSuccess; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct eapol_sm*) ;
 int FUNC_2 (int ,char*) ;

void FUNC_3(struct eapol_sm *VAR_2)
{
 if (VAR_2 == ((void*)0))
  return;
 FUNC_2(VAR_0, "EAPOL: PMKSA caching was used - skip EAPOL");
 VAR_2->eapSuccess = VAR_1;
 FUNC_0(VAR_2->eap);
 FUNC_1(VAR_2);
}
