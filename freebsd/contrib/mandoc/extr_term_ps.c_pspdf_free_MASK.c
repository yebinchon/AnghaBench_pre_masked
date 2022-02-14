
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct termp {TYPE_1__* ps; } ;
struct TYPE_2__ {struct TYPE_2__* pdfobjs; struct TYPE_2__* psmarg; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct termp*) ;

void
FUNC_2(void *VAR_0)
{
 struct termp *VAR_1;

 VAR_1 = (struct termp *)VAR_0;

 FUNC_0(VAR_1->ps->psmarg);
 FUNC_0(VAR_1->ps->pdfobjs);

 FUNC_0(VAR_1->ps);
 FUNC_1(VAR_1);
}
