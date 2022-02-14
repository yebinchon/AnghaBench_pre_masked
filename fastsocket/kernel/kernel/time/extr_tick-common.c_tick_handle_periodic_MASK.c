
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {scalar_t__ mode; int next_event; } ;
typedef int ktime_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct clock_event_device*,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 () ;

void FUNC_6(struct clock_event_device *VAR_2)
{
 int VAR_3 = FUNC_3();
 ktime_t VAR_4;

 FUNC_4(VAR_3);

 if (VAR_2->mode != VAR_0)
  return;




 VAR_4 = FUNC_1(VAR_2->next_event, VAR_1);
 for (;;) {
  if (!FUNC_0(VAR_2, VAR_4, FUNC_2()))
   return;
  if (FUNC_5())
   FUNC_4(VAR_3);
  VAR_4 = FUNC_1(VAR_4, VAR_1);
 }
}
