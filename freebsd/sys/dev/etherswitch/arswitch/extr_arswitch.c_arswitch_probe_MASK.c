
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct arswitch_softc {int page; int is_internal_switch; int chip_rev; int chip_ver; int mii_lo_first; int sc_switchtype; } ;
typedef int device_t ;
typedef int desc ;


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
 int FUNC_0 (struct arswitch_softc*,int ,char*,char*,int) ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct arswitch_softc*,int) ;
 struct arswitch_softc* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (char*,int,char*,char*,int,int) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_13)
{
 struct arswitch_softc *VAR_14;
 uint32_t VAR_15;
 char *VAR_16, VAR_17[256];

 VAR_14 = FUNC_5(VAR_13);
 FUNC_4(VAR_14, sizeof(*VAR_14));
 VAR_14->page = -1;


 if (FUNC_1(VAR_13) == 0) {
  VAR_16 = "AR7240";
  VAR_14->sc_switchtype = VAR_4;
  VAR_14->is_internal_switch = 1;
  VAR_15 = 0;
  goto done;
 }


 if (FUNC_2(VAR_13) == 0) {
  VAR_16 = "AR9340";
  VAR_14->sc_switchtype = VAR_9;
  VAR_14->is_internal_switch = 1;
  VAR_15 = 0;
  goto done;
 }


 VAR_15 = FUNC_3(VAR_13, VAR_3);
 VAR_14->chip_rev = (VAR_15 & VAR_0);
 VAR_14->chip_ver = (VAR_15 & VAR_1) > VAR_2;
 switch (VAR_15 & (VAR_1 | VAR_0)) {
 case 0x0101:
  VAR_16 = "AR8216";
  VAR_14->sc_switchtype = VAR_5;
  break;
 case 0x0201:
  VAR_16 = "AR8226";
  VAR_14->sc_switchtype = VAR_6;
  break;

 case 0x1000:
 case 0x1001:
  VAR_16 = "AR8316";
  VAR_14->sc_switchtype = VAR_7;
  break;
 case 0x1202:
 case 0x1204:
  VAR_16 = "AR8327";
  VAR_14->sc_switchtype = VAR_8;
  VAR_14->mii_lo_first = 1;
  break;
 default:
  VAR_16 = ((void*)0);
 }

done:

 FUNC_0(VAR_14, VAR_10, "chipname=%s, id=%08x\n", VAR_16, VAR_15);
 if (VAR_16 != ((void*)0)) {
  FUNC_7(VAR_17, sizeof(VAR_17),
      "Atheros %s Ethernet Switch (ver %d rev %d)",
      VAR_16,
      VAR_14->chip_ver,
      VAR_14->chip_rev);
  FUNC_6(VAR_13, VAR_17);
  return (VAR_11);
 }
 return (VAR_12);
}
