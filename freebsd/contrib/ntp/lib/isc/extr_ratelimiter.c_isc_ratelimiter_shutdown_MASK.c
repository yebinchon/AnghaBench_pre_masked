
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int isc_task_t ;
struct TYPE_8__ {int * ev_sender; int ev_attributes; } ;
struct TYPE_7__ {int lock; int * task; TYPE_2__ shutdownevent; int timer; int pending; int state; } ;
typedef TYPE_1__ isc_ratelimiter_t ;
typedef TYPE_2__ isc_event_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_2__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *,TYPE_2__**) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int *,int *,int ) ;
 int VAR_4 ;

void
FUNC_7(isc_ratelimiter_t *VAR_5) {
 isc_event_t *VAR_6;
 isc_task_t *VAR_7;
 FUNC_2(&VAR_5->lock);
 VAR_5->state = VAR_3;
 (void)FUNC_6(VAR_5->timer, VAR_4,
         ((void*)0), ((void*)0), VAR_1);
 while ((VAR_6 = FUNC_0(VAR_5->pending)) != ((void*)0)) {
  FUNC_1(VAR_5->pending, VAR_6, VAR_2);
  VAR_6->ev_attributes |= VAR_0;
  VAR_7 = VAR_6->ev_sender;
  FUNC_4(VAR_7, &VAR_6);
 }
 FUNC_5(&VAR_5->timer);




 VAR_6 = &VAR_5->shutdownevent;
 FUNC_4(VAR_5->task, &VAR_6);

 FUNC_3(&VAR_5->lock);
}
