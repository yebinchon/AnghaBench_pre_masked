
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clock_event_device {int features; int event_handler; } ;
struct TYPE_2__ {int evtdev; } ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct clock_event_device*) ;
 int FUNC_8 () ;
 int VAR_3 ;

int FUNC_9(struct clock_event_device *VAR_4, int VAR_5)
{
 unsigned long VAR_6;
 int VAR_7 = 0;

 FUNC_3(&VAR_2, VAR_6);







 if (!FUNC_7(VAR_4)) {
  VAR_4->event_handler = VAR_3;
  FUNC_1(VAR_5, FUNC_8());
  FUNC_6(VAR_1.evtdev);
  VAR_7 = 1;
 } else {





  if (!(VAR_4->features & VAR_0)) {
   int VAR_8 = FUNC_2();

   FUNC_0(VAR_8, FUNC_8());
   FUNC_5(VAR_8);
  }
 }
 FUNC_4(&VAR_2, VAR_6);
 return VAR_7;
}
