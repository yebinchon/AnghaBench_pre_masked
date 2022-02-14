
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pthread_attr_t ;
typedef int isc_threadfunc_t ;
typedef int isc_threadarg_t ;
typedef int isc_thread_t ;
typedef int isc_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,size_t*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,size_t) ;
 int FUNC_5 (int *,int *,int ,int ) ;

isc_result_t
FUNC_6(isc_threadfunc_t VAR_4, isc_threadarg_t VAR_5,
    isc_thread_t *VAR_6)
{
 pthread_attr_t VAR_7;
 size_t VAR_8;
 int VAR_9;

 FUNC_2(&VAR_7);
 VAR_9 = FUNC_5(VAR_6, &VAR_7, VAR_4, VAR_5);
 if (VAR_9 != 0)
  return (VAR_1);

 FUNC_0(&VAR_7);

 return (VAR_0);
}
