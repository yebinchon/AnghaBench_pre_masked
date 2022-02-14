
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int et_arg; int (* et_event_cb ) (TYPE_1__*,int ) ;scalar_t__ et_active; } ;
struct rt1310_timer_softc {int lt_period; TYPE_1__ lt_et; int lt_oneshot; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (struct rt1310_timer_softc*,int ) ;
 int FUNC_2 (struct rt1310_timer_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_3(void *VAR_6)
{
 struct rt1310_timer_softc *VAR_7 = (struct rt1310_timer_softc *)VAR_6;


 FUNC_2(VAR_7, VAR_1,
     FUNC_1(VAR_7, VAR_1) | 0x08);
 FUNC_2(VAR_7, VAR_1,
     FUNC_1(VAR_7, VAR_1) & 0x1fb);


 if (!VAR_7->lt_oneshot) {
  FUNC_2(VAR_7, VAR_4, VAR_7->lt_period);
  FUNC_2(VAR_7, VAR_5, VAR_7->lt_period);
  FUNC_2(VAR_7, VAR_1,
   VAR_2 | VAR_3);
 }

 if (VAR_7->lt_et.et_active)
  VAR_7->lt_et.et_event_cb(&VAR_7->lt_et, VAR_7->lt_et.et_arg);

 return (VAR_0);
}
