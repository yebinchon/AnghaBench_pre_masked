
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tv64; } ;
struct clock_event_device {TYPE_1__ next_event; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct clock_event_device*,int ) ;

void FUNC_1(struct clock_event_device *VAR_2)
{
 FUNC_0(VAR_2, VAR_0);
 VAR_2->next_event.tv64 = VAR_1;
}
