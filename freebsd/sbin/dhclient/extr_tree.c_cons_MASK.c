
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* pair ;
typedef int caddr_t ;
struct TYPE_5__ {struct TYPE_5__* cdr; int car; } ;


 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;

pair
FUNC_2(caddr_t VAR_0, pair VAR_1)
{
 pair VAR_2 = FUNC_0(1, sizeof(*VAR_2));
 if (!VAR_2)
  FUNC_1("no memory for cons.");
 VAR_2->car = VAR_0;
 VAR_2->cdr = VAR_1;
 return (VAR_2);
}
