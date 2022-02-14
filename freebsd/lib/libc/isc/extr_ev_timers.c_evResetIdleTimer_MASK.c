
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct timespec {int dummy; } ;
struct TYPE_11__ {struct timespec max_idle; int lastTouched; void* uap; int func; } ;
typedef TYPE_1__ idle_timer ;
struct TYPE_12__ {TYPE_3__* opaque; } ;
typedef TYPE_2__ evTimerID ;
typedef int evTimerFunc ;
struct TYPE_13__ {TYPE_1__* uap; } ;
typedef TYPE_3__ evTimer ;
struct TYPE_14__ {int lastEventTime; } ;
typedef TYPE_4__ evContext_p ;
struct TYPE_15__ {TYPE_4__* opaque; } ;
typedef TYPE_5__ evContext ;


 int FUNC_0 (int ,struct timespec) ;
 int FUNC_1 (TYPE_5__,TYPE_2__,int ,TYPE_1__*,int ,struct timespec) ;
 int VAR_0 ;

int
FUNC_2(evContext VAR_1,
   evTimerID VAR_2,
   evTimerFunc VAR_3,
   void *VAR_4,
   struct timespec VAR_5
) {
 evContext_p *VAR_6 = VAR_1.opaque;
 evTimer *VAR_7 = VAR_2.opaque;
 idle_timer *VAR_8 = VAR_7->uap;

 VAR_8->func = VAR_3;
 VAR_8->uap = VAR_4;
 VAR_8->lastTouched = VAR_6->lastEventTime;
 VAR_8->max_idle = VAR_5;

 return (FUNC_1(VAR_1, VAR_2, VAR_0, VAR_8,
        FUNC_0(VAR_6->lastEventTime, VAR_5),
        VAR_5));
}
