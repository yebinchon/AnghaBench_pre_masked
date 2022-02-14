
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int isc_taskmgr_t ;
typedef int isc_boolean_t ;
struct TYPE_4__ {int lock; } ;
typedef TYPE_1__ isc__taskmgr_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* VAR_1 ;

isc_boolean_t
FUNC_3(isc_taskmgr_t *VAR_2) {
 isc__taskmgr_t *VAR_3 = (void*)VAR_2;
 isc_boolean_t VAR_4;





 if (VAR_3 == ((void*)0))
  return (VAR_0);

 FUNC_0(&VAR_3->lock);
 VAR_4 = !FUNC_2(VAR_3);
 FUNC_1(&VAR_3->lock);

 return (VAR_4);
}
