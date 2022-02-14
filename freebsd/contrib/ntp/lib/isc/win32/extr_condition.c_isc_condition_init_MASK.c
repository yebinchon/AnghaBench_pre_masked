
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_3__ {int threadlist; int ** events; scalar_t__ waiters; } ;
typedef TYPE_1__ isc_condition_t ;
typedef int * HANDLE ;


 int * FUNC_0 (int *,int ,int ,int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (int ) ;

isc_result_t
FUNC_3(isc_condition_t *VAR_4) {
 HANDLE VAR_5;

 FUNC_2(VAR_4 != ((void*)0));

 VAR_4->waiters = 0;



 VAR_5 = FUNC_0(((void*)0), VAR_0, VAR_0, ((void*)0));
 if (VAR_5 == ((void*)0)) {

  return (VAR_2);
 }
 VAR_4->events[VAR_3] = VAR_5;





 FUNC_1(VAR_4->threadlist);

 return (VAR_1);
}
