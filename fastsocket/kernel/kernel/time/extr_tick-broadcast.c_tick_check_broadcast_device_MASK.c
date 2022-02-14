
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clock_event_device {scalar_t__ rating; int features; } ;
struct TYPE_2__ {struct clock_event_device* evtdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct clock_event_device*) ;
 int FUNC_1 (int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (struct clock_event_device*) ;
 int FUNC_3 () ;

int FUNC_4(struct clock_event_device *VAR_2)
{
 if ((VAR_1.evtdev &&
      VAR_1.evtdev->rating >= VAR_2->rating) ||
      (VAR_2->features & VAR_0))
  return 0;

 FUNC_0(((void*)0), VAR_2);
 VAR_1.evtdev = VAR_2;
 if (!FUNC_1(FUNC_3()))
  FUNC_2(VAR_2);
 return 1;
}
