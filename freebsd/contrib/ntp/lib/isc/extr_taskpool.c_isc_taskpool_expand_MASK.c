
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int ntasks; int ** tasks; int quantum; int tmgr; int mctx; } ;
typedef TYPE_1__ isc_taskpool_t ;
typedef int isc_result_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,unsigned int,int ,TYPE_1__**) ;
 int FUNC_2 (int ,int ,int **) ;
 int FUNC_3 (int *,char*,int *) ;
 int FUNC_4 (TYPE_1__**) ;

isc_result_t
FUNC_5(isc_taskpool_t **VAR_1, unsigned int VAR_2,
      isc_taskpool_t **VAR_3)
{
 isc_result_t VAR_4;
 isc_taskpool_t *VAR_5;

 FUNC_0(VAR_1 != ((void*)0) && *VAR_1 != ((void*)0));
 FUNC_0(VAR_3 != ((void*)0) && *VAR_3 == ((void*)0));

 VAR_5 = *VAR_1;
 if (VAR_2 > VAR_5->ntasks) {
  isc_taskpool_t *VAR_6 = ((void*)0);
  unsigned int VAR_7;


  VAR_4 = FUNC_1(VAR_5->tmgr, VAR_5->mctx, VAR_2,
        VAR_5->quantum, &VAR_6);
  if (VAR_4 != VAR_0)
   return (VAR_4);


  for (VAR_7 = 0; VAR_7 < VAR_5->ntasks; VAR_7++) {
   VAR_6->tasks[VAR_7] = VAR_5->tasks[VAR_7];
   VAR_5->tasks[VAR_7] = ((void*)0);
  }


  for (VAR_7 = VAR_5->ntasks; VAR_7 < VAR_2; VAR_7++) {
   VAR_4 = FUNC_2(VAR_5->tmgr, VAR_5->quantum,
       &VAR_6->tasks[VAR_7]);
   if (VAR_4 != VAR_0) {
    FUNC_4(&VAR_6);
    return (VAR_4);
   }
   FUNC_3(VAR_6->tasks[VAR_7], "taskpool", ((void*)0));
  }

  FUNC_4(&VAR_5);
  VAR_5 = VAR_6;
 }

 *VAR_1 = ((void*)0);
 *VAR_3 = VAR_5;
 return (VAR_0);
}
