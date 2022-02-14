
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int isc_taskaction_t ;
typedef int isc_task_t ;
typedef int isc_result_t ;
typedef int isc_mem_t ;
typedef int isc_event_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;
 int * FUNC_3 (int *,int *,int ,int ,void*,int) ;
 int FUNC_4 (int *,int **) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;

isc_result_t
FUNC_5(isc_mem_t *VAR_8, isc_task_t *VAR_9, isc_taskaction_t VAR_10,
       void *VAR_11) {
 isc_event_t *VAR_12;
 isc_task_t *VAR_13 = ((void*)0);
 isc_result_t VAR_14;


 FUNC_1(&VAR_5);
 if (VAR_7) {
  VAR_14 = VAR_1;
  goto unlock;
 }





 FUNC_4(VAR_9, &VAR_13);
 VAR_12 = FUNC_3(VAR_8, VAR_13, VAR_0,
       VAR_10, VAR_11, sizeof(*VAR_12));
 if (VAR_12 == ((void*)0)) {
  VAR_14 = VAR_2;
  goto unlock;
 }

 FUNC_0(VAR_6, VAR_12, VAR_4);
 VAR_14 = VAR_3;

 unlock:
 FUNC_2(&VAR_5);
 return (VAR_14);
}
