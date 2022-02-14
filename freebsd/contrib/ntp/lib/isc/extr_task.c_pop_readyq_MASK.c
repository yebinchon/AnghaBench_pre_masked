
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ mode; int ready_priority_tasks; int ready_tasks; } ;
typedef TYPE_1__ isc__taskmgr_t ;
typedef int isc__task_t ;


 int FUNC_0 (int ,int *,int ) ;
 int * FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline isc__task_t *
FUNC_3(isc__taskmgr_t *VAR_3) {
 isc__task_t *VAR_4;

 if (VAR_3->mode == VAR_0)
  VAR_4 = FUNC_1(VAR_3->ready_tasks);
 else
  VAR_4 = FUNC_1(VAR_3->ready_priority_tasks);

 if (VAR_4 != ((void*)0)) {
  FUNC_0(VAR_3->ready_tasks, VAR_4, VAR_1);
  if (FUNC_2(VAR_4, VAR_2))
   FUNC_0(VAR_3->ready_priority_tasks, VAR_4,
    VAR_2);
 }

 return (VAR_4);
}
