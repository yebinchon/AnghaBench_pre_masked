
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct gpiobacklight_softc {int sc_brightness; int sc_oid; int * sc_pin; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,char*) ;
 int VAR_4 ;
 int FUNC_1 (struct sysctl_ctx_list*,int ,int ,char*,int,struct gpiobacklight_softc*,int ,int ,char*,char*) ;
 int FUNC_2 (struct sysctl_oid*) ;
 struct gpiobacklight_softc* FUNC_3 (int ) ;
 struct sysctl_ctx_list* FUNC_4 (int ) ;
 struct sysctl_oid* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int,int ,int **) ;
 int FUNC_8 (int *,int ) ;
 int VAR_5 ;
 int FUNC_9 (struct gpiobacklight_softc*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_6)
{
 struct gpiobacklight_softc *VAR_7;
 struct sysctl_ctx_list *VAR_8;
 struct sysctl_oid *VAR_9;
 phandle_t VAR_10;

 VAR_7 = FUNC_3(VAR_6);

 if ((VAR_10 = FUNC_10(VAR_6)) == -1)
  return (VAR_2);

 if (FUNC_0(VAR_10, "default-on"))
  VAR_7->sc_brightness = 1;
 else
  VAR_7->sc_brightness = 0;

 FUNC_7(VAR_6, VAR_10, 0, &VAR_7->sc_pin);
 if (VAR_7->sc_pin == ((void*)0)) {
  FUNC_6(VAR_6, "failed to map GPIO pin\n");
  return (VAR_2);
 }

 FUNC_8(VAR_7->sc_pin, VAR_3);

 FUNC_9(VAR_7);


 VAR_8 = FUNC_4(VAR_6);
 VAR_9 = FUNC_5(VAR_6);
 VAR_7->sc_oid = FUNC_1(VAR_8, FUNC_2(VAR_9), VAR_4,
     "brightness", VAR_1 | VAR_0, VAR_7, 0,
     VAR_5, "I", "backlight brightness");

 return (0);
}
