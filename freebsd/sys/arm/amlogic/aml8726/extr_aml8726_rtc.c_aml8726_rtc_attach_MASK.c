
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int always; int xo; int gpo; } ;
struct aml8726_rtc_softc {int res; TYPE_1__ init; int dev; } ;
typedef int device_t ;


 int FUNC_0 (struct aml8726_rtc_softc*) ;




 int VAR_0 ;
 scalar_t__ FUNC_1 (struct aml8726_rtc_softc*) ;
 int FUNC_2 (struct aml8726_rtc_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int) ;
 struct aml8726_rtc_softc* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_3)
{
 struct aml8726_rtc_softc *VAR_4 = FUNC_6(VAR_3);

 VAR_4->dev = VAR_3;

 switch (VAR_2) {
 case 131:
  VAR_4->init.always = 1;
  VAR_4->init.xo = 0x3c0a;
  VAR_4->init.gpo = 0x100000;
  break;
 case 130:
 case 129:
 case 128:
  VAR_4->init.always = 0;
  VAR_4->init.xo = 0x180a;
  VAR_4->init.gpo = 0x500000;
  break;
 default:
  FUNC_7(VAR_3, "unsupported SoC\n");
  return (VAR_0);

 }

 if (FUNC_3(VAR_3, VAR_1, VAR_4->res)) {
  FUNC_7(VAR_3, "can not allocate resources for device\n");
  return (VAR_0);
 }

 FUNC_2(VAR_4);

 if (FUNC_1(VAR_4) != 0) {
  FUNC_7(VAR_3, "crystal oscillator check failed\n");

  FUNC_4(VAR_3, VAR_1, VAR_4->res);

  return (VAR_0);
 }

 FUNC_0(VAR_4);

 FUNC_5(VAR_3, 1000000);

 return (0);
}
