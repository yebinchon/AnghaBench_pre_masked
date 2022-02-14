
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int et_arg; int (* et_event_cb ) (TYPE_1__*,int ) ;scalar_t__ et_active; } ;
struct xentimer_softc {TYPE_1__ et; } ;
struct xentimer_pcpu_data {scalar_t__ timer; int last_processed; } ;


 int FUNC_0 (int ) ;
 struct xentimer_pcpu_data* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4(void *VAR_3)
{
 struct xentimer_softc *VAR_4 = (struct xentimer_softc *)VAR_3;
 struct xentimer_pcpu_data *VAR_5 = FUNC_1(VAR_2);

 VAR_5->last_processed = FUNC_3(FUNC_0(VAR_1));
 if (VAR_5->timer != 0 && VAR_4->et.et_active)
  VAR_4->et.et_event_cb(&VAR_4->et, VAR_4->et.et_arg);

 return (VAR_0);
}
