
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int csub; int ctype; } ;
struct TYPE_7__ {int ntype; } ;
typedef TYPE_1__ Node ;
typedef TYPE_2__ Cell ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ,TYPE_1__*) ;

Node *FUNC_1(Cell *VAR_2, int VAR_3)
{
 Node *VAR_4;

 VAR_2->ctype = VAR_1;
 VAR_2->csub = VAR_3;
 VAR_4 = FUNC_0(0, (Node *) VAR_2);
 VAR_4->ntype = VAR_0;
 return(VAR_4);
}
