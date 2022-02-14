
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eapol_state_machine {struct eapol_state_machine* identity; int radius_cui; scalar_t__ eap; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct eapol_state_machine*,struct eapol_state_machine*) ;
 int FUNC_2 (struct eapol_state_machine*) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct eapol_state_machine *VAR_2)
{
 if (VAR_2 == ((void*)0))
  return;

 FUNC_1(VAR_0, ((void*)0), VAR_2);
 FUNC_1(VAR_1, VAR_2, ((void*)0));
 if (VAR_2->eap)
  FUNC_0(VAR_2->eap);

 FUNC_3(VAR_2->radius_cui);
 FUNC_2(VAR_2->identity);
 FUNC_2(VAR_2);
}
