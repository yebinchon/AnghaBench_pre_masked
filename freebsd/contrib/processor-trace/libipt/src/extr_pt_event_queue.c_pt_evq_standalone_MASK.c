
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_event_queue {int standalone; } ;
struct pt_event {int dummy; } ;


 struct pt_event* FUNC_0 (int *) ;

struct pt_event *FUNC_1(struct pt_event_queue *VAR_0)
{
 if (!VAR_0)
  return ((void*)0);

 return FUNC_0(&VAR_0->standalone);
}
