
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_event_queue {scalar_t__* end; scalar_t__* begin; } ;
typedef enum pt_event_binding { ____Placeholder_pt_event_binding } pt_event_binding ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct pt_event_queue *VAR_2, enum pt_event_binding VAR_3)
{
 if (!VAR_2)
  return -VAR_1;

 if (VAR_0 <= VAR_3)
  return -VAR_1;

 VAR_2->begin[VAR_3] = 0;
 VAR_2->end[VAR_3] = 0;

 return 0;
}
