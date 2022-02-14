
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termp {int fontl; int* fontq; size_t fonti; size_t fontsz; } ;
typedef enum termfont { ____Placeholder_termfont } termfont ;


 int* FUNC_0 (int*,int,int) ;

void
FUNC_1(struct termp *VAR_0, enum termfont VAR_1)
{

 VAR_0->fontl = VAR_0->fontq[VAR_0->fonti];
 if (++VAR_0->fonti == VAR_0->fontsz) {
  VAR_0->fontsz += 8;
  VAR_0->fontq = FUNC_0(VAR_0->fontq,
      VAR_0->fontsz, sizeof(*VAR_0->fontq));
 }
 VAR_0->fontq[VAR_0->fonti] = VAR_1;
}
