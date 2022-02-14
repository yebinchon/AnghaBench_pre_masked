
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct omap_uhh_softc {int uhh_rev; int* port_mode; int sc_dev; } ;






 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int) ;
 void* FUNC_2 (struct omap_uhh_softc*,int ) ;
 int FUNC_3 (struct omap_uhh_softc*,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int
FUNC_6(struct omap_uhh_softc *VAR_42)
{
 uint8_t VAR_43;
 uint32_t VAR_44;
 int VAR_45;


 FUNC_4(VAR_35);


 VAR_42->uhh_rev = FUNC_2(VAR_42, VAR_7);
 FUNC_0(VAR_42->sc_dev, "UHH revision 0x%08x\n", VAR_42->uhh_rev);

 if (VAR_42->uhh_rev == VAR_3) {





  switch(VAR_42->port_mode[0]) {
  case 128:
   break;
  case 130:
   if (FUNC_5(VAR_37, VAR_0))
    FUNC_0(VAR_42->sc_dev,
        "failed to set clock source for port 0\n");
   if (FUNC_4(VAR_37))
    FUNC_0(VAR_42->sc_dev,
        "failed to set clock USBP1_PHY_CLK source for port 0\n");
   break;
  case 129:
   if (FUNC_4(VAR_38))
    FUNC_0(VAR_42->sc_dev,
        "failed to set clock USBP1_PHY_CLK source for port 0\n");
   break;
  case 131:
   if (FUNC_4(VAR_36))
    FUNC_0(VAR_42->sc_dev,
        "failed to set clock USBP1_PHY_CLK source for port 0\n");
   break;
  default:
   FUNC_0(VAR_42->sc_dev, "unknown port mode %d for port 0\n", VAR_42->port_mode[0]);
  }
  switch(VAR_42->port_mode[1]) {
  case 128:
   break;
  case 130:
   if (FUNC_5(VAR_40, VAR_0))
    FUNC_0(VAR_42->sc_dev,
        "failed to set clock source for port 0\n");
   if (FUNC_4(VAR_40))
    FUNC_0(VAR_42->sc_dev,
        "failed to set clock USBP2_PHY_CLK source for port 1\n");
   break;
  case 129:
   if (FUNC_4(VAR_41))
    FUNC_0(VAR_42->sc_dev,
        "failed to set clock USBP2_UTMI_CLK source for port 1\n");
   break;
  case 131:
   if (FUNC_4(VAR_39))
    FUNC_0(VAR_42->sc_dev,
        "failed to set clock USBP2_HSIC_CLK source for port 1\n");
   break;
  default:
   FUNC_0(VAR_42->sc_dev, "unknown port mode %d for port 1\n", VAR_42->port_mode[1]);
  }
 }


 VAR_44 = FUNC_2(VAR_42, VAR_8);
 if (VAR_42->uhh_rev == VAR_2) {
  VAR_44 &= ~(VAR_31 |
      VAR_29);
  VAR_44 |= (VAR_26 |
      VAR_24 |
      VAR_25 |
      VAR_32 |
      VAR_30);
 } else if (VAR_42->uhh_rev == VAR_3) {
  VAR_44 &= ~VAR_27;
  VAR_44 |= VAR_28;
  VAR_44 &= ~VAR_33;
  VAR_44 |= VAR_34;
 }
 FUNC_3(VAR_42, VAR_8, VAR_44);
 FUNC_0(VAR_42->sc_dev, "OMAP_UHH_SYSCONFIG: 0x%08x\n", VAR_44);

 VAR_44 = FUNC_2(VAR_42, VAR_6);


 VAR_44 |= (VAR_11 |
   VAR_12 |
   VAR_10);
 VAR_44 &= ~VAR_13;

 if (VAR_42->uhh_rev == VAR_2) {
  if (VAR_42->port_mode[0] == 128)
   VAR_44 &= ~VAR_14;
  if (VAR_42->port_mode[1] == 128)
   VAR_44 &= ~VAR_19;
  if (VAR_42->port_mode[2] == 128)
   VAR_44 &= ~VAR_23;


  if ((VAR_42->port_mode[0] == 130) ||
      (VAR_42->port_mode[1] == 130) ||
      (VAR_42->port_mode[2] == 130))
   VAR_44 &= ~VAR_18;
  else
   VAR_44 |= VAR_18;

 } else if (VAR_42->uhh_rev == VAR_3) {
  VAR_44 |= VAR_9;


  VAR_44 &= ~VAR_16;
  VAR_44 &= ~VAR_21;

  if (VAR_42->port_mode[0] == 129)
   VAR_44 |= VAR_17;
  else if (VAR_42->port_mode[0] == 131)
   VAR_44 |= VAR_15;

  if (VAR_42->port_mode[1] == 129)
   VAR_44 |= VAR_22;
  else if (VAR_42->port_mode[1] == 131)
   VAR_44 |= VAR_20;
 }

 FUNC_3(VAR_42, VAR_6, VAR_44);
 FUNC_0(VAR_42->sc_dev, "UHH setup done, uhh_hostconfig=0x%08x\n", VAR_44);
 VAR_43 = 0;
 for (VAR_45 = 0; VAR_45 < VAR_1; VAR_45++) {
  if (VAR_42->port_mode[VAR_45] == 129)
   VAR_43 |= (1 << VAR_45);
 }
 if (VAR_43)
  FUNC_1(VAR_43);

 return(0);
}
