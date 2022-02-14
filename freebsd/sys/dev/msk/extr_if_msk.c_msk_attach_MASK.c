
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct msk_softc {int msk_pflags; scalar_t__ msk_hw_id; struct msk_if_softc** msk_if; int msk_mtx; } ;
struct msk_mii_data {int port; int mii_flags; } ;
struct msk_if_softc {int msk_port; int msk_flags; int * msk_if_dev; int msk_miibus; struct ifnet* msk_ifp; struct msk_softc* msk_softc; int msk_tick_ch; int msk_rxq; int msk_txsq; int msk_txq; } ;
struct TYPE_3__ {scalar_t__ ifq_drv_maxlen; } ;
struct ifnet {int if_flags; int if_capabilities; int if_hwassist; int if_capenable; int if_hdrlen; TYPE_1__ if_snd; int if_init; int if_start; int if_ioctl; struct msk_if_softc* if_softc; } ;
struct ether_vlan_header {int dummy; } ;
typedef int * device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct msk_softc*,scalar_t__) ;
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
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_3 (struct msk_if_softc*) ;
 int FUNC_4 (struct msk_if_softc*) ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_5 (int *,int *,int ) ;
 struct msk_mii_data* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 void* FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (struct ifnet*,int *) ;
 int FUNC_13 (struct ifnet*) ;
 struct ifnet* FUNC_14 (int ) ;
 int FUNC_15 (struct ifnet*,int ,int ) ;
 int FUNC_16 (int *,int *,struct ifnet*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_17 (int *) ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int FUNC_18 (struct msk_if_softc*) ;
 int VAR_37 ;
 int FUNC_19 (struct msk_if_softc*) ;
 int FUNC_20 (struct msk_if_softc*) ;

__attribute__((used)) static int
FUNC_21(device_t VAR_38)
{
 struct msk_softc *VAR_39;
 struct msk_if_softc *VAR_40;
 struct ifnet *VAR_41;
 struct msk_mii_data *VAR_42;
 int VAR_43, VAR_44, VAR_45;
 uint8_t VAR_46[6];

 if (VAR_38 == ((void*)0))
  return (VAR_4);

 VAR_45 = 0;
 VAR_40 = FUNC_9(VAR_38);
 VAR_39 = FUNC_9(FUNC_8(VAR_38));
 VAR_42 = FUNC_6(VAR_38);
 VAR_44 = VAR_42->port;

 VAR_40->msk_if_dev = VAR_38;
 VAR_40->msk_port = VAR_44;
 VAR_40->msk_softc = VAR_39;
 VAR_40->msk_flags = VAR_39->msk_pflags;
 VAR_39->msk_if[VAR_44] = VAR_40;

 if (VAR_44 == VAR_24) {
  VAR_40->msk_txq = VAR_29;
  VAR_40->msk_txsq = VAR_31;
  VAR_40->msk_rxq = VAR_27;
 } else {
  VAR_40->msk_txq = VAR_30;
  VAR_40->msk_txsq = VAR_32;
  VAR_40->msk_rxq = VAR_28;
 }

 FUNC_5(&VAR_40->msk_tick_ch, &VAR_40->msk_softc->msk_mtx, 0);
 FUNC_19(VAR_40);

 if ((VAR_45 = FUNC_20(VAR_40)) != 0)
  goto fail;
 FUNC_18(VAR_40);

 VAR_41 = VAR_40->msk_ifp = FUNC_14(VAR_18);
 if (VAR_41 == ((void*)0)) {
  FUNC_11(VAR_40->msk_if_dev, "can not if_alloc()\n");
  VAR_45 = VAR_5;
  goto fail;
 }
 VAR_41->if_softc = VAR_40;
 FUNC_15(VAR_41, FUNC_7(VAR_38), FUNC_10(VAR_38));
 VAR_41->if_flags = VAR_15 | VAR_17 | VAR_16;
 VAR_41->if_capabilities = VAR_10 | VAR_9;




 if ((VAR_40->msk_flags & VAR_21) == 0 &&
     VAR_39->msk_hw_id != VAR_2)
  VAR_41->if_capabilities |= VAR_8;
 if ((VAR_40->msk_flags & VAR_21) != 0 &&
     (VAR_40->msk_flags & VAR_23) == 0)
  VAR_41->if_capabilities |= VAR_8;
 VAR_41->if_hwassist = VAR_20 | VAR_3;
 VAR_41->if_capenable = VAR_41->if_capabilities;
 VAR_41->if_ioctl = VAR_34;
 VAR_41->if_start = VAR_37;
 VAR_41->if_init = VAR_33;
 FUNC_1(&VAR_41->if_snd, VAR_25 - 1);
 VAR_41->if_snd.ifq_drv_maxlen = VAR_25 - 1;
 FUNC_2(&VAR_41->if_snd);
 FUNC_3(VAR_40);
 for (VAR_43 = 0; VAR_43 < VAR_7; VAR_43++)
  VAR_46[VAR_43] = FUNC_0(VAR_39, VAR_0 + (VAR_44 * 8) + VAR_43);




 FUNC_4(VAR_40);
 FUNC_12(VAR_41, VAR_46);
 FUNC_3(VAR_40);


 VAR_41->if_capabilities |= VAR_14;
 if ((VAR_40->msk_flags & VAR_22) == 0) {






  VAR_41->if_capabilities |= VAR_12 | VAR_13;




  if ((VAR_40->msk_flags & VAR_21) != 0 &&
      (VAR_40->msk_flags & VAR_23) == 0)
   VAR_41->if_capabilities |= VAR_11;
 }
 VAR_41->if_capenable = VAR_41->if_capabilities;




 if ((VAR_40->msk_flags & VAR_21) == 0)
  VAR_41->if_capenable &= ~VAR_8;






        VAR_41->if_hdrlen = sizeof(struct ether_vlan_header);




 FUNC_4(VAR_40);
 VAR_45 = FUNC_16(VAR_38, &VAR_40->msk_miibus, VAR_41, VAR_35,
     VAR_36, VAR_1, VAR_26, VAR_19,
     VAR_42->mii_flags);
 if (VAR_45 != 0) {
  FUNC_11(VAR_40->msk_if_dev, "attaching PHYs failed\n");
  FUNC_13(VAR_41);
  VAR_45 = VAR_6;
  goto fail;
 }

fail:
 if (VAR_45 != 0) {

  VAR_39->msk_if[VAR_44] = ((void*)0);
  FUNC_17(VAR_38);
 }

 return (VAR_45);
}
