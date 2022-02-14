
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atpic {int intr_raised; scalar_t__* acnt; int request; int aeoi; int rotate; int lowprio; int service; } ;



__attribute__((used)) static void
FUNC_0(struct atpic *VAR_0, int VAR_1)
{
 VAR_0->intr_raised = 0;

 if (VAR_0->acnt[VAR_1] == 0)
  VAR_0->request &= ~(1 << VAR_1);

 if (VAR_0->aeoi == 1) {
  if (VAR_0->rotate == 1)
   VAR_0->lowprio = VAR_1;
 } else {
  VAR_0->service |= (1 << VAR_1);
 }
}
