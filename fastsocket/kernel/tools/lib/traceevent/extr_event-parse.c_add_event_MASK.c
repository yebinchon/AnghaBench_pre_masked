
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pevent {int nr_events; struct event_format** events; } ;
struct event_format {scalar_t__ id; struct pevent* pevent; } ;
typedef int event ;


 int FUNC_0 (struct event_format**,struct event_format**,int) ;
 struct event_format** FUNC_1 (struct event_format**,int) ;

__attribute__((used)) static int FUNC_2(struct pevent *VAR_0, struct event_format *VAR_1)
{
 int VAR_2;
 struct event_format **VAR_3 = FUNC_1(VAR_0->events, sizeof(VAR_1) *
            (VAR_0->nr_events + 1));
 if (!VAR_3)
  return -1;

 VAR_0->events = VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->nr_events; VAR_2++) {
  if (VAR_0->events[VAR_2]->id > VAR_1->id)
   break;
 }
 if (VAR_2 < VAR_0->nr_events)
  FUNC_0(&VAR_0->events[VAR_2 + 1],
   &VAR_0->events[VAR_2],
   sizeof(VAR_1) * (VAR_0->nr_events - VAR_2));

 VAR_0->events[VAR_2] = VAR_1;
 VAR_0->nr_events++;

 VAR_1->pevent = VAR_0;

 return 0;
}
