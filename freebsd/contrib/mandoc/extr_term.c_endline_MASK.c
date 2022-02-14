
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termp {int flags; scalar_t__ viscol; scalar_t__ maxrmargin; int (* endline ) (struct termp*) ;scalar_t__ minbl; int * mc; int (* advance ) (struct termp*,scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct termp*,scalar_t__) ;
 int FUNC_1 (struct termp*) ;
 int FUNC_2 (struct termp*,int *) ;

__attribute__((used)) static void
FUNC_3(struct termp *VAR_4)
{
 if ((VAR_4->flags & (VAR_1 | VAR_0)) == VAR_0) {
  VAR_4->mc = ((void*)0);
  VAR_4->flags &= ~VAR_0;
 }
 if (VAR_4->mc != ((void*)0)) {
  if (VAR_4->viscol && VAR_4->maxrmargin >= VAR_4->viscol)
   (*VAR_4->advance)(VAR_4, VAR_4->maxrmargin - VAR_4->viscol + 1);
  VAR_4->flags |= VAR_2 | VAR_3;
  FUNC_2(VAR_4, VAR_4->mc);
  VAR_4->flags &= ~(VAR_2 | VAR_1);
 }
 VAR_4->viscol = 0;
 VAR_4->minbl = 0;
 (*VAR_4->endline)(VAR_4);
}
