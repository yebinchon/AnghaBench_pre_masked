
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int lastTouched; } ;
typedef TYPE_1__ idle_timer ;
struct TYPE_9__ {TYPE_3__* opaque; } ;
typedef TYPE_2__ evTimerID ;
struct TYPE_10__ {TYPE_1__* uap; } ;
typedef TYPE_3__ evTimer ;
struct TYPE_11__ {int lastEventTime; } ;
typedef TYPE_4__ evContext_p ;
struct TYPE_12__ {TYPE_4__* opaque; } ;
typedef TYPE_5__ evContext ;



int
FUNC_0(evContext VAR_0, evTimerID VAR_1) {
 evContext_p *VAR_2 = VAR_0.opaque;
 evTimer *VAR_3 = VAR_1.opaque;
 idle_timer *VAR_4 = VAR_3->uap;

 VAR_4->lastTouched = VAR_2->lastEventTime;

 return (0);
}
