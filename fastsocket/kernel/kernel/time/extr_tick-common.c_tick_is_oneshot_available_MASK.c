
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clock_event_device {int features; } ;
struct TYPE_2__ {struct clock_event_device* evtdev; } ;


 int VAR_0 ;
 TYPE_1__ FUNC_0 (int ) ;
 int VAR_1 ;

int FUNC_1(void)
{
 struct clock_event_device *VAR_2 = FUNC_0(VAR_1).evtdev;

 return VAR_2 && (VAR_2->features & VAR_0);
}
