
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eapol_state_machine {void* eap; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (struct eapol_state_machine*) ;

int FUNC_2(struct eapol_state_machine *VAR_0, void *VAR_1)
{
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_1 != VAR_0->eap)
  return -1;

 FUNC_0(VAR_0->eap);
 FUNC_1(VAR_0);

 return 0;
}
