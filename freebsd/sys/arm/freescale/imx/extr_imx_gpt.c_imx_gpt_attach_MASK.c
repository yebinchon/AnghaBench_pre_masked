
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_5__ {char* et_name; int et_flags; int et_quality; int et_frequency; int et_min_period; int et_max_period; struct imx_gpt_softc* et_priv; int et_stop; int et_start; } ;
struct imx_gpt_softc {int sc_clksrc; int clkfreq; TYPE_3__ et; int * res; int sc_ih; int sc_ioh; int sc_iot; int sc_dev; } ;
typedef int device_t ;
struct TYPE_4__ {int tc_frequency; struct imx_gpt_softc* tc_priv; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (struct imx_gpt_softc*,int ) ;
 int VAR_20 ;
 int FUNC_1 (struct imx_gpt_softc*,int ,int) ;
 int FUNC_2 (int ,struct imx_gpt_softc*) ;
 scalar_t__ VAR_21 ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int ,int ,int ,int *,struct imx_gpt_softc*,int *) ;
 struct imx_gpt_softc* FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 () ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 TYPE_1__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_14(device_t VAR_28)
{
 struct imx_gpt_softc *VAR_29;
 int VAR_30, VAR_31;
 uint32_t VAR_32, VAR_33, VAR_34, VAR_35, VAR_36;

 VAR_29 = FUNC_6(VAR_28);

 if (FUNC_3(VAR_28, VAR_24, VAR_29->res)) {
  FUNC_8(VAR_28, "could not allocate resources\n");
  return (VAR_1);
 }

 VAR_29->sc_dev = VAR_28;
 VAR_29->sc_iot = FUNC_12(VAR_29->res[0]);
 VAR_29->sc_ioh = FUNC_11(VAR_29->res[0]);






 VAR_29->sc_clksrc = 130;

 VAR_30 = 0;

 switch (VAR_29->sc_clksrc) {
 case 132:
  VAR_32 = 32768;
  break;
 case 130:
  VAR_32 = FUNC_10();
  break;
 case 129:
  VAR_32 = FUNC_10() * 2;
  break;
 case 133:
  VAR_30 |= VAR_4;
  VAR_32 = 24000000;
  break;
 case 128:
 case 131:
 default:
  FUNC_8(VAR_28, "Unsupported clock source '%d'\n",
      VAR_29->sc_clksrc);
  return (VAR_0);
 }







 FUNC_1(VAR_29, VAR_14, 0);
 FUNC_1(VAR_29, VAR_15, 0);


 VAR_30 |=
     VAR_29->sc_clksrc |
     VAR_8 |
     VAR_9 |
     VAR_6 |
     VAR_11 |
     VAR_5;
 FUNC_1(VAR_29, VAR_14, VAR_30);
 FUNC_1(VAR_29, VAR_14, VAR_30 | VAR_10);
 while (FUNC_0(VAR_29, VAR_14) & VAR_10)
  continue;


 if (VAR_32 < VAR_20) {
  VAR_33 = 0;
  VAR_29->clkfreq = VAR_32;
 } else {
  VAR_33 = VAR_32 / VAR_20;
  VAR_29->clkfreq = VAR_32 / VAR_33;
  VAR_33 -= 1;
 }
 FUNC_1(VAR_29, VAR_17, VAR_33);


 FUNC_1(VAR_29, VAR_18, VAR_12);


 FUNC_1(VAR_29, VAR_14, VAR_30 | VAR_7);

 if (VAR_21)
  FUNC_8(VAR_28, "Running on %dKHz clock, base freq %uHz CR=0x%08x, PR=0x%08x\n",
      VAR_29->clkfreq / 1000, VAR_32, FUNC_0(VAR_29, VAR_14), FUNC_0(VAR_29, VAR_17));


 VAR_31 = FUNC_5(VAR_28, VAR_29->res[1], VAR_19, VAR_23,
     ((void*)0), VAR_29, &VAR_29->sc_ih);
 if (VAR_31 != 0) {
  FUNC_4(VAR_28, VAR_24, VAR_29->res);
  FUNC_8(VAR_28, "Unable to setup the clock irq handler, "
      "err = %d\n", VAR_31);
  return (VAR_1);
 }
 VAR_35 = FUNC_0(VAR_29, VAR_13);
 FUNC_1(VAR_29, VAR_16, 0);
 VAR_36 = FUNC_0(VAR_29, VAR_13);
 VAR_34 = ((VAR_36 - VAR_35 + 1) * 3) / 2;


 VAR_29->et.et_name = "iMXGPT";
 VAR_29->et.et_flags = VAR_2 | VAR_3;
 VAR_29->et.et_quality = 800;
 VAR_29->et.et_frequency = VAR_29->clkfreq;
 VAR_29->et.et_min_period = ((uint64_t)VAR_34 << 32) / VAR_29->clkfreq;
 VAR_29->et.et_max_period = ((uint64_t)0xfffffffe << 32) / VAR_29->clkfreq;
 VAR_29->et.et_start = VAR_26;
 VAR_29->et.et_stop = VAR_27;
 VAR_29->et.et_priv = VAR_29;
 FUNC_9(&VAR_29->et);


 VAR_25.tc_frequency = VAR_29->clkfreq;
 VAR_25.tc_priv = VAR_29;
 FUNC_13(&VAR_25);


 if (FUNC_7(VAR_28) == 0) {
  FUNC_2(VAR_22, VAR_29);
 }

 return (0);
}
