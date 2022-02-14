
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int isc_task_t ;
struct TYPE_4__ {scalar_t__ ev_arg; } ;
typedef TYPE_1__ isc_event_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__**) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(isc_task_t *VAR_2, isc_event_t *VAR_3) {
 int *VAR_4 = (int *) VAR_3->ev_arg;

 FUNC_2(VAR_2);

 FUNC_3(&VAR_3);
 FUNC_0(&VAR_1);
 *VAR_4 = VAR_0++;
 FUNC_1(&VAR_1);
}
