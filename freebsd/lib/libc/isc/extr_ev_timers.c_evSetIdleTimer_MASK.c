
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct TYPE_12__ {int timer; struct timespec max_idle; int lastTouched; void* uap; int func; } ;
typedef TYPE_1__ idle_timer ;
struct TYPE_13__ {int opaque; } ;
typedef TYPE_2__ evTimerID ;
typedef int evTimerFunc ;
struct TYPE_14__ {int lastEventTime; } ;
typedef TYPE_3__ evContext_p ;
struct TYPE_15__ {TYPE_3__* opaque; } ;
typedef TYPE_4__ evContext ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,struct timespec) ;
 scalar_t__ FUNC_3 (TYPE_4__,int ,TYPE_1__*,int ,struct timespec,TYPE_2__*) ;
 int VAR_0 ;

int
FUNC_4(evContext VAR_1,
  evTimerFunc VAR_2,
  void *VAR_3,
  struct timespec VAR_4,
  evTimerID *VAR_5
) {
 evContext_p *VAR_6 = VAR_1.opaque;
 idle_timer *VAR_7;


 FUNC_1(VAR_7);
 VAR_7->func = VAR_2;
 VAR_7->uap = VAR_3;
 VAR_7->lastTouched = VAR_6->lastEventTime;
 VAR_7->max_idle = VAR_4;

 if (FUNC_3(VAR_1, VAR_0, VAR_7,
         FUNC_2(VAR_6->lastEventTime, VAR_4),
         VAR_4, VAR_5) < 0) {
  FUNC_0(VAR_7);
  return (-1);
 }

 VAR_7->timer = VAR_5->opaque;

 return (0);
}
