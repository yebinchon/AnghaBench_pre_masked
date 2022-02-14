
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eapol_state_machine {int flags; } ;


 int VAR_0 ;

void FUNC_0(struct eapol_state_machine *VAR_1, int VAR_2)
{
 if (VAR_1 == ((void*)0))
  return;
 if (VAR_2)
  VAR_1->flags |= VAR_0;
 else
  VAR_1->flags &= ~VAR_0;
}
