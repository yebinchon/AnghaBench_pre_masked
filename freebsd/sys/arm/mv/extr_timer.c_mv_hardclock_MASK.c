
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int et_arg; int (* et_event_cb ) (TYPE_3__*,int ) ;scalar_t__ et_active; } ;
struct mv_timer_softc {TYPE_3__ et; } ;
struct TYPE_5__ {TYPE_1__* config; } ;
struct TYPE_4__ {int bridge_irq_cause; int irq_timer0_clr; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;
 TYPE_2__* VAR_1 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int
FUNC_3(void *VAR_2)
{
 struct mv_timer_softc *VAR_3;
 uint32_t VAR_4;

 VAR_4 = FUNC_0(VAR_1->config->bridge_irq_cause);
 VAR_4 &= VAR_1->config->irq_timer0_clr;
 FUNC_2(VAR_1->config->bridge_irq_cause, VAR_4);

 VAR_3 = (struct mv_timer_softc *)VAR_2;
 if (VAR_3->et.et_active)
  VAR_3->et.et_event_cb(&VAR_3->et, VAR_3->et.et_arg);

 return (VAR_0);
}
