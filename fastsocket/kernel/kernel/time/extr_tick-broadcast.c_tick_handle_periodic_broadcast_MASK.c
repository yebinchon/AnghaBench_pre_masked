
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

__attribute__((used)) static void FUNC_4(struct clock_event_device *VAR_2)
{
 ktime_t VAR_3;

 FUNC_3();




 if (VAR_2->mode == VAR_0)
  return;
 for (VAR_3 = VAR_2->next_event; ;) {
  VAR_3 = FUNC_1(VAR_3, VAR_1);

  if (!FUNC_0(VAR_2, VAR_3, FUNC_2()))
   return;
  FUNC_3();
 }
}
