
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char* sval; int fval; int nval; int tval; } ;
struct TYPE_7__ {struct TYPE_7__* nnext; } ;
typedef TYPE_1__ Node ;
typedef TYPE_2__ Cell ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;

void FUNC_4(Cell *VAR_1, Node *VAR_2, Node *VAR_3)
{
 Node *VAR_4;
 int VAR_5;

 if (FUNC_3(VAR_1)) {
  FUNC_0( "`%s' is an array name and a function name", VAR_1->nval );
  return;
 }
 if (FUNC_2(VAR_1->nval) != -1) {
  FUNC_0( "`%s' is both function name and argument name", VAR_1->nval );
  return;
 }

 VAR_1->tval = VAR_0;
 VAR_1->sval = (char *) VAR_3;
 VAR_5 = 0;
 for (VAR_4 = VAR_2; VAR_4; VAR_4 = VAR_4->nnext)
  VAR_5++;
 VAR_1->fval = VAR_5;
 FUNC_1( ("defining func %s (%d args)\n", VAR_1->nval, VAR_5) );
}
