
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int isc_threadfunc_t ;
typedef int isc_threadarg_t ;
typedef int * isc_thread_t ;
typedef int isc_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,int ,int ,int ,int ,unsigned int*) ;

isc_result_t
FUNC_1(isc_threadfunc_t VAR_2, isc_threadarg_t VAR_3,
    isc_thread_t *VAR_4)
{
 isc_thread_t VAR_5;
 unsigned int VAR_6;

 VAR_5 = (isc_thread_t)FUNC_0(((void*)0), 0, VAR_2, VAR_3, 0, &VAR_6);
 if (VAR_5 == ((void*)0)) {

  return (VAR_1);
 }

 *VAR_4 = VAR_5;

 return (VAR_0);
}
