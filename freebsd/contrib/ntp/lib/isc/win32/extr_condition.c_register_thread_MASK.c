
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_8__ {unsigned long th; int ** handle; } ;
typedef TYPE_1__ isc_condition_thread_t ;
struct TYPE_9__ {int threadlist; int ** events; } ;
typedef TYPE_2__ isc_condition_t ;
typedef int * HANDLE ;


 int * FUNC_0 (int *,int ,int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_6 ;
 TYPE_1__* FUNC_4 (int) ;

__attribute__((used)) static isc_result_t
FUNC_5(unsigned long VAR_7, isc_condition_t *VAR_8,
  isc_condition_thread_t **VAR_9)
{
 HANDLE VAR_10;
 isc_condition_thread_t *VAR_11;

 FUNC_2(VAR_9 != ((void*)0) && *VAR_9 == ((void*)0));

 VAR_11 = FUNC_4(sizeof(isc_condition_thread_t));
 if (VAR_11 == ((void*)0))
  return (VAR_1);




 VAR_10 = FUNC_0(((void*)0), VAR_0, VAR_0, ((void*)0));
 if (VAR_10 == ((void*)0)) {
  FUNC_3(VAR_11);
  return (VAR_3);
 }




 VAR_11->handle[VAR_5] = VAR_8->events[VAR_5];
 VAR_11->handle[VAR_4] = VAR_10;
 VAR_11->th = VAR_7;




 FUNC_1(VAR_8->threadlist, VAR_11, VAR_6);
 *VAR_9 = VAR_11;
 return (VAR_2);
}
