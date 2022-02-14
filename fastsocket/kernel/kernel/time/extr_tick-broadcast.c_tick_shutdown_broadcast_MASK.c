
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct clock_event_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ mode; struct clock_event_device* evtdev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct clock_event_device*) ;
 int FUNC_1 (unsigned int,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_5 () ;

void FUNC_6(unsigned int *VAR_3)
{
 struct clock_event_device *VAR_4;
 unsigned long VAR_5;
 unsigned int VAR_6 = *VAR_3;

 FUNC_3(&VAR_2, VAR_5);

 VAR_4 = VAR_1.evtdev;
 FUNC_1(VAR_6, FUNC_5());

 if (VAR_1.mode == VAR_0) {
  if (VAR_4 && FUNC_2(FUNC_5()))
   FUNC_0(VAR_4);
 }

 FUNC_4(&VAR_2, VAR_5);
}
