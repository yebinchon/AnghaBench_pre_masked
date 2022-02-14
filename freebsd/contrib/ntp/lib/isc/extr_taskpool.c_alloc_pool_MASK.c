
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int ntasks; unsigned int quantum; int ** tasks; int * tmgr; int * mctx; } ;
typedef TYPE_1__ isc_taskpool_t ;
typedef int isc_taskmgr_t ;
typedef int isc_task_t ;
typedef int isc_result_t ;
typedef int isc_mem_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int *,TYPE_1__*,int) ;

__attribute__((used)) static isc_result_t
FUNC_2(isc_taskmgr_t *VAR_2, isc_mem_t *VAR_3, unsigned int VAR_4,
    unsigned int VAR_5, isc_taskpool_t **VAR_6)
{
 isc_taskpool_t *VAR_7;
 unsigned int VAR_8;

 VAR_7 = FUNC_0(VAR_3, sizeof(*VAR_7));
 if (VAR_7 == ((void*)0))
  return (VAR_0);
 VAR_7->mctx = VAR_3;
 VAR_7->ntasks = VAR_4;
 VAR_7->quantum = VAR_5;
 VAR_7->tmgr = VAR_2;
 VAR_7->tasks = FUNC_0(VAR_3, VAR_4 * sizeof(isc_task_t *));
 if (VAR_7->tasks == ((void*)0)) {
  FUNC_1(VAR_3, VAR_7, sizeof(*VAR_7));
  return (VAR_0);
 }
 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++)
  VAR_7->tasks[VAR_8] = ((void*)0);

 *VAR_6 = VAR_7;
 return (VAR_1);
}
