
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termp {int fontl; int* fontq; size_t fonti; } ;
typedef enum termfont { ____Placeholder_termfont } termfont ;



void
FUNC_0(struct termp *VAR_0, enum termfont VAR_1)
{

 VAR_0->fontl = VAR_0->fontq[VAR_0->fonti];
 VAR_0->fontq[VAR_0->fonti] = VAR_1;
}
