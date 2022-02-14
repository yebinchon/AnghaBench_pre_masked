
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct mii_data {int dummy; } ;
struct ifnet {int if_drv_flags; } ;
struct emac_softc {int emac_tick_ch; int emac_miibus; scalar_t__ emac_link; struct ifnet* emac_ifp; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct emac_softc*) ;
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
 int VAR_20 ;
 int FUNC_2 (struct emac_softc*,int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_3 (struct emac_softc*,int ,int) ;
 int VAR_29 ;
 int VAR_30 ;
 int* FUNC_4 (struct ifnet*) ;
 int FUNC_5 (int *,int ,int ,struct emac_softc*) ;
 struct mii_data* FUNC_6 (int ) ;
 int FUNC_7 (struct emac_softc*) ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_8 (struct mii_data*) ;

__attribute__((used)) static void
FUNC_9(struct emac_softc *VAR_33)
{
 struct ifnet *VAR_34;
 struct mii_data *VAR_35;
 uint32_t VAR_36;
 uint8_t *VAR_37;

 FUNC_1(VAR_33);

 VAR_34 = VAR_33->emac_ifp;
 if ((VAR_34->if_drv_flags & VAR_30) != 0)
  return;


 VAR_36 = FUNC_2(VAR_33, VAR_21);
 VAR_36 |= VAR_23;
 FUNC_3(VAR_33, VAR_21, VAR_36);
 FUNC_0(1);


 VAR_36 = FUNC_2(VAR_33, VAR_6);
 VAR_36 &= (~VAR_8);
 FUNC_3(VAR_33, VAR_6, VAR_36);


 VAR_36 = FUNC_2(VAR_33, VAR_16);
 VAR_36 &= (~(0xf << 2));
 VAR_36 |= (0xd << 2);
 FUNC_3(VAR_33, VAR_16, VAR_36);


 FUNC_3(VAR_33, VAR_22, 0);


 FUNC_3(VAR_33, VAR_0, 0);
 VAR_36 = FUNC_2(VAR_33, VAR_2);
 FUNC_3(VAR_33, VAR_2, VAR_36);
 FUNC_0(1);


 VAR_36 = FUNC_2(VAR_33, VAR_27);
 VAR_36 |= VAR_26;
 VAR_36 &= VAR_28;
 FUNC_3(VAR_33, VAR_27, VAR_36);


 VAR_36 = FUNC_2(VAR_33, VAR_21);
 VAR_36 |= VAR_24;
 VAR_36 &= VAR_25;
 FUNC_3(VAR_33, VAR_21, VAR_36);


 VAR_36 = FUNC_2(VAR_33, VAR_6);
 VAR_36 |= VAR_7;
 FUNC_3(VAR_33, VAR_6, VAR_36);


 VAR_36 = FUNC_2(VAR_33, VAR_9);
 VAR_36 |= VAR_10;
 FUNC_3(VAR_33, VAR_9, VAR_36);


 FUNC_3(VAR_33, VAR_13, VAR_14);


 FUNC_3(VAR_33, VAR_12, VAR_19 |
     (VAR_18 << 8));


 FUNC_3(VAR_33, VAR_5, VAR_20 | (VAR_11 << 8));


 FUNC_3(VAR_33, VAR_15, VAR_17);


 VAR_37 = FUNC_4(VAR_34);
 FUNC_3(VAR_33, VAR_4, VAR_37[0] << 16 |
     VAR_37[1] << 8 | VAR_37[2]);
 FUNC_3(VAR_33, VAR_3, VAR_37[3] << 16 |
     VAR_37[4] << 8 | VAR_37[5]);


 FUNC_7(VAR_33);


 VAR_36 = FUNC_2(VAR_33, VAR_0);
 VAR_36 |= VAR_1;
 FUNC_3(VAR_33, VAR_0, VAR_36);

 VAR_34->if_drv_flags |= VAR_30;
 VAR_34->if_drv_flags &= ~VAR_29;

 VAR_33->emac_link = 0;


 VAR_35 = FUNC_6(VAR_33->emac_miibus);
 FUNC_8(VAR_35);

 FUNC_5(&VAR_33->emac_tick_ch, VAR_32, VAR_31, VAR_33);
}
