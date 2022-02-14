
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpiobus_ivar {int npins; size_t* pins; int rl; } ;
struct ofw_gpiobus_devinfo {int opd_obdinfo; struct gpiobus_ivar opd_dinfo; } ;
struct gpiobus_softc {size_t sc_npins; TYPE_1__* sc_pins; } ;
typedef int device_t ;
struct TYPE_2__ {scalar_t__ mapped; } ;


 int VAR_0 ;
 struct gpiobus_softc* FUNC_0 (int ) ;
 int FUNC_1 (struct ofw_gpiobus_devinfo*,int ) ;
 int FUNC_2 (struct gpiobus_ivar*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_1, struct ofw_gpiobus_devinfo *VAR_2)
{
 int VAR_3;
 struct gpiobus_ivar *VAR_4;
 struct gpiobus_softc *VAR_5;

 VAR_5 = FUNC_0(VAR_1);
 VAR_4 = &VAR_2->opd_dinfo;
 for (VAR_3 = 0; VAR_3 < VAR_4->npins; VAR_3++) {
  if (VAR_4->pins[VAR_3] > VAR_5->sc_npins)
   continue;
  VAR_5->sc_pins[VAR_4->pins[VAR_3]].mapped = 0;
 }
 FUNC_2(VAR_4);
 FUNC_4(&VAR_2->opd_dinfo.rl);
 FUNC_3(&VAR_2->opd_obdinfo);
 FUNC_1(VAR_2, VAR_0);
}
