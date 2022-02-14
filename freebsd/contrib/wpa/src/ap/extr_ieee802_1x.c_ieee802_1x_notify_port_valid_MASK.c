
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eapol_state_machine {int portValid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct eapol_state_machine*) ;

void FUNC_1(struct eapol_state_machine *VAR_2,
      int VAR_3)
{
 if (VAR_2 == ((void*)0))
  return;
 VAR_2->portValid = VAR_3 ? VAR_1 : VAR_0;
 FUNC_0(VAR_2);
}
