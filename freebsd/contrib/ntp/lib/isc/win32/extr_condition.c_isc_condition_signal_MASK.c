
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_3__ {int * events; } ;
typedef TYPE_1__ isc_condition_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

isc_result_t
FUNC_2(isc_condition_t *VAR_3) {





 FUNC_0(VAR_3 != ((void*)0));

 if (!FUNC_1(VAR_3->events[VAR_2])) {

  return (VAR_1);
 }

 return (VAR_0);
}
