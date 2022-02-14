
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ready_priority_tasks; int ready_tasks; } ;
typedef TYPE_1__ isc__taskmgr_t ;
struct TYPE_7__ {int flags; } ;
typedef TYPE_2__ isc__task_t ;


 int FUNC_0 (int ,TYPE_2__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline void
FUNC_1(isc__taskmgr_t *VAR_3, isc__task_t *VAR_4) {
 FUNC_0(VAR_3->ready_tasks, VAR_4, VAR_1);
 if ((VAR_4->flags & VAR_0) != 0)
  FUNC_0(VAR_3->ready_priority_tasks, VAR_4,
   VAR_2);
}
