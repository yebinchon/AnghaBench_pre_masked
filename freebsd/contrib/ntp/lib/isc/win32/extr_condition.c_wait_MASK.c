
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ isc_result_t ;
typedef int isc_mutex_t ;
struct TYPE_6__ {int handle; } ;
typedef TYPE_1__ isc_condition_thread_t ;
struct TYPE_7__ {int waiters; } ;
typedef TYPE_2__ isc_condition_t ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_2 (int,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,TYPE_2__*,TYPE_1__**) ;
 int FUNC_4 () ;

__attribute__((used)) static isc_result_t
FUNC_5(isc_condition_t *VAR_6, isc_mutex_t *VAR_7, DWORD VAR_8) {
 DWORD VAR_9;
 isc_result_t VAR_10;
 isc_condition_thread_t *VAR_11 = ((void*)0);




 VAR_10 = FUNC_3(FUNC_4(), VAR_6, &VAR_11);
 if (VAR_10 != VAR_1)
  return (VAR_10);

 VAR_6->waiters++;
 FUNC_1(VAR_7);
 VAR_9 = FUNC_2(2, VAR_11->handle, VAR_0,
     VAR_8);
 FUNC_0(VAR_7);
 VAR_6->waiters--;
 if (VAR_9 == VAR_4) {

  return (VAR_3);
 }
 if (VAR_9 == VAR_5)
  return (VAR_2);

 return (VAR_1);
}
