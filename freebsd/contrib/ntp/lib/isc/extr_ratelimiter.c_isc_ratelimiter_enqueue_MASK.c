
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int isc_task_t ;
typedef scalar_t__ isc_result_t ;
struct TYPE_7__ {scalar_t__ state; int lock; int interval; int timer; int pending; } ;
typedef TYPE_1__ isc_ratelimiter_t ;
struct TYPE_8__ {int * ev_sender; } ;
typedef TYPE_2__ isc_event_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_2__*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (int *,TYPE_2__**) ;
 scalar_t__ FUNC_6 (int ,int ,int *,int *,int ) ;
 int VAR_8 ;

isc_result_t
FUNC_7(isc_ratelimiter_t *VAR_9, isc_task_t *VAR_10,
   isc_event_t **VAR_11)
{
 isc_result_t VAR_12 = VAR_2;
 isc_event_t *VAR_13;

 FUNC_3(VAR_11 != ((void*)0) && *VAR_11 != ((void*)0));
 FUNC_3(VAR_10 != ((void*)0));
 VAR_13 = *VAR_11;
 FUNC_3(VAR_13->ev_sender == ((void*)0));

 FUNC_2(&VAR_9->lock);
        if (VAR_9->state == VAR_5 ||
     VAR_9->state == VAR_7) {
  isc_event_t *VAR_14 = *VAR_11;
  VAR_14->ev_sender = VAR_10;
                FUNC_1(VAR_9->pending, VAR_14, VAR_3);
  *VAR_11 = ((void*)0);
        } else if (VAR_9->state == VAR_4) {
  VAR_12 = FUNC_6(VAR_9->timer, VAR_8, ((void*)0),
      &VAR_9->interval, VAR_0);
  if (VAR_12 == VAR_2) {
   VAR_13->ev_sender = VAR_10;
   VAR_9->state = VAR_5;
  }
 } else {
  FUNC_0(VAR_9->state == VAR_6);
  VAR_12 = VAR_1;
 }
 FUNC_4(&VAR_9->lock);
 if (*VAR_11 != ((void*)0) && VAR_12 == VAR_2)
  FUNC_5(VAR_10, VAR_11);
 return (VAR_12);
}
