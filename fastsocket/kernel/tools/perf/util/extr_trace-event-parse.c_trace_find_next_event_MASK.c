
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pevent {int nr_events; struct event_format** events; } ;
struct event_format {int dummy; } ;



struct event_format *FUNC_0(struct pevent *VAR_0,
        struct event_format *VAR_1)
{
 static int VAR_2;

 if (!VAR_0 || !VAR_0->events)
  return ((void*)0);

 if (!VAR_1) {
  VAR_2 = 0;
  return VAR_0->events[0];
 }

 if (VAR_2 < VAR_0->nr_events && VAR_1 == VAR_0->events[VAR_2]) {
  VAR_2++;
  if (VAR_2 == VAR_0->nr_events)
   return ((void*)0);
  return VAR_0->events[VAR_2];
 }

 for (VAR_2 = 1; VAR_2 < VAR_0->nr_events; VAR_2++) {
  if (VAR_1 == VAR_0->events[VAR_2 - 1])
   return VAR_0->events[VAR_2];
 }
 return ((void*)0);
}
