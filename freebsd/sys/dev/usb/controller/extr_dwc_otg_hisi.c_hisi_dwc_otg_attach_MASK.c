
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sc_mode; } ;
struct dwc_otg_fdt_softc {TYPE_1__ sc_otg; } ;
typedef int device_t ;


 int VAR_0 ;
 struct dwc_otg_fdt_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_1)
{
 struct dwc_otg_fdt_softc *VAR_2;



 VAR_2 = FUNC_0(VAR_1);
 VAR_2->sc_otg.sc_mode = VAR_0;

 return (FUNC_1(VAR_1));
}
