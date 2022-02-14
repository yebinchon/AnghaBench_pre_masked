
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int event_handler; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct clock_event_device *VAR_2, int VAR_3)
{
 if (!VAR_3)
  VAR_2->event_handler = VAR_0;
 else
  VAR_2->event_handler = VAR_1;
}
