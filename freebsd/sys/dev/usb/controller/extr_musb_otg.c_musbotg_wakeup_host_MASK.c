
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {scalar_t__ status_suspend; } ;
struct TYPE_4__ {int bus_mtx; } ;
struct musbotg_softc {TYPE_1__ sc_flags; TYPE_2__ sc_bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct musbotg_softc*,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct musbotg_softc*,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void
FUNC_3(struct musbotg_softc *VAR_4)
{
 uint8_t VAR_5;

 if (!(VAR_4->sc_flags.status_suspend)) {
  return;
 }

 VAR_5 = FUNC_0(VAR_4, VAR_2);
 VAR_5 &= ~VAR_1;
 VAR_5 |= VAR_0;
 FUNC_1(VAR_4, VAR_2, VAR_5);



 FUNC_2(&VAR_4->sc_bus.bus_mtx, VAR_3 / 50);

 VAR_5 = FUNC_0(VAR_4, VAR_2);
 VAR_5 &= ~VAR_0;
 FUNC_1(VAR_4, VAR_2, VAR_5);

 VAR_4->sc_flags.status_suspend = 0;
}
