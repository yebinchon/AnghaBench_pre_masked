
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ isc_rwlocktype_t ;
struct TYPE_4__ {scalar_t__ type; scalar_t__ active; } ;
typedef TYPE_1__ isc_rwlock_t ;
typedef int isc_result_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;

isc_result_t
FUNC_4(isc_rwlock_t *VAR_1, isc_rwlocktype_t VAR_2) {
 FUNC_1(FUNC_3(VAR_1));
 FUNC_1(VAR_1->type == VAR_2);

 FUNC_2(VAR_2);

 FUNC_0(VAR_1->active > 0);
 VAR_1->active--;

 return (VAR_0);
}
