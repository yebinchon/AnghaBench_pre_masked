
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ isc_uint32_t ;
typedef int isc_task_t ;
typedef scalar_t__ isc_result_t ;
struct TYPE_8__ {scalar_t__ pertic; int lock; int state; int timer; int pending; } ;
typedef TYPE_1__ isc_ratelimiter_t ;
struct TYPE_9__ {int * ev_sender; scalar_t__ ev_arg; } ;
typedef TYPE_2__ isc_event_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_2__*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_2 ;
 int FUNC_7 (TYPE_2__**) ;
 int VAR_3 ;
 int FUNC_8 (int *,TYPE_2__**) ;
 scalar_t__ FUNC_9 (int ,int ,int *,int *,int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_10(isc_task_t *VAR_5, isc_event_t *VAR_6) {
 isc_result_t VAR_7 = VAR_1;
 isc_ratelimiter_t *VAR_8 = (isc_ratelimiter_t *)VAR_6->ev_arg;
 isc_event_t *VAR_9;
 isc_uint32_t VAR_10;

 FUNC_6(VAR_5);

 FUNC_7(&VAR_6);

 VAR_10 = VAR_8->pertic;
        while (VAR_10 != 0) {
  VAR_10--;
  FUNC_3(&VAR_8->lock);
  VAR_9 = FUNC_1(VAR_8->pending);
  if (VAR_9 != ((void*)0)) {



   FUNC_2(VAR_8->pending, VAR_9, VAR_2);
  } else {




   VAR_7 = FUNC_9(VAR_8->timer,
       VAR_4,
       ((void*)0), ((void*)0), VAR_0);
   FUNC_4(VAR_7 == VAR_1);
   VAR_8->state = VAR_3;
   VAR_10 = 0;
  }
  FUNC_5(&VAR_8->lock);
  if (VAR_9 != ((void*)0)) {
   isc_task_t *VAR_11 = VAR_9->ev_sender;
   FUNC_8(VAR_11, &VAR_9);
  }
  FUNC_0(VAR_9 == ((void*)0));
 }
}
