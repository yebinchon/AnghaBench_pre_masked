
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clock_event_device {int features; } ;
typedef int ktime_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct clock_event_device*,int ,int ) ;
 int FUNC_1 (struct clock_event_device*,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 unsigned long FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,unsigned long) ;
 int FUNC_6 () ;
 int FUNC_7 (struct clock_event_device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (struct clock_event_device*,int) ;
 int VAR_5 ;

void FUNC_9(struct clock_event_device *VAR_6, int VAR_7)
{
 FUNC_8(VAR_6, VAR_7);


 if (!FUNC_7(VAR_6))
  return;

 if ((VAR_6->features & VAR_0) &&
     !FUNC_6()) {
  FUNC_1(VAR_6, VAR_2);
 } else {
  unsigned long VAR_8;
  ktime_t VAR_9;

  do {
   VAR_8 = FUNC_4(&VAR_5);
   VAR_9 = VAR_3;
  } while (FUNC_5(&VAR_5, VAR_8));

  FUNC_1(VAR_6, VAR_1);

  for (;;) {
   if (!FUNC_0(VAR_6, VAR_9, FUNC_3()))
    return;
   VAR_9 = FUNC_2(VAR_9, VAR_4);
  }
 }
}
