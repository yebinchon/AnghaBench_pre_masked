
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uni_ierr {scalar_t__ ie; } ;
struct TYPE_2__ {int errcnt; struct uni_ierr* err; } ;
struct uni {TYPE_1__ cx; } ;


 scalar_t__ VAR_0 ;

void
FUNC_0(struct uni *VAR_1)
{
 struct uni_ierr *VAR_2, *VAR_3;

 VAR_3 = VAR_2 = VAR_1->cx.err;
 while (VAR_2 < VAR_1->cx.err + VAR_1->cx.errcnt) {
  if (VAR_2->ie != VAR_0) {
   if (VAR_3 != VAR_2)
    *VAR_3 = *VAR_2;
   VAR_3++;
  }
  VAR_2++;
 }
 VAR_1->cx.errcnt = VAR_3 - VAR_1->cx.err;
}
