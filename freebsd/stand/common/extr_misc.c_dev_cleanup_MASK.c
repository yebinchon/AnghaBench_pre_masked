
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* dv_cleanup ) () ;} ;


 TYPE_1__** VAR_0 ;
 int FUNC_0 () ;

void
FUNC_1(void)
{
    int VAR_1;


    for (VAR_1 = 0; VAR_0[VAR_1] != ((void*)0); ++VAR_1)
 if (VAR_0[VAR_1]->dv_cleanup != ((void*)0))
     (VAR_0[VAR_1]->dv_cleanup)();
}
