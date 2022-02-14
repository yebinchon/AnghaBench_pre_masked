
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pud_ctrl; int ppin; int func; } ;
struct aml8726_pinctrl_softc {int res; TYPE_1__ soc; int dev; } ;
typedef int device_t ;


 int FUNC_0 (struct aml8726_pinctrl_softc*) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 struct aml8726_pinctrl_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_11)
{
 struct aml8726_pinctrl_softc *VAR_12 = FUNC_2(VAR_11);

 VAR_12->dev = VAR_11;

 VAR_12->soc.pud_ctrl = 0;

 switch (VAR_10) {
 case 131:
  VAR_12->soc.func = VAR_1;
  VAR_12->soc.ppin = VAR_2;
  break;
 case 130:
  VAR_12->soc.func = VAR_3;
  VAR_12->soc.ppin = VAR_4;
  break;
 case 129:
  VAR_12->soc.func = VAR_5;
  VAR_12->soc.ppin = VAR_6;
  VAR_12->soc.pud_ctrl = 1;
  break;
 case 128:
  VAR_12->soc.func = VAR_7;
  VAR_12->soc.ppin = VAR_8;
  VAR_12->soc.pud_ctrl = 1;
  break;
 default:
  FUNC_3(VAR_11, "unsupported SoC\n");
  return (VAR_0);

 }

 if (FUNC_1(VAR_11, VAR_9, VAR_12->res)) {
  FUNC_3(VAR_11, "could not allocate resources for device\n");
  return (VAR_0);
 }

 FUNC_0(VAR_12);

 FUNC_5(VAR_11, "amlogic,pins");
 FUNC_4(VAR_11);

 return (0);
}
