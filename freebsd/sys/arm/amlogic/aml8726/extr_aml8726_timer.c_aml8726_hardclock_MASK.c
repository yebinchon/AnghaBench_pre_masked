
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int et_arg; int (* et_event_cb ) (TYPE_1__*,int ) ;scalar_t__ et_active; } ;
struct aml8726_timer_softc {scalar_t__ first_ticks; scalar_t__ period_ticks; TYPE_1__ et; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct aml8726_timer_softc*) ;
 int VAR_3 ;
 int FUNC_1 (struct aml8726_timer_softc*) ;
 int FUNC_2 (struct aml8726_timer_softc*,int ) ;
 int FUNC_3 (struct aml8726_timer_softc*,int ,int) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_5(void *VAR_5)
{
 struct aml8726_timer_softc *VAR_6 = (struct aml8726_timer_softc *)VAR_5;

 FUNC_0(VAR_6);

 if (VAR_6->first_ticks != 0 && VAR_6->period_ticks != 0) {
  VAR_6->first_ticks = 0;

  FUNC_3(VAR_6, VAR_2, VAR_6->period_ticks);
  FUNC_3(VAR_6, VAR_3,
      (FUNC_2(VAR_6, VAR_3) |
      VAR_1 | VAR_0));
 }

 FUNC_1(VAR_6);

 if (VAR_6->et.et_active)
  VAR_6->et.et_event_cb(&VAR_6->et, VAR_6->et.et_arg);

 return (VAR_4);
}
