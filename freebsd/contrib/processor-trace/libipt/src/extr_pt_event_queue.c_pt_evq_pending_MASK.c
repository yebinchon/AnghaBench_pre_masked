
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_event_queue {int dummy; } ;
typedef enum pt_event_binding { ____Placeholder_pt_event_binding } pt_event_binding ;


 int FUNC_0 (struct pt_event_queue const*,int) ;

int FUNC_1(const struct pt_event_queue *VAR_0, enum pt_event_binding VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 < 0)
  return VAR_2;

 return !VAR_2;
}
