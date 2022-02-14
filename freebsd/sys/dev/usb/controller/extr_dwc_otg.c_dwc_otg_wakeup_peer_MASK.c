
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int bus_mtx; } ;
struct TYPE_3__ {scalar_t__ status_device_mode; int status_suspend; } ;
struct dwc_otg_softc {int sc_hprt_val; TYPE_2__ sc_bus; TYPE_1__ sc_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct dwc_otg_softc*,int ) ;
 int FUNC_2 (struct dwc_otg_softc*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct dwc_otg_softc*) ;
 int VAR_6 ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static void
FUNC_5(struct dwc_otg_softc *VAR_7)
{
 if (!VAR_7->sc_flags.status_suspend)
  return;

 FUNC_0(5, "Remote wakeup\n");

 if (VAR_7->sc_flags.status_device_mode) {
  uint32_t VAR_8;


  VAR_8 = FUNC_1(VAR_7, VAR_1);
  VAR_8 |= VAR_0;
  FUNC_2(VAR_7, VAR_1, VAR_8);


  FUNC_4(&VAR_7->sc_bus.bus_mtx, VAR_6 / 125);

  VAR_8 &= ~VAR_0;
  FUNC_2(VAR_7, VAR_1, VAR_8);
 } else {

  FUNC_2(VAR_7, VAR_3, 0);


  FUNC_4(&VAR_7->sc_bus.bus_mtx, VAR_6 / 100);


  VAR_7->sc_hprt_val |= VAR_4;
  FUNC_2(VAR_7, VAR_2, VAR_7->sc_hprt_val);


  FUNC_4(&VAR_7->sc_bus.bus_mtx, VAR_6 / 10);


  VAR_7->sc_hprt_val &= ~(VAR_5 | VAR_4);
  FUNC_2(VAR_7, VAR_2, VAR_7->sc_hprt_val);


  FUNC_4(&VAR_7->sc_bus.bus_mtx, VAR_6 / 250);
 }


 FUNC_3(VAR_7);
}
