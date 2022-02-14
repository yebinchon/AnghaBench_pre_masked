
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rk_pinctrl_softc {int * dev; struct rk_pinctrl_conf* conf; int pmu; int grf; } ;
struct rk_pinctrl_conf {int dummy; } ;
typedef scalar_t__ phandle_t ;
typedef int * device_t ;
struct TYPE_2__ {scalar_t__ ocd_data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,void**) ;
 scalar_t__ FUNC_2 (scalar_t__,char*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_1 ;
 struct rk_pinctrl_softc* FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,...) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,char*) ;
 scalar_t__ FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (scalar_t__,char*) ;
 TYPE_1__* FUNC_14 (int *,int ) ;
 int FUNC_15 (struct rk_pinctrl_softc*,char*,int *) ;
 int * FUNC_16 (int *,scalar_t__,int ,int *,int,int *) ;
 int FUNC_17 (int *,scalar_t__) ;
 int FUNC_18 (char**,char*) ;
 scalar_t__ FUNC_19 (int *,scalar_t__,char*,int *) ;

__attribute__((used)) static int
FUNC_20(device_t VAR_2)
{
 struct rk_pinctrl_softc *VAR_3;
 phandle_t VAR_4;
 device_t VAR_5;
 char *VAR_6, *VAR_7;
 int VAR_8;

 VAR_3 = FUNC_7(VAR_2);
 VAR_3->dev = VAR_2;

 VAR_4 = FUNC_12(VAR_2);

 if (FUNC_2(VAR_4, "rockchip,grf") &&
     FUNC_19(VAR_2, VAR_4,
     "rockchip,grf", &VAR_3->grf) != 0) {
  FUNC_8(VAR_2, "cannot get grf driver handle\n");
  return (VAR_0);
 }


 if (FUNC_13(VAR_4, "rockchip,rk3399-pinctrl") ||
     FUNC_13(VAR_4, "rockchip,rk3288-pinctrl")) {
  if (FUNC_2(VAR_4, "rockchip,pmu") &&
      FUNC_19(VAR_2, VAR_4,
      "rockchip,pmu", &VAR_3->pmu) != 0) {
   FUNC_8(VAR_2, "cannot get pmu driver handle\n");
   return (VAR_0);
  }
 }

 VAR_3->conf = (struct rk_pinctrl_conf *)FUNC_14(VAR_2,
     VAR_1)->ocd_data;

 FUNC_11(VAR_2, "rockchip,pins");

 FUNC_17(VAR_2, VAR_4);

 FUNC_6(VAR_2);


 for (VAR_4 = FUNC_0(VAR_4); VAR_4 > 0; VAR_4 = FUNC_3(VAR_4)) {
  if (!FUNC_13(VAR_4, "rockchip,gpio-bank"))
   continue;

  VAR_8 = FUNC_1(VAR_4, "name", (void **)&VAR_6);
  if (VAR_8 <= 0) {
   FUNC_8(VAR_3->dev, "Cannot GPIO subdevice name.\n");
   continue;
  }

  VAR_5 = FUNC_16(VAR_2, VAR_4, 0, ((void*)0), -1, ((void*)0));
  if (VAR_5 == ((void*)0)) {
   FUNC_8(VAR_2, " Cannot add GPIO subdevice: %s\n",
       VAR_6);
   FUNC_4(VAR_6);
   continue;
  }

  VAR_8 = FUNC_9(VAR_5);
  if (VAR_8 != 0) {
   FUNC_8(VAR_3->dev,
       "Cannot attach GPIO subdevice: %s\n", VAR_6);
   FUNC_4(VAR_6);
   continue;
  }


  VAR_7 = VAR_6;
  FUNC_18(&VAR_7, "@");
  if (VAR_6 == VAR_7) {
   FUNC_8(VAR_3->dev,
       "Unrecognized format of GPIO subdevice name: %s\n",
       VAR_6);
   FUNC_4(VAR_6);
   continue;
  }
  VAR_8 = FUNC_15(VAR_3, VAR_6, VAR_5);
  if (VAR_8 != 0) {
   FUNC_8(VAR_3->dev,
       "Cannot register GPIO subdevice %s: %d\n",
       VAR_6, VAR_8);
   FUNC_4(VAR_6);
   continue;
  }
  FUNC_4(VAR_6);
 }

 FUNC_10(VAR_2);

 return (FUNC_5(VAR_2));
}
