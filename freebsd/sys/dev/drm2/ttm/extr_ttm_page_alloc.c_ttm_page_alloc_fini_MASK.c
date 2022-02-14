
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int kobj_ref; int * pools; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(void)
{
 int VAR_3;

 FUNC_0("[TTM] Finalizing pool allocator\n");
 FUNC_4(VAR_2);

 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3)
  FUNC_2(&VAR_2->pools[VAR_3], VAR_0);

 if (FUNC_1(&VAR_2->kobj_ref))
  FUNC_3(VAR_2);
 VAR_2 = ((void*)0);
}
