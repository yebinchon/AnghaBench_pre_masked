
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int nobj; struct TYPE_6__** narg; } ;
typedef TYPE_1__ Node ;


 TYPE_1__* FUNC_0 (int) ;

Node *FUNC_1(int VAR_0, Node *VAR_1, Node *VAR_2)
{
 Node *VAR_3;

 VAR_3 = FUNC_0(2);
 VAR_3->nobj = VAR_0;
 VAR_3->narg[0] = VAR_1;
 VAR_3->narg[1] = VAR_2;
 return(VAR_3);
}
