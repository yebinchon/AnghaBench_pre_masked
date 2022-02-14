
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int et_min_period; } ;
struct xentimer_softc {TYPE_1__ et; } ;
typedef int device_t ;


 struct xentimer_softc* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 device_t VAR_1 = (device_t) VAR_0;
 struct xentimer_softc *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(&VAR_2->et, VAR_2->et.et_min_period, 0);
}
