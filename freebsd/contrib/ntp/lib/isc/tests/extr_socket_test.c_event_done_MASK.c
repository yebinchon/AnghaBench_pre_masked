
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int isc_task_t ;
struct TYPE_6__ {int result; } ;
typedef TYPE_1__ isc_socketevent_t ;
struct TYPE_7__ {TYPE_3__* ev_arg; } ;
typedef TYPE_2__ isc_event_t ;
struct TYPE_8__ {int done; int result; } ;
typedef TYPE_3__ completion_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__**) ;

__attribute__((used)) static void
FUNC_2(isc_task_t *VAR_1, isc_event_t *VAR_2) {
 isc_socketevent_t *VAR_3;
 completion_t *VAR_4 = VAR_2->ev_arg;

 FUNC_0(VAR_1);

 VAR_3 = (isc_socketevent_t *) VAR_2;
 VAR_4->result = VAR_3->result;
 VAR_4->done = VAR_0;
 FUNC_1(&VAR_2);
}
