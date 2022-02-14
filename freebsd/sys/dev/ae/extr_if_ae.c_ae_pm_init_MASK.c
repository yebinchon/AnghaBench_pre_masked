
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct mii_data {int mii_media_status; int mii_media_active; } ;
struct ifnet {int if_capenable; } ;
struct TYPE_7__ {int flags; int dev; int miibus; struct ifnet* ifp; } ;
typedef TYPE_1__ ae_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
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
 int FUNC_1 (TYPE_1__*,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_3 (int ) ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 int FUNC_4 (TYPE_1__*) ;
 struct mii_data* FUNC_5 (int ) ;
 int FUNC_6 (struct mii_data*) ;
 scalar_t__ FUNC_7 (int ,int ,int*) ;
 int FUNC_8 (int ,scalar_t__,int) ;
 int FUNC_9 (int ,scalar_t__,int,int) ;

__attribute__((used)) static void
FUNC_10(ae_softc_t *VAR_32)
{
 struct ifnet *VAR_33;
 uint32_t VAR_34;
 uint16_t VAR_35;
 struct mii_data *VAR_36;
 int VAR_37;

 FUNC_0(VAR_32);

 VAR_33 = VAR_32->ifp;
 if ((VAR_32->flags & VAR_0) == 0) {

  FUNC_2(VAR_32, VAR_23, 0);
  return;
 }




 if ((VAR_33->if_capenable & VAR_24) != 0) {
  VAR_36 = FUNC_5(VAR_32->miibus);
  FUNC_6(VAR_36);
  if ((VAR_36->mii_media_status & VAR_26) != 0 &&
      (VAR_36->mii_media_status & VAR_25) != 0) {
   FUNC_2(VAR_32, VAR_23, VAR_21 | VAR_22);





   VAR_34 = VAR_12 | VAR_5 | VAR_14 | VAR_13 | ((VAR_1 << VAR_3) & VAR_2) | ((VAR_8 << VAR_10) & VAR_9) | VAR_4 | VAR_7;






   if ((FUNC_3(VAR_36->mii_media_active) & VAR_27) != 0)

    VAR_34 |= VAR_6;
   FUNC_2(VAR_32, VAR_11, VAR_34);

  } else {
   FUNC_2(VAR_32, VAR_23, VAR_19 | VAR_20);

   FUNC_2(VAR_32, VAR_11, 0);
  }
 } else {
  FUNC_4(VAR_32);
 }




 VAR_34 = FUNC_1(VAR_32, VAR_18);
 VAR_34 |= VAR_17;
 FUNC_2(VAR_32, VAR_18, VAR_34);
 VAR_34 = FUNC_1(VAR_32, VAR_15);
 VAR_34 |= VAR_16;
 FUNC_2(VAR_32, VAR_15, VAR_34);




 if (FUNC_7(VAR_32->dev, VAR_31, &VAR_37) == 0) {
  VAR_35 = FUNC_8(VAR_32->dev, VAR_37 + VAR_30, 2);
  VAR_35 &= ~(VAR_28 | VAR_29);
  if ((VAR_33->if_capenable & VAR_24) != 0)
   VAR_35 |= VAR_28 | VAR_29;
  FUNC_9(VAR_32->dev, VAR_37 + VAR_30, VAR_35, 2);
 }
}
