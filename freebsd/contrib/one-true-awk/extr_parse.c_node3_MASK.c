
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int nobj; struct TYPE_7__** narg; } ;
typedef TYPE_1__ Node ;


 TYPE_1__* FUNC_0 (int) ;

Node *FUNC_1(int VAR_0, Node *VAR_1, Node *VAR_2, Node *VAR_3)
{
 Node *VAR_4;

 VAR_4 = FUNC_0(3);
 VAR_4->nobj = VAR_0;
 VAR_4->narg[0] = VAR_1;
 VAR_4->narg[1] = VAR_2;
 VAR_4->narg[2] = VAR_3;
 return(VAR_4);
}
