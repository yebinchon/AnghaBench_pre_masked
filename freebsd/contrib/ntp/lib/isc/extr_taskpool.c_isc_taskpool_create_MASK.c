
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * tasks; } ;
typedef TYPE_1__ isc_taskpool_t ;
typedef int isc_taskmgr_t ;
typedef scalar_t__ isc_result_t ;
typedef int isc_mem_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *,int *,unsigned int,unsigned int,TYPE_1__**) ;
 scalar_t__ FUNC_2 (int *,unsigned int,int *) ;
 int FUNC_3 (int ,char*,int *) ;
 int FUNC_4 (TYPE_1__**) ;

isc_result_t
FUNC_5(isc_taskmgr_t *VAR_1, isc_mem_t *VAR_2,
      unsigned int VAR_3, unsigned int VAR_4,
      isc_taskpool_t **VAR_5)
{
 unsigned int VAR_6;
 isc_taskpool_t *VAR_7 = ((void*)0);
 isc_result_t VAR_8;

 FUNC_0(VAR_3 > 0);


 VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, &VAR_7);
 if (VAR_8 != VAR_0)
  return (VAR_8);


 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  VAR_8 = FUNC_2(VAR_1, VAR_4, &VAR_7->tasks[VAR_6]);
  if (VAR_8 != VAR_0) {
   FUNC_4(&VAR_7);
   return (VAR_8);
  }
  FUNC_3(VAR_7->tasks[VAR_6], "taskpool", ((void*)0));
 }

 *VAR_5 = VAR_7;
 return (VAR_0);
}
