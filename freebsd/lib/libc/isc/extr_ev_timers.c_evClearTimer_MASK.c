
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_16__ {TYPE_5__* opaque; } ;
typedef TYPE_4__ evTimerID ;
struct TYPE_17__ {int index; int inter; } ;
typedef TYPE_5__ evTimer ;
struct TYPE_18__ {int debug; int timers; TYPE_3__* cur; } ;
typedef TYPE_6__ evContext_p ;
struct TYPE_19__ {TYPE_6__* opaque; } ;
typedef TYPE_7__ evContext ;
struct TYPE_13__ {TYPE_5__* this; } ;
struct TYPE_14__ {TYPE_1__ timer; } ;
struct TYPE_15__ {scalar_t__ type; TYPE_2__ u; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_6__*,int,char*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 TYPE_5__* FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,void*) ;
 int VAR_2 ;

int
FUNC_7(evContext VAR_3, evTimerID VAR_4) {
 evContext_p *VAR_5 = VAR_3.opaque;
 evTimer *VAR_6 = VAR_4.opaque;

 if (VAR_5->cur != ((void*)0) &&
     VAR_5->cur->type == VAR_1 &&
     VAR_5->cur->u.timer.this == VAR_6) {
  FUNC_3(VAR_5, 8, "deferring delete of timer (executing)\n");




  VAR_6->inter = FUNC_2(0, 0);
  return (0);
 }

 if (FUNC_5(VAR_5->timers, VAR_6->index) != VAR_6)
  FUNC_0(VAR_0);

 if (FUNC_4(VAR_5->timers, VAR_6->index) < 0)
  return (-1);
 FUNC_1(VAR_6);

 if (VAR_5->debug > 7) {
  FUNC_3(VAR_5, 7, "timers after evClearTimer:\n");
  (void) FUNC_6(VAR_5->timers, VAR_2, (void *)VAR_5);
 }

 return (0);
}
