
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clock_event_device {int dummy; } ;
struct TYPE_2__ {int mode; struct clock_event_device* evtdev; } ;


 int VAR_0 ;


 int FUNC_0 (struct clock_event_device*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (struct clock_event_device*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct clock_event_device*) ;

int FUNC_9(void)
{
 struct clock_event_device *VAR_3;
 unsigned long VAR_4;
 int VAR_5 = 0;

 FUNC_4(&VAR_2, VAR_4);

 VAR_3 = VAR_1.evtdev;

 if (VAR_3) {
  FUNC_0(VAR_3, VAR_0);

  switch (VAR_1.mode) {
  case 128:
   if (!FUNC_1(FUNC_7()))
    FUNC_6(VAR_3);
   VAR_5 = FUNC_2(FUNC_3(),
           FUNC_7());
   break;
  case 129:
   VAR_5 = FUNC_8(VAR_3);
   break;
  }
 }
 FUNC_5(&VAR_2, VAR_4);

 return VAR_5;
}
