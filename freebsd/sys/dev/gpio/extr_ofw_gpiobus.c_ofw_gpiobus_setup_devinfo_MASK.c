
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct gpiobus_ivar {int npins; int rl; int * pins; } ;
struct ofw_gpiobus_devinfo {struct gpiobus_ivar opd_dinfo; int pin; int opd_obdinfo; } ;
struct gpiobus_softc {int dummy; } ;
struct gpiobus_pin {struct gpiobus_ivar opd_dinfo; int pin; int opd_obdinfo; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gpiobus_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,struct ofw_gpiobus_devinfo*) ;
 int FUNC_2 (struct ofw_gpiobus_devinfo*,int ) ;
 scalar_t__ FUNC_3 (struct gpiobus_ivar*) ;
 struct ofw_gpiobus_devinfo* FUNC_4 (int,int ,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int ,int ,int *,int *) ;
 int FUNC_8 (int ,struct ofw_gpiobus_devinfo*) ;
 int FUNC_9 (int ,int ,char*,struct gpiobus_softc*,struct ofw_gpiobus_devinfo**) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static struct ofw_gpiobus_devinfo *
FUNC_11(device_t VAR_3, device_t VAR_4, phandle_t VAR_5)
{
 int VAR_6, VAR_7;
 struct gpiobus_ivar *VAR_8;
 struct gpiobus_pin *VAR_9;
 struct gpiobus_softc *VAR_10;
 struct ofw_gpiobus_devinfo *VAR_11;

 VAR_10 = FUNC_0(VAR_3);
 VAR_11 = FUNC_4(sizeof(*VAR_11), VAR_0, VAR_1 | VAR_2);
 if (VAR_11 == ((void*)0))
  return (((void*)0));
 if (FUNC_6(&VAR_11->opd_obdinfo, VAR_5) != 0) {
  FUNC_2(VAR_11, VAR_0);
  return (((void*)0));
 }

 VAR_7 = FUNC_9(VAR_4, VAR_5, "gpios", VAR_10, &VAR_9);
 if (VAR_7 <= 0) {
  FUNC_5(&VAR_11->opd_obdinfo);
  FUNC_2(VAR_11, VAR_0);
  return (((void*)0));
 }

 FUNC_10(&VAR_11->opd_dinfo.rl);

 VAR_8 = &VAR_11->opd_dinfo;
 VAR_8->npins = (uint32_t)VAR_7;
 if (FUNC_3(VAR_8) != 0) {
  FUNC_2(VAR_9, VAR_0);
  FUNC_8(VAR_3, VAR_11);
  return (((void*)0));
 }
 for (VAR_6 = 0; VAR_6 < VAR_8->npins; VAR_6++)
  VAR_8->pins[VAR_6] = VAR_9[VAR_6].pin;
 FUNC_2(VAR_9, VAR_0);

 if (FUNC_7(VAR_3, VAR_5, &VAR_11->opd_dinfo.rl, ((void*)0)) != 0) {
  FUNC_8(VAR_3, VAR_11);
  return (((void*)0));
 }
 FUNC_1(VAR_4, VAR_11);

 return (VAR_11);
}
