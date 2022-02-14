
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct TYPE_2__ {scalar_t__ tv_sec; } ;
struct event_base {int max_dispatch_callbacks; int limit_callbacks_after_prio; int nactivequeues; int event_running_priority; struct evcallback_list* activequeues; TYPE_1__ max_dispatch_time; } ;
struct evcallback_list {int dummy; } ;


 int const VAR_0 ;
 int * FUNC_0 (struct evcallback_list*) ;
 int FUNC_1 (struct event_base*,struct evcallback_list*,int const,struct timeval const*) ;
 int FUNC_2 (TYPE_1__*,struct timeval*,struct timeval*) ;
 int FUNC_3 (struct event_base*,struct timeval*) ;
 int FUNC_4 (struct event_base*) ;

__attribute__((used)) static int
FUNC_5(struct event_base *VAR_1)
{

 struct evcallback_list *VAR_2 = ((void*)0);
 int VAR_3, VAR_4 = 0;
 const struct timeval *VAR_5;
 struct timeval VAR_6;
 const int VAR_7 = VAR_1->max_dispatch_callbacks;
 const int VAR_8 = VAR_1->limit_callbacks_after_prio;
 if (VAR_1->max_dispatch_time.tv_sec >= 0) {
  FUNC_4(VAR_1);
  FUNC_3(VAR_1, &VAR_6);
  FUNC_2(&VAR_1->max_dispatch_time, &VAR_6, &VAR_6);
  VAR_5 = &VAR_6;
 } else {
  VAR_5 = ((void*)0);
 }

 for (VAR_3 = 0; VAR_3 < VAR_1->nactivequeues; ++VAR_3) {
  if (FUNC_0(&VAR_1->activequeues[VAR_3]) != ((void*)0)) {
   VAR_1->event_running_priority = VAR_3;
   VAR_2 = &VAR_1->activequeues[VAR_3];
   if (VAR_3 < VAR_8)
    VAR_4 = FUNC_1(VAR_1, VAR_2,
        VAR_0, ((void*)0));
   else
    VAR_4 = FUNC_1(VAR_1, VAR_2,
        VAR_7, VAR_5);
   if (VAR_4 < 0) {
    goto done;
   } else if (VAR_4 > 0)
    break;



  }
 }

done:
 VAR_1->event_running_priority = -1;

 return VAR_4;
}
