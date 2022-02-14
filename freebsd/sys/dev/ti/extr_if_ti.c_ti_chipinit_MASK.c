
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ti_softc {scalar_t__ ti_hwrev; int ti_hdrsplit; int ti_dev; TYPE_1__* ti_ifp; int ti_linkstat; } ;
struct TYPE_2__ {int if_capenable; } ;


 int FUNC_0 (struct ti_softc*,int ) ;
 int FUNC_1 (struct ti_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct ti_softc*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
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


 int FUNC_3 (struct ti_softc*,int ,int) ;
 int VAR_41 ;
 int FUNC_4 (int ,char*,...) ;
 scalar_t__ FUNC_5 (struct ti_softc*) ;

__attribute__((used)) static int
FUNC_6(struct ti_softc *VAR_42)
{
 uint32_t VAR_43;
 uint32_t VAR_44 = 0;
 uint32_t VAR_45;


 VAR_42->ti_linkstat = VAR_10;






 FUNC_1(VAR_42, VAR_21,
     VAR_19 | (VAR_19 << 24));



 if (FUNC_0(VAR_42, VAR_8) & VAR_6) {
  FUNC_4(VAR_42->ti_dev, "board self-diagnostics failed!\n");
  return (VAR_1);
 }


 FUNC_3(VAR_42, VAR_8, VAR_5);


 switch (FUNC_0(VAR_42, VAR_21) & VAR_18) {
 case 129:
  VAR_42->ti_hwrev = VAR_14;
  break;
 case 128:
  VAR_42->ti_hwrev = VAR_15;
  break;
 default:
  FUNC_4(VAR_42->ti_dev, "unsupported chip revision\n");
  return (VAR_1);
 }


 if (VAR_42->ti_hwrev == VAR_15) {
  FUNC_3(VAR_42, VAR_7, VAR_5);
  FUNC_3(VAR_42, VAR_22, VAR_23);
  FUNC_3(VAR_42, VAR_20, VAR_16);
 }
 FUNC_1(VAR_42, VAR_39, VAR_38|VAR_40);
 if (VAR_42->ti_hwrev == VAR_15) {
  FUNC_3(VAR_42, VAR_39, VAR_34);
 }


 FUNC_2(VAR_42, VAR_39, (VAR_35|
     VAR_33));


 VAR_43 = FUNC_0(VAR_42, VAR_36) & 0xFF;







 if (FUNC_0(VAR_42, VAR_37) & VAR_4) {
  switch (VAR_43) {
  case 1:
  case 4:
  case 8:
  case 16:
  case 32:
  case 64:
   break;
  default:

   if (VAR_41)
    FUNC_4(VAR_42->ti_dev, "cache line size %d"
        " not supported; disabling PCI MWI\n",
        VAR_43);
   FUNC_1(VAR_42, VAR_37, FUNC_0(VAR_42,
       VAR_37) & ~VAR_4);
   break;
  }
 }

 FUNC_3(VAR_42, VAR_39, VAR_44);


 FUNC_3(VAR_42, VAR_39, VAR_32);

 if (VAR_42->ti_hdrsplit)
  VAR_45 = VAR_29;
 else
  VAR_45 = 0;



 FUNC_1(VAR_42, VAR_13, VAR_25 |
     VAR_26 | VAR_31 |
     VAR_30 | VAR_28 |
     VAR_27 | VAR_45);
 if ((VAR_42->ti_ifp->if_capenable & (VAR_3 | VAR_2)) == 0)
  FUNC_3(VAR_42, VAR_13, VAR_24);


 FUNC_1(VAR_42, VAR_12, VAR_9);
 FUNC_1(VAR_42, VAR_11, VAR_9);

 if (FUNC_5(VAR_42)) {
  FUNC_4(VAR_42->ti_dev, "bios thinks we're in a 64 bit slot, "
      "but we aren't");
  return (VAR_0);
 }

 return (0);
}
