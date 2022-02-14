
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ isc_result_t ;
typedef int isc_mutex_t ;
typedef int isc_condition_t ;
struct TYPE_3__ {void* want_shutdown; void* want_reload; } ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 void* VAR_4 ;
 TYPE_1__ VAR_5 ;
 void* VAR_6 ;

isc_result_t
FUNC_3(isc_condition_t *VAR_7, isc_mutex_t *VAR_8) {
 isc_result_t VAR_9;

 FUNC_1(VAR_7);
 FUNC_1(VAR_8);

 FUNC_0(!VAR_4);
 VAR_4 = VAR_3;

 FUNC_0(*VAR_8 == 1);
 --*VAR_8;

 VAR_9 = FUNC_2(&VAR_5);
 if (VAR_9 == VAR_1)
  VAR_5.want_reload = VAR_3;
 if (VAR_6) {
  VAR_5.want_shutdown = VAR_0;
  VAR_6 = VAR_0;
 }

 ++*VAR_8;
 VAR_4 = VAR_0;
 return (VAR_2);
}
