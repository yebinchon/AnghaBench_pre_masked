
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct termp {TYPE_1__* ps; } ;
struct TYPE_2__ {scalar_t__ psmargcur; scalar_t__ psmargsz; int psmarg; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct termp *VAR_1, size_t VAR_2)
{
 if (VAR_1->ps->psmargcur + VAR_2 <= VAR_1->ps->psmargsz)
  return;

 if (VAR_2 < VAR_0)
  VAR_2 = VAR_0;

 VAR_1->ps->psmargsz += VAR_2;
 VAR_1->ps->psmarg = FUNC_0(VAR_1->ps->psmarg, VAR_1->ps->psmargsz);
}
