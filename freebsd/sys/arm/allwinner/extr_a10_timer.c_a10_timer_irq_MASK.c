
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int et_arg; int (* et_event_cb ) (TYPE_1__*,int ) ;scalar_t__ et_active; } ;
struct a10_timer_softc {scalar_t__ sc_period; TYPE_1__ et; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (struct a10_timer_softc*,int ) ;
 int FUNC_5 (struct a10_timer_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_6(void *VAR_4)
{
 struct a10_timer_softc *VAR_5;
 uint32_t VAR_6;

 VAR_5 = (struct a10_timer_softc *)VAR_4;


 FUNC_5(VAR_5, VAR_3, FUNC_2(0));

 VAR_6 = FUNC_4(VAR_5, FUNC_0(0));







 if ((VAR_6 & (1<<1)) == 0 && VAR_5->sc_period > 0) {

  FUNC_5(VAR_5, FUNC_1(0), VAR_5->sc_period);


  VAR_6 |= VAR_1 | VAR_2;
  FUNC_5(VAR_5, FUNC_0(0), VAR_6);
 }

 if (VAR_5->et.et_active)
  VAR_5->et.et_event_cb(&VAR_5->et, VAR_5->et.et_arg);

 return (VAR_0);
}
