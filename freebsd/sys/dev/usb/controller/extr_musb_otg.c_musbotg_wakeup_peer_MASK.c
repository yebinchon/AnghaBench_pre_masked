
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int bus_mtx; } ;
struct TYPE_3__ {int status_suspend; } ;
struct musbotg_softc {TYPE_2__ sc_bus; TYPE_1__ sc_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct musbotg_softc*,int ) ;
 int VAR_1 ;
 int FUNC_1 (struct musbotg_softc*,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static void
FUNC_3(struct musbotg_softc *VAR_3)
{
 uint8_t VAR_4;

 if (!(VAR_3->sc_flags.status_suspend)) {
  return;
 }

 VAR_4 = FUNC_0(VAR_3, VAR_1);
 VAR_4 |= VAR_0;
 FUNC_1(VAR_3, VAR_1, VAR_4);



 FUNC_2(&VAR_3->sc_bus.bus_mtx, VAR_2 / 125);

 VAR_4 = FUNC_0(VAR_3, VAR_1);
 VAR_4 &= ~VAR_0;
 FUNC_1(VAR_3, VAR_1, VAR_4);
}
