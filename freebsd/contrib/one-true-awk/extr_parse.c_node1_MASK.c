
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nobj; struct TYPE_5__** narg; } ;
typedef TYPE_1__ Node ;


 TYPE_1__* FUNC_0 (int) ;

Node *FUNC_1(int VAR_0, Node *VAR_1)
{
 Node *VAR_2;

 VAR_2 = FUNC_0(1);
 VAR_2->nobj = VAR_0;
 VAR_2->narg[0]=VAR_1;
 return(VAR_2);
}
