
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct termp {TYPE_2__* ps; } ;
struct TYPE_6__ {TYPE_1__* gly; } ;
struct TYPE_5__ {char last; size_t nextf; size_t lastf; size_t pscolnext; size_t pscol; } ;
struct TYPE_4__ {size_t wx; } ;


 size_t VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (struct termp*) ;
 int FUNC_1 (struct termp*,char) ;
 int FUNC_2 (struct termp*,size_t) ;

__attribute__((used)) static void
FUNC_3(struct termp *VAR_2)
{
 size_t VAR_3;

 if (VAR_2->ps->last == '\0')
  return;



 if (VAR_2->ps->nextf != VAR_2->ps->lastf) {
  FUNC_0(VAR_2);
  FUNC_2(VAR_2, VAR_2->ps->nextf);
 }
 VAR_2->ps->nextf = VAR_0;






 if (VAR_2->ps->pscolnext) {
  VAR_3 = VAR_1[VAR_2->ps->lastf].gly[(int)VAR_2->ps->last-32].wx;
  if (VAR_2->ps->pscol + VAR_3 < VAR_2->ps->pscolnext)
   VAR_2->ps->pscol = (VAR_2->ps->pscol +
       VAR_2->ps->pscolnext - VAR_3) / 2;
 }

 FUNC_1(VAR_2, VAR_2->ps->last);
 VAR_2->ps->last = '\0';






 if (VAR_2->ps->pscol < VAR_2->ps->pscolnext) {
  FUNC_0(VAR_2);
  VAR_2->ps->pscol = VAR_2->ps->pscolnext;
 }
}
