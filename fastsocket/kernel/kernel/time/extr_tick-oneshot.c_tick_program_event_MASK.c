
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clock_event_device {int dummy; } ;
typedef int ktime_t ;
struct TYPE_2__ {struct clock_event_device* evtdev; } ;


 TYPE_1__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct clock_event_device*,int ,int) ;

int FUNC_2(ktime_t VAR_1, int VAR_2)
{
 struct clock_event_device *VAR_3 = FUNC_0(VAR_0).evtdev;

 return FUNC_1(VAR_3, VAR_1, VAR_2);
}
