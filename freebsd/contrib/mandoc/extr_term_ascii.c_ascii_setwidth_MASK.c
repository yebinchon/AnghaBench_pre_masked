
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct termp {int defrmargin; size_t lastrmargin; int maxrmargin; TYPE_1__* tcol; } ;
struct TYPE_2__ {int rmargin; } ;



__attribute__((used)) static void
FUNC_0(struct termp *VAR_0, int VAR_1, int VAR_2)
{

 VAR_2 /= 24;
 VAR_0->tcol->rmargin = VAR_0->defrmargin;
 if (VAR_1 > 0)
  VAR_0->defrmargin += VAR_2;
 else if (VAR_1 == 0)
  VAR_0->defrmargin = VAR_2 ? (size_t)VAR_2 : VAR_0->lastrmargin;
 else if (VAR_0->defrmargin > (size_t)VAR_2)
  VAR_0->defrmargin -= VAR_2;
 else
  VAR_0->defrmargin = 0;
 if (VAR_0->defrmargin > 1000)
  VAR_0->defrmargin = 1000;
 VAR_0->lastrmargin = VAR_0->tcol->rmargin;
 VAR_0->tcol->rmargin = VAR_0->maxrmargin = VAR_0->defrmargin;
}
