
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t isc_uint32_t ;
struct TYPE_3__ {size_t ntasks; int * tasks; } ;
typedef TYPE_1__ isc_taskpool_t ;
typedef int isc_task_t ;


 int FUNC_0 (size_t*) ;
 int FUNC_1 (int ,int **) ;

void
FUNC_2(isc_taskpool_t *VAR_0, isc_task_t **VAR_1) {
 isc_uint32_t VAR_2;
 FUNC_0(&VAR_2);
 FUNC_1(VAR_0->tasks[VAR_2 % VAR_0->ntasks], VAR_1);
}
