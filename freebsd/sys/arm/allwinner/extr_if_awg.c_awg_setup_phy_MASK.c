
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct awg_softc {scalar_t__ type; int ** res; int * syscon; } ;
typedef int phandle_t ;
typedef int device_t ;
typedef int clk_t ;


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
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_0 (int ,char*,void**) ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 size_t VAR_17 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int*,int*) ;
 scalar_t__ VAR_18 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,char const*,int *) ;
 int FUNC_7 (int ,int ,char*,int *) ;
 int FUNC_8 (int ,int ) ;
 struct awg_softc* FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (char*,char*) ;
 scalar_t__ FUNC_13 (char*,char*,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,int) ;

__attribute__((used)) static int
FUNC_16(device_t VAR_19)
{
 struct awg_softc *VAR_20;
 clk_t VAR_21, VAR_22;
 const char *VAR_23;
 char *VAR_24;
 phandle_t VAR_25;
 uint32_t VAR_26, VAR_27, VAR_28;
 int VAR_29;
 bool VAR_30;

 VAR_20 = FUNC_9(VAR_19);
 VAR_25 = FUNC_11(VAR_19);
 VAR_30 = 0;

 if (FUNC_0(VAR_25, "phy-mode", (void **)&VAR_24) == 0)
  return (0);

 if (VAR_20->syscon != ((void*)0) || VAR_20->res[VAR_17] != ((void*)0))
  VAR_30 = 1;

 if (VAR_18)
  FUNC_10(VAR_19, "PHY type: %s, conf mode: %s\n", VAR_24,
      VAR_30 ? "reg" : "clk");

 if (VAR_30) {







  VAR_26 = FUNC_14(VAR_19);
  VAR_26 &= ~(VAR_9 | VAR_13 | VAR_12);
  if (FUNC_13(VAR_24, "rgmii", 5) == 0)
   VAR_26 |= VAR_11 | VAR_15;
  else if (FUNC_12(VAR_24, "rmii") == 0)
   VAR_26 |= VAR_12;
  else
   VAR_26 |= VAR_10 | VAR_14;







  VAR_29 = FUNC_4(VAR_19, &VAR_27, &VAR_28);
  if (VAR_29 != 0)
   goto fail;


  VAR_26 &= ~(VAR_7 | VAR_5);
  if (VAR_27 > 0)
   VAR_26 |= (VAR_27 << VAR_8);
  if (VAR_28 > 0)
   VAR_26 |= (VAR_28 << VAR_6);

  if (VAR_20->type == VAR_16) {
   if (FUNC_3(VAR_19)) {
    VAR_26 |= VAR_3;
    VAR_26 &= ~VAR_4;
    if (FUNC_1(VAR_25,
        "allwinner,leds-active-low"))
     VAR_26 |= VAR_2;
    else
     VAR_26 &= ~VAR_2;


    VAR_26 &= ~VAR_0;
    VAR_26 |= (1 << VAR_1);
   } else {
    VAR_26 &= ~VAR_3;
   }
  }

  if (VAR_18)
   FUNC_10(VAR_19, "EMAC clock: 0x%08x\n", VAR_26);
  FUNC_15(VAR_19, VAR_26);
 } else {
  if (FUNC_13(VAR_24, "rgmii", 5) == 0)
   VAR_23 = "emac_int_tx";
  else
   VAR_23 = "mii_phy_tx";


  VAR_29 = FUNC_7(VAR_19, 0, "tx", &VAR_21);
  if (VAR_29 != 0) {
   FUNC_10(VAR_19, "cannot get tx clock\n");
   goto fail;
  }


  VAR_29 = FUNC_6(VAR_19, VAR_23, &VAR_22);
  if (VAR_29 != 0) {
   FUNC_10(VAR_19, "cannot get clock '%s'\n",
       VAR_23);
   goto fail;
  }


  VAR_29 = FUNC_8(VAR_21, VAR_22);
  if (VAR_29 != 0) {
   FUNC_10(VAR_19, "cannot set tx clock parent\n");
   goto fail;
  }


  VAR_29 = FUNC_5(VAR_21);
  if (VAR_29 != 0) {
   FUNC_10(VAR_19, "cannot enable tx clock\n");
   goto fail;
  }
 }

 VAR_29 = 0;

fail:
 FUNC_2(VAR_24);
 return (VAR_29);
}
