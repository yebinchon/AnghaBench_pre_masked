
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tval; int fval; int sval; int nval; } ;
typedef TYPE_1__ Cell ;


 int FUNC_0 (char*,char const*,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,TYPE_1__*,int ,int ,int ,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

void FUNC_3(Cell *VAR_1, const char *VAR_2)
{
 if (FUNC_2(VAR_1))
  FUNC_0("can't %s %s; it's an array name.", VAR_2, VAR_1->nval);
 if (VAR_1->tval & VAR_0)
  FUNC_0("can't %s %s; it's a function.", VAR_2, VAR_1->nval);
 FUNC_1("funny variable %p: n=%s s=\"%s\" f=%g t=%o",
  VAR_1, VAR_1->nval, VAR_1->sval, VAR_1->fval, VAR_1->tval);
}
