
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* cnext; int sval; int tval; int nval; } ;
typedef TYPE_1__ Cell ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_4 (int ) ;

void FUNC_5(Cell *VAR_1)
{
 if (FUNC_3(VAR_1)) {
     FUNC_2( ("freeing %s %s %o\n", FUNC_1(VAR_1->nval), FUNC_1(VAR_1->sval), VAR_1->tval) );
  FUNC_4(VAR_1->sval);
 }
 if (VAR_1 == VAR_0)
  FUNC_0("tempcell list is curdled");
 VAR_1->cnext = VAR_0;
 VAR_0 = VAR_1;
}
