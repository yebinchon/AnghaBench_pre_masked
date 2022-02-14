
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct termp {scalar_t__ ti; TYPE_2__* tcol; TYPE_1__* ps; } ;
struct TYPE_4__ {int offset; } ;
struct TYPE_3__ {int flags; scalar_t__ psrow; scalar_t__ lineheight; scalar_t__ bottom; int left; int pscol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct termp*) ;
 int FUNC_1 (struct termp*) ;
 int FUNC_2 (struct termp*) ;

__attribute__((used)) static void
FUNC_3(struct termp *VAR_2)
{



 FUNC_2(VAR_2);
 FUNC_1(VAR_2);







 if (VAR_0 & VAR_2->ps->flags)
  return;



 VAR_2->ps->pscol = VAR_2->ps->left;



 if (VAR_1 & VAR_2->ps->flags)
  return;






 if (VAR_2->ps->psrow >= VAR_2->ps->lineheight + VAR_2->ps->bottom) {
  VAR_2->ps->psrow -= VAR_2->ps->lineheight;
  return;
 }

 FUNC_0(VAR_2);

 VAR_2->tcol->offset -= VAR_2->ti;
 VAR_2->ti = 0;
}
