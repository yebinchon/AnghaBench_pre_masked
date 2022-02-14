
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int ntasks; int ** tasks; } ;
typedef TYPE_1__ isc_taskpool_t ;
typedef int isc_boolean_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;

void
FUNC_2(isc_taskpool_t *VAR_0, isc_boolean_t VAR_1) {
 unsigned int VAR_2;

 FUNC_0(VAR_0 != ((void*)0));

 for (VAR_2 = 0; VAR_2 < VAR_0->ntasks; VAR_2++) {
  if (VAR_0->tasks[VAR_2] != ((void*)0))
   FUNC_1(VAR_0->tasks[VAR_2], VAR_1);
 }
}
