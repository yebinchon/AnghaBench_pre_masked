
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct termp {int flags; scalar_t__ viscol; size_t minbl; scalar_t__ maxrmargin; size_t (* width ) (struct termp*,char) ;size_t col; size_t trailspace; TYPE_1__* tcol; } ;
struct TYPE_2__ {scalar_t__ offset; size_t col; size_t rmargin; size_t lastcol; int* buf; } ;



 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct termp*) ;
 size_t FUNC_1 (struct termp*,char) ;
 int FUNC_2 (struct termp*,size_t,size_t,size_t,size_t) ;
 int FUNC_3 (struct termp*,size_t*,size_t*,size_t) ;
 size_t FUNC_4 (struct termp*,size_t) ;
 size_t FUNC_5 (size_t) ;

void
FUNC_6(struct termp *VAR_12)
{
 size_t VAR_13;
 size_t VAR_14;
 size_t VAR_15;
 size_t VAR_16;
 size_t VAR_17;
 size_t VAR_18;






 VAR_13 = (VAR_12->flags & VAR_10) || VAR_12->tcol->offset < VAR_12->viscol ?
     0 : VAR_12->tcol->offset - VAR_12->viscol;
 if (VAR_12->minbl && VAR_13 < VAR_12->minbl)
  VAR_13 = VAR_12->minbl;

 if ((VAR_12->flags & VAR_8) == 0)
  VAR_12->tcol->col = 0;



 for (;;) {
  VAR_15 = VAR_12->tcol->rmargin > VAR_12->viscol + VAR_13 ?
      VAR_12->tcol->rmargin - VAR_12->viscol - VAR_13 : 0;
  VAR_16 = VAR_12->flags & VAR_4 ? VAR_0 :
      (VAR_12->flags & VAR_9) == 0 ? VAR_15 :
      VAR_12->maxrmargin > VAR_12->viscol + VAR_13 ?
      VAR_12->maxrmargin - VAR_12->viscol - VAR_13 : 0;






  FUNC_3(VAR_12, &VAR_18, &VAR_14, VAR_16);
  if (VAR_18 == 0)
   break;







  if (VAR_14 < VAR_16) {
   if (VAR_12->flags & VAR_6)
    VAR_13 += (VAR_16 - VAR_14) / 2;
   else if (VAR_12->flags & VAR_11)
    VAR_13 += VAR_16 - VAR_14;
  }



  FUNC_2(VAR_12, VAR_13, VAR_18, VAR_14, VAR_16);
  for (VAR_17 = VAR_12->tcol->col; VAR_17 < VAR_12->tcol->lastcol; VAR_17++) {
   switch (VAR_12->tcol->buf[VAR_17]) {
   case '\t':
    if (VAR_12->flags & VAR_5)
     VAR_14 = FUNC_5(VAR_14);
    continue;
   case ' ':
    if (VAR_12->flags & VAR_5)
     VAR_14 += (*VAR_12->width)(VAR_12, ' ');
    continue;
   case '\n':
   case 128:
    continue;
   default:
    break;
   }
   break;
  }
  if (VAR_17 == VAR_12->tcol->lastcol)
   break;






  while (VAR_12->tcol->col < VAR_12->tcol->lastcol &&
      VAR_12->tcol->buf[VAR_12->tcol->col] == ' ')
   VAR_12->tcol->col++;
  if (VAR_12->flags & VAR_8)
   return;

  FUNC_0(VAR_12);
  VAR_12->viscol = 0;
  VAR_13 = VAR_12->flags & VAR_3 ?
      VAR_12->tcol->rmargin : VAR_12->tcol->offset;
 }



 VAR_12->col = VAR_12->tcol->col = VAR_12->tcol->lastcol = 0;
 VAR_12->minbl = VAR_12->trailspace;
 VAR_12->flags &= ~(VAR_1 | VAR_2 | VAR_10);

 if (VAR_12->flags & VAR_8)
  return;
 if ((VAR_12->flags & VAR_7) == 0 &&
     ((VAR_12->flags & VAR_9) == 0 ||
      VAR_14 + FUNC_4(VAR_12, VAR_12->trailspace) > VAR_15))
  FUNC_0(VAR_12);
}
