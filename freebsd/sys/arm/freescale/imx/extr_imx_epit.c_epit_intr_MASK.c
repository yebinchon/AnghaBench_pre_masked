
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int et_arg; int (* et_event_cb ) (TYPE_1__*,int ) ;scalar_t__ et_active; } ;
struct epit_softc {TYPE_1__ et; int ctlreg; scalar_t__ oneshot; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct epit_softc*,int ) ;
 int FUNC_1 (struct epit_softc*,int ,int ) ;
 int FUNC_2 (struct epit_softc*,int ,int) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static int
FUNC_4(void *VAR_5)
{
 struct epit_softc *VAR_6;
 uint32_t VAR_7;

 VAR_6 = VAR_5;
 if (VAR_6->oneshot)
  FUNC_1(VAR_6, VAR_0, VAR_6->ctlreg);

 VAR_7 = FUNC_0(VAR_6, VAR_1);
 FUNC_2(VAR_6, VAR_1, VAR_7);

 if ((VAR_7 & VAR_2) == 0)
  return (VAR_4);

 if (VAR_6->et.et_active)
  VAR_6->et.et_event_cb(&VAR_6->et, VAR_6->et.et_arg);

 return (VAR_3);
}
