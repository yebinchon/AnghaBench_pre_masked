
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; int active; } ;
typedef TYPE_1__ isc_rwlock_t ;
typedef int isc_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

isc_result_t
FUNC_2(isc_rwlock_t *VAR_4) {
 isc_result_t VAR_5 = VAR_1;

 FUNC_0(FUNC_1(VAR_4));
 FUNC_0(VAR_4->type == VAR_2);
 FUNC_0(VAR_4->active != 0);


 if (VAR_4->active == 1)
  VAR_4->type = VAR_3;
 else
  VAR_5 = VAR_0;
 return (VAR_5);
}
