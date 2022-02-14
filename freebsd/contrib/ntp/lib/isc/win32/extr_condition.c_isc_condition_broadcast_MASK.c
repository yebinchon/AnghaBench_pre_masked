
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_7__ {int * handle; } ;
typedef TYPE_1__ isc_condition_thread_t ;
struct TYPE_8__ {int threadlist; } ;
typedef TYPE_2__ isc_condition_t ;
typedef scalar_t__ isc_boolean_t ;


 scalar_t__ VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;

isc_result_t
FUNC_4(isc_condition_t *VAR_6) {

 isc_condition_thread_t *VAR_7;
 isc_boolean_t VAR_8 = VAR_0;





 FUNC_2(VAR_6 != ((void*)0));




 for (VAR_7 = FUNC_0(VAR_6->threadlist);
      VAR_7 != ((void*)0);
      VAR_7 = FUNC_1(VAR_7, VAR_5)) {

  if (!FUNC_3(VAR_7->handle[VAR_4]))
   VAR_8 = VAR_3;
 }

 if (VAR_8)
  return (VAR_2);

 return (VAR_1);
}
