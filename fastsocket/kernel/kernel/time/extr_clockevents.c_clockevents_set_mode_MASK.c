
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int mode; int mult; int (* set_mode ) (int,struct clock_event_device*) ;} ;
typedef enum clock_event_mode { ____Placeholder_clock_event_mode } clock_event_mode ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct clock_event_device*) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(struct clock_event_device *VAR_1,
     enum clock_event_mode VAR_2)
{
 if (VAR_1->mode != VAR_2) {
  VAR_1->set_mode(VAR_2, VAR_1);
  VAR_1->mode = VAR_2;





  if (VAR_2 == VAR_0) {
   if (FUNC_2(!VAR_1->mult)) {
    VAR_1->mult = 1;
    FUNC_0(1);
   }
  }
 }
}
