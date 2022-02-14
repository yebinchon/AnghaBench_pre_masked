
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int tval; int fval; int sval; int nval; int csub; } ;
typedef TYPE_1__ Cell ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 () ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

Cell *FUNC_3(Cell *VAR_5)
{
 Cell *VAR_6;



 VAR_6 = FUNC_0();
 VAR_6->tval = VAR_5->tval & ~(VAR_1|VAR_3|VAR_4);
 VAR_6->csub = VAR_0;
 VAR_6->nval = VAR_5->nval;
 if (FUNC_1(VAR_5) ) {
  VAR_6->sval = FUNC_2(VAR_5->sval);
  VAR_6->tval &= ~VAR_2;
 } else
  VAR_6->tval |= VAR_2;
 VAR_6->fval = VAR_5->fval;
 return VAR_6;
}
