
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_9__ {int * handle; } ;
typedef TYPE_1__ isc_condition_thread_t ;
struct TYPE_10__ {scalar_t__ waiters; int threadlist; int * events; } ;
typedef TYPE_2__ isc_condition_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_3 ;

isc_result_t
FUNC_6(isc_condition_t *VAR_4) {

 isc_condition_thread_t *VAR_5, *VAR_6;

 FUNC_4(VAR_4 != ((void*)0));
 FUNC_4(VAR_4->waiters == 0);

 (void)FUNC_0(VAR_4->events[VAR_2]);




 VAR_6 = FUNC_2(VAR_4->threadlist);

 while (VAR_6 != ((void*)0)) {
  VAR_5 = FUNC_3(VAR_6, VAR_3);
  FUNC_1(VAR_4->threadlist, VAR_6, VAR_3);
  (void) FUNC_0(VAR_6->handle[VAR_1]);
  FUNC_5(VAR_6);
  VAR_6 = VAR_5;
 }

 return (VAR_0);
}
