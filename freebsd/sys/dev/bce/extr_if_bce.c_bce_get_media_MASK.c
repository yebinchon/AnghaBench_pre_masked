
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct bce_softc {int bce_phy_addr; int bce_phy_flags; int bce_flags; int bce_dev; } ;


 int FUNC_0 (struct bce_softc*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct bce_softc*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct bce_softc*,int,char*,...) ;
 scalar_t__ FUNC_5 (struct bce_softc*,int ) ;
 scalar_t__ FUNC_6 (struct bce_softc*,int ) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(struct bce_softc *VAR_21)
{
 u32 VAR_22;

 FUNC_2(VAR_20);


 VAR_21->bce_phy_addr = 1;

 if (FUNC_1(VAR_21) == VAR_3) {
   u32 VAR_23 = FUNC_5(VAR_21, VAR_6);
  u32 VAR_24 = VAR_23 & VAR_7;
  u32 VAR_25;





  if (VAR_24 == VAR_8) {
   FUNC_4(VAR_21, VAR_4, "5709 bonded "
       "for copper.\n");
   goto bce_get_media_exit;
  } else if (VAR_24 == VAR_9) {
   FUNC_4(VAR_21, VAR_4, "5709 bonded "
       "for dual media.\n");
   VAR_21->bce_phy_flags |= VAR_17;
   goto bce_get_media_exit;
  }

  if (VAR_23 & VAR_12)
   VAR_25 = (VAR_23 &
       VAR_10) >> 21;
  else
   VAR_25 = (VAR_23 &
       VAR_11) >> 8;

  if (FUNC_7(VAR_21->bce_dev) == 0) {
   switch (VAR_25) {
   case 0x4:
   case 0x5:
   case 0x6:
    FUNC_4(VAR_21, VAR_4,
        "BCM5709 s/w configured for SerDes.\n");
    VAR_21->bce_phy_flags |= VAR_17;
    break;
   default:
    FUNC_4(VAR_21, VAR_4,
        "BCM5709 s/w configured for Copper.\n");
    break;
   }
  } else {
   switch (VAR_25) {
   case 0x1:
   case 0x2:
   case 0x4:
    FUNC_4(VAR_21, VAR_4,
        "BCM5709 s/w configured for SerDes.\n");
    VAR_21->bce_phy_flags |= VAR_17;
    break;
   default:
    FUNC_4(VAR_21, VAR_4,
        "BCM5709 s/w configured for Copper.\n");
    break;
   }
  }

 } else if (FUNC_0(VAR_21) & VAR_0)
  VAR_21->bce_phy_flags |= VAR_17;

 if (VAR_21->bce_phy_flags & VAR_17) {

  VAR_21->bce_flags |= VAR_13;

  if (FUNC_1(VAR_21) == VAR_3)
   VAR_21->bce_phy_flags |= VAR_16;

  if (FUNC_1(VAR_21) != VAR_1) {

   VAR_21->bce_phy_addr = 2;

   VAR_22 = FUNC_6(VAR_21, VAR_18);
   if (VAR_22 & VAR_19) {
    VAR_21->bce_phy_flags |=
        VAR_14;
    FUNC_4(VAR_21, VAR_4, "Found 2.5Gb "
        "capable adapter\n");
   }
  }
 } else if ((FUNC_1(VAR_21) == VAR_1) ||
     (FUNC_1(VAR_21) == VAR_2))
  VAR_21->bce_phy_flags |= VAR_15;

bce_get_media_exit:
 FUNC_4(VAR_21, (VAR_4 | VAR_5),
  "Using PHY address %d.\n", VAR_21->bce_phy_addr);

 FUNC_3(VAR_20);
}
