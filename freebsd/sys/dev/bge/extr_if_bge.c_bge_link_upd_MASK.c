
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mii_data {int mii_media_status; int mii_media_active; } ;
struct bge_softc {scalar_t__ bge_asicrev; scalar_t__ bge_chipid; int bge_link; int bge_flags; int bge_mi_mode; int bge_dev; int bge_miibus; int bge_ifp; int bge_phy_addr; scalar_t__ bge_link_evt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct bge_softc*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bge_softc*) ;
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
 int FUNC_2 (struct bge_softc*,int ) ;
 int FUNC_3 (struct bge_softc*,int ,int) ;
 int FUNC_4 (int) ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ,int ) ;
 scalar_t__ VAR_25 ;
 struct mii_data* FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (struct mii_data*) ;

__attribute__((used)) static void
FUNC_13(struct bge_softc *VAR_26)
{
 struct mii_data *VAR_27;
 uint32_t VAR_28, VAR_29;

 FUNC_1(VAR_26);


 VAR_26->bge_link_evt = 0;
 if (VAR_26->bge_asicrev == VAR_0 &&
     VAR_26->bge_chipid != VAR_2) {
  VAR_29 = FUNC_2(VAR_26, VAR_14);
  if (VAR_29 & VAR_9) {
   VAR_27 = FUNC_9(VAR_26->bge_miibus);
   FUNC_12(VAR_27);
   if (!VAR_26->bge_link &&
       VAR_27->mii_media_status & VAR_21 &&
       FUNC_5(VAR_27->mii_media_active) != VAR_22) {
    VAR_26->bge_link++;
    if (VAR_25)
     FUNC_11(VAR_26->bge_ifp, "link UP\n");
   } else if (VAR_26->bge_link &&
       (!(VAR_27->mii_media_status & VAR_21) ||
       FUNC_5(VAR_27->mii_media_active) == VAR_22)) {
    VAR_26->bge_link = 0;
    if (VAR_25)
     FUNC_11(VAR_26->bge_ifp, "link DOWN\n");
   }


   FUNC_3(VAR_26, VAR_12,
       VAR_3);
   FUNC_6(VAR_26->bge_dev, VAR_26->bge_phy_addr,
       VAR_20);
   FUNC_8(VAR_26->bge_dev, VAR_26->bge_phy_addr,
       VAR_19, VAR_18);
  }
  return;
 }

 if (VAR_26->bge_flags & VAR_4) {
  VAR_29 = FUNC_2(VAR_26, VAR_14);
  if (VAR_29 & VAR_11) {
   if (!VAR_26->bge_link) {
    VAR_26->bge_link++;
    if (VAR_26->bge_asicrev == VAR_1) {
     FUNC_0(VAR_26, VAR_13,
         VAR_5);
     FUNC_4(40);
    }
    FUNC_3(VAR_26, VAR_14, 0xFFFFFFFF);
    if (VAR_25)
     FUNC_11(VAR_26->bge_ifp, "link UP\n");
    FUNC_10(VAR_26->bge_ifp,
        VAR_24);
   }
  } else if (VAR_26->bge_link) {
   VAR_26->bge_link = 0;
   if (VAR_25)
    FUNC_11(VAR_26->bge_ifp, "link DOWN\n");
   FUNC_10(VAR_26->bge_ifp, VAR_23);
  }
 } else if ((VAR_26->bge_mi_mode & VAR_15) != 0) {





  VAR_28 = (FUNC_2(VAR_26, VAR_17) & VAR_16) ? 1 : 0;

  if (VAR_28 != VAR_26->bge_link ||
      VAR_26->bge_asicrev == VAR_0) {
   VAR_27 = FUNC_9(VAR_26->bge_miibus);
   FUNC_12(VAR_27);
   if (!VAR_26->bge_link &&
       VAR_27->mii_media_status & VAR_21 &&
       FUNC_5(VAR_27->mii_media_active) != VAR_22) {
    VAR_26->bge_link++;
    if (VAR_25)
     FUNC_11(VAR_26->bge_ifp, "link UP\n");
   } else if (VAR_26->bge_link &&
       (!(VAR_27->mii_media_status & VAR_21) ||
       FUNC_5(VAR_27->mii_media_active) == VAR_22)) {
    VAR_26->bge_link = 0;
    if (VAR_25)
     FUNC_11(VAR_26->bge_ifp, "link DOWN\n");
   }
  }
 } else {




  VAR_27 = FUNC_9(VAR_26->bge_miibus);
  FUNC_12(VAR_27);
  FUNC_7(VAR_26->bge_dev);
 }


 FUNC_3(VAR_26, VAR_14, VAR_10 |
     VAR_6 | VAR_8 |
     VAR_7);
}
