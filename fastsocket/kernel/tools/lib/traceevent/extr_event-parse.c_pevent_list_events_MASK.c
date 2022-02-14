
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pevent {int last_type; int nr_events; struct event_format** sort_events; int events; } ;
struct event_format {int dummy; } ;
typedef enum event_sort_type { ____Placeholder_event_sort_type } event_sort_type ;





 int FUNC_0 (void const*,void const*) ;
 int FUNC_1 (void const*,void const*) ;
 int FUNC_2 (void const*,void const*) ;
 struct event_format** FUNC_3 (int) ;
 int FUNC_4 (struct event_format**,int ,int) ;
 int FUNC_5 (struct event_format**,size_t,int,int (*) (void const*,void const*)) ;

struct event_format **FUNC_6(struct pevent *VAR_0, enum event_sort_type VAR_1)
{
 struct event_format **VAR_2;
 int (*VAR_3)(const void *VAR_4, const void *VAR_5);

 VAR_2 = VAR_0->sort_events;

 if (VAR_2 && VAR_0->last_type == VAR_1)
  return VAR_2;

 if (!VAR_2) {
  VAR_2 = FUNC_3(sizeof(*VAR_2) * (VAR_0->nr_events + 1));
  if (!VAR_2)
   return ((void*)0);

  FUNC_4(VAR_2, VAR_0->events, sizeof(*VAR_2) * VAR_0->nr_events);
  VAR_2[VAR_0->nr_events] = ((void*)0);

  VAR_0->sort_events = VAR_2;


  if (VAR_1 == 130) {
   VAR_0->last_type = VAR_1;
   return VAR_2;
  }
 }

 switch (VAR_1) {
 case 130:
  VAR_3 = FUNC_0;
  break;
 case 129:
  VAR_3 = FUNC_1;
  break;
 case 128:
  VAR_3 = FUNC_2;
  break;
 default:
  return VAR_2;
 }

 FUNC_5(VAR_2, VAR_0->nr_events, sizeof(*VAR_2), VAR_3);
 VAR_0->last_type = VAR_1;

 return VAR_2;
}
