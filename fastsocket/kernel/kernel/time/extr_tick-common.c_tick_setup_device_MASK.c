
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tick_device {scalar_t__ mode; struct clock_event_device* evtdev; } ;
struct cpumask {int dummy; } ;
struct clock_event_device {void (* event_handler ) (struct clock_event_device*) ;int irq; int cpumask; int next_event; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 void FUNC_0 (struct clock_event_device*) ;
 int FUNC_1 (int ,struct cpumask const*) ;
 int FUNC_2 (int ,struct cpumask const*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (struct clock_event_device*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct clock_event_device*,void (*) (struct clock_event_device*),int ) ;
 int FUNC_7 (struct clock_event_device*,int ) ;

__attribute__((used)) static void FUNC_8(struct tick_device *VAR_7,
         struct clock_event_device *VAR_8, int VAR_9,
         const struct cpumask *VAR_10)
{
 ktime_t VAR_11;
 void (*VAR_12)(struct clock_event_device *) = ((void*)0);




 if (!VAR_7->evtdev) {




  if (VAR_4 == VAR_3) {
   VAR_4 = VAR_9;
   VAR_5 = FUNC_3();
   VAR_6 = FUNC_4(0, VAR_1 / VAR_0);
  }




  VAR_7->mode = VAR_2;
 } else {
  VAR_12 = VAR_7->evtdev->event_handler;
  VAR_11 = VAR_7->evtdev->next_event;
  VAR_7->evtdev->event_handler = FUNC_0;
 }

 VAR_7->evtdev = VAR_8;





 if (!FUNC_1(VAR_8->cpumask, VAR_10))
  FUNC_2(VAR_8->irq, VAR_10);







 if (FUNC_5(VAR_8, VAR_9))
  return;

 if (VAR_7->mode == VAR_2)
  FUNC_7(VAR_8, 0);
 else
  FUNC_6(VAR_8, VAR_12, VAR_11);
}
