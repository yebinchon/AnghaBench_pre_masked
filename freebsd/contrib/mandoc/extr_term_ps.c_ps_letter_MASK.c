
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct termp {TYPE_1__* ps; } ;
struct TYPE_2__ {char last; int flags; int nextf; size_t pscol; size_t pscolnext; } ;


 int VAR_0 ;
 size_t VAR_1 ;



 int FUNC_0 (int) ;
 int FUNC_1 (struct termp*) ;
 int FUNC_2 (struct termp*) ;

__attribute__((used)) static void
FUNC_3(struct termp *VAR_2, int VAR_3)
{
 size_t VAR_4;
 char VAR_5;

 VAR_5 = VAR_3 >= 128 || VAR_3 <= 0 ? '?' : VAR_3;







 if (VAR_5 == '\b') {
  FUNC_0(VAR_2->ps->last != '\0');
  FUNC_0( ! (VAR_2->ps->flags & VAR_0));
  VAR_2->ps->flags |= VAR_0;
  return;
 }





 if (VAR_2->ps->flags & VAR_0) {
  if (VAR_2->ps->last == '_') {
   switch (VAR_2->ps->nextf) {
   case 130:
    break;
   case 129:
    VAR_2->ps->nextf = 130;
    break;
   default:
    VAR_2->ps->nextf = 128;
   }
   VAR_2->ps->last = VAR_5;
   VAR_2->ps->flags &= ~VAR_0;
   return;
  }
  if (VAR_2->ps->last == VAR_5) {
   switch (VAR_2->ps->nextf) {
   case 130:
    break;
   case 128:
    VAR_2->ps->nextf = 130;
    break;
   default:
    VAR_2->ps->nextf = 129;
   }
   VAR_2->ps->flags &= ~VAR_0;
   return;
  }






  VAR_4 = VAR_2->ps->pscol;
 } else
  VAR_4 = VAR_1;







 FUNC_2(VAR_2);







 VAR_2->ps->last = VAR_5;
 if (VAR_4 != VAR_1) {
  if (VAR_2->ps->pscolnext < VAR_2->ps->pscol)
   VAR_2->ps->pscolnext = VAR_2->ps->pscol;
  FUNC_1(VAR_2);
  VAR_2->ps->pscol = VAR_4;
  VAR_2->ps->flags &= ~VAR_0;
 } else
  VAR_2->ps->pscolnext = 0;
}
