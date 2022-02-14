
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int isc_task_t ;
typedef int isc_ratelimiter_t ;
struct TYPE_3__ {scalar_t__ ev_arg; } ;
typedef TYPE_1__ isc_event_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int **) ;

__attribute__((used)) static void
FUNC_2(isc_task_t *VAR_0, isc_event_t *VAR_1) {
 isc_ratelimiter_t *VAR_2 = (isc_ratelimiter_t *)VAR_1->ev_arg;

 FUNC_0(VAR_0);

 FUNC_1(&VAR_2);
}
