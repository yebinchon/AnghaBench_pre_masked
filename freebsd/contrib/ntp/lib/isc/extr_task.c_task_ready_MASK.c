
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int isc_task_t ;
typedef scalar_t__ isc_boolean_t ;
struct TYPE_7__ {scalar_t__ mode; int lock; int work_available; } ;
typedef TYPE_1__ isc__taskmgr_t ;
struct TYPE_8__ {scalar_t__ state; TYPE_1__* manager; } ;
typedef TYPE_2__ isc__task_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_7 (TYPE_1__*,TYPE_2__*) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline void
FUNC_8(isc__task_t *VAR_2) {
 isc__taskmgr_t *VAR_3 = VAR_2->manager;




 FUNC_1(FUNC_4(VAR_3));
 FUNC_1(VAR_2->state == VAR_1);

 FUNC_5("task_ready");

 FUNC_0(&VAR_3->lock);
 FUNC_7(VAR_3, VAR_2);




 FUNC_3(&VAR_3->lock);
}
