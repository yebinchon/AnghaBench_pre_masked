
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eapol_sm {int heldPeriod; int authPeriod; int startPeriod; int maxStart; } ;



void FUNC_0(struct eapol_sm *VAR_0, int VAR_1, int VAR_2,
   int VAR_3, int VAR_4)
{
 if (VAR_0 == ((void*)0))
  return;
 if (VAR_1 >= 0)
  VAR_0->heldPeriod = VAR_1;
 if (VAR_2 >= 0)
  VAR_0->authPeriod = VAR_2;
 if (VAR_3 >= 0)
  VAR_0->startPeriod = VAR_3;
 if (VAR_4 >= 0)
  VAR_0->maxStart = VAR_4;
}
