
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int nvpair_t ;
struct TYPE_6__ {int nvl_head; } ;
typedef TYPE_1__ nvlist_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,TYPE_1__*) ;

void
FUNC_5(nvlist_t *VAR_0, nvpair_t *VAR_1)
{

 FUNC_0(VAR_0);
 FUNC_1(VAR_1);
 FUNC_2(FUNC_3(VAR_1) == VAR_0);

 FUNC_4(&VAR_0->nvl_head, VAR_1, VAR_0);
}
