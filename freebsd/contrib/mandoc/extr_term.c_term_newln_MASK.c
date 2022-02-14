
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct termp {scalar_t__ viscol; TYPE_1__* tcol; int flags; } ;
struct TYPE_2__ {scalar_t__ lastcol; } ;


 int VAR_0 ;
 int FUNC_0 (struct termp*) ;

void
FUNC_1(struct termp *VAR_1)
{

 VAR_1->flags |= VAR_0;
 if (VAR_1->tcol->lastcol || VAR_1->viscol)
  FUNC_0(VAR_1);
}
