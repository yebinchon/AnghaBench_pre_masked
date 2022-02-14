
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int et_arg; int (* et_event_cb ) (TYPE_1__*,int ) ;scalar_t__ et_active; } ;
struct jz4780_timer_softc {TYPE_1__ et; } ;


 int FUNC_0 (struct jz4780_timer_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_2(void *VAR_5)
{
 struct jz4780_timer_softc *VAR_6 = (struct jz4780_timer_softc *)VAR_5;

 FUNC_0(VAR_6, VAR_2, VAR_4);
 FUNC_0(VAR_6, VAR_1, VAR_3);

 if (VAR_6->et.et_active)
  VAR_6->et.et_event_cb(&VAR_6->et, VAR_6->et.et_arg);

 return (VAR_0);
}
