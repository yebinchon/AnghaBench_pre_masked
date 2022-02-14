
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct pt_event_queue {scalar_t__* begin; scalar_t__* end; struct pt_event** queue; } ;
struct pt_event {int type; } ;
typedef enum pt_event_type { ____Placeholder_pt_event_type } pt_event_type ;
typedef enum pt_event_binding { ____Placeholder_pt_event_binding } pt_event_binding ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;

struct pt_event *FUNC_1(struct pt_event_queue *VAR_2,
        enum pt_event_binding VAR_3,
        enum pt_event_type VAR_4)
{
 uint8_t VAR_5, VAR_6;

 if (!VAR_2)
  return ((void*)0);

 if (VAR_0 <= VAR_3)
  return ((void*)0);

 VAR_5 = VAR_2->begin[VAR_3];
 VAR_6 = VAR_2->end[VAR_3];

 if (VAR_1 <= VAR_5)
  return ((void*)0);

 if (VAR_1 <= VAR_6)
  return ((void*)0);

 for (; VAR_5 != VAR_6; VAR_5 = FUNC_0(VAR_5)) {
  struct pt_event *VAR_7;

  VAR_7 = &VAR_2->queue[VAR_3][VAR_5];
  if (VAR_7->type == VAR_4)
   return VAR_7;
 }

 return ((void*)0);
}
