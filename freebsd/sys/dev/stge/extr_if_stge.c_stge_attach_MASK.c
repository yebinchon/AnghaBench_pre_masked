
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint32_t ;
typedef int uint16_t ;
struct stge_softc {scalar_t__ sc_spec; int sc_rev; int sc_usefiber; int sc_led; int sc_stge1023; int sc_PhyCtrl; int sc_txthresh; struct ifnet* sc_ifp; int sc_dev; int sc_ih; int * sc_res; int sc_DMACtrl; int sc_miibus; void* sc_rxint_dmawait; void* sc_rxint_nframe; int sc_link_task; int sc_mtx; int sc_tick_ch; int sc_mii_mtx; } ;
struct TYPE_3__ {scalar_t__ ifq_drv_maxlen; } ;
struct ifnet {int if_flags; int if_capabilities; int if_capenable; int if_hdrlen; scalar_t__ if_hwassist; TYPE_1__ if_snd; int if_init; int if_start; int if_ioctl; struct stge_softc* if_softc; } ;
struct ether_vlan_header {int dummy; } ;
typedef int enaddr ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct stge_softc*,int ) ;
 int FUNC_1 (struct stge_softc*,int ) ;
 int FUNC_2 (struct stge_softc*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
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
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int * VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_5 (int) ;
 int VAR_28 ;
 scalar_t__ FUNC_6 (void*) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 int FUNC_7 (struct stge_softc*) ;
 int VAR_35 ;
 int VAR_36 ;
 void* VAR_37 ;
 void* VAR_38 ;
 void* VAR_39 ;
 void* VAR_40 ;
 void* VAR_41 ;
 void* VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 scalar_t__ VAR_46 ;
 int FUNC_8 (struct stge_softc*) ;
 int FUNC_9 (int ,int ,int ,char*,int,void**,int ,int ,char*,char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int ,int ,struct stge_softc*) ;
 int FUNC_12 (int*,int*,int) ;
 int FUNC_13 (int ,scalar_t__,int *) ;
 int FUNC_14 (int ,int ,int,int *,int ,struct stge_softc*,int *) ;
 int FUNC_15 (int *,int *,int ) ;
 int FUNC_16 (int ) ;
 char* FUNC_17 (int ) ;
 struct stge_softc* FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ,char*,...) ;
 int FUNC_23 (struct ifnet*,int*) ;
 int FUNC_24 (struct ifnet*) ;
 struct ifnet* FUNC_25 (int ) ;
 int FUNC_26 (struct ifnet*,int ,int ) ;
 int FUNC_27 (int) ;
 int FUNC_28 (int ,int *,struct ifnet*,int ,int ,int ,int ,int ,int) ;
 int FUNC_29 (int *,char*,int *,int ) ;
 int FUNC_30 (int ) ;
 scalar_t__ FUNC_31 (int ) ;
 int FUNC_32 (int ) ;
 void* FUNC_33 (int ,int ,int) ;
 int FUNC_34 (int ,int ,char*,void**) ;
 int FUNC_35 (int ) ;
 int FUNC_36 (struct stge_softc*) ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int FUNC_37 (struct stge_softc*,scalar_t__,int*) ;
 scalar_t__ VAR_53 ;
 scalar_t__ VAR_54 ;
 int FUNC_38 (struct stge_softc*,int ) ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;

__attribute__((used)) static int
FUNC_39(device_t VAR_58)
{
 struct stge_softc *VAR_59;
 struct ifnet *VAR_60;
 uint8_t VAR_61[VAR_7];
 int VAR_62, VAR_63, VAR_64;
 uint16_t VAR_65;
 uint32_t VAR_66;

 VAR_62 = 0;
 VAR_59 = FUNC_18(VAR_58);
 VAR_59->sc_dev = VAR_58;

 FUNC_29(&VAR_59->sc_mtx, FUNC_17(VAR_58), VAR_25,
     VAR_24);
 FUNC_29(&VAR_59->sc_mii_mtx, "stge_mii_mutex", ((void*)0), VAR_24);
 FUNC_15(&VAR_59->sc_tick_ch, &VAR_59->sc_mtx, 0);
 FUNC_11(&VAR_59->sc_link_task, 0, VAR_50, VAR_59);




 FUNC_30(VAR_58);
 VAR_65 = FUNC_33(VAR_58, VAR_28, 2);
 VAR_66 = FUNC_33(VAR_58, FUNC_5(1), 4);
 if (FUNC_6(VAR_66))
  VAR_59->sc_spec = VAR_54;
 else {
  VAR_66 = FUNC_33(VAR_58, FUNC_5(0), 4);
  if (!FUNC_6(VAR_66)) {
   FUNC_22(VAR_59->sc_dev, "couldn't locate IO BAR\n");
   VAR_62 = VAR_6;
   goto fail;
  }
  VAR_59->sc_spec = VAR_53;
 }
 VAR_62 = FUNC_13(VAR_58, VAR_59->sc_spec, VAR_59->sc_res);
 if (VAR_62 != 0) {
  FUNC_22(VAR_58, "couldn't allocate %s resources\n",
      VAR_59->sc_spec == VAR_54 ? "memory" : "I/O");
  goto fail;
 }
 VAR_59->sc_rev = FUNC_32(VAR_58);

 FUNC_9(FUNC_19(VAR_58),
     FUNC_10(FUNC_20(VAR_58)), VAR_26,
     "rxint_nframe", VAR_3|VAR_2, &VAR_59->sc_rxint_nframe, 0,
     VAR_57, "I", "stge rx interrupt nframe");

 FUNC_9(FUNC_19(VAR_58),
     FUNC_10(FUNC_20(VAR_58)), VAR_26,
     "rxint_dmawait", VAR_3|VAR_2, &VAR_59->sc_rxint_dmawait, 0,
     VAR_56, "I", "stge rx interrupt dmawait");


 VAR_59->sc_rxint_nframe = VAR_40;
 VAR_62 = FUNC_34(FUNC_16(VAR_58), FUNC_21(VAR_58),
     "rxint_nframe", &VAR_59->sc_rxint_nframe);
 if (VAR_62 == 0) {
  if (VAR_59->sc_rxint_nframe < VAR_42 ||
      VAR_59->sc_rxint_nframe > VAR_41) {
   FUNC_22(VAR_58, "rxint_nframe value out of range; "
       "using default: %d\n", VAR_40);
   VAR_59->sc_rxint_nframe = VAR_40;
  }
 }

 VAR_59->sc_rxint_dmawait = VAR_37;
 VAR_62 = FUNC_34(FUNC_16(VAR_58), FUNC_21(VAR_58),
     "rxint_dmawait", &VAR_59->sc_rxint_dmawait);
 if (VAR_62 == 0) {
  if (VAR_59->sc_rxint_dmawait < VAR_39 ||
      VAR_59->sc_rxint_dmawait > VAR_38) {
   FUNC_22(VAR_58, "rxint_dmawait value out of range; "
       "using default: %d\n", VAR_37);
   VAR_59->sc_rxint_dmawait = VAR_37;
  }
 }

 if ((VAR_62 = FUNC_36(VAR_59)) != 0)
  goto fail;





 if (FUNC_2(VAR_59, VAR_31) & VAR_0)
  VAR_59->sc_usefiber = 1;
 else
  VAR_59->sc_usefiber = 0;


 FUNC_37(VAR_59, VAR_33, &VAR_59->sc_led);




 FUNC_7(VAR_59);
 FUNC_38(VAR_59, VAR_36);
 FUNC_8(VAR_59);
 if (FUNC_31(VAR_58) != VAR_4) {
  uint16_t VAR_67;

  VAR_67 = FUNC_1(VAR_59, VAR_43);
  VAR_61[0] = VAR_67 & 0xff;
  VAR_61[1] = VAR_67 >> 8;
  VAR_67 = FUNC_1(VAR_59, VAR_44);
  VAR_61[2] = VAR_67 & 0xff;
  VAR_61[3] = VAR_67 >> 8;
  VAR_67 = FUNC_1(VAR_59, VAR_45);
  VAR_61[4] = VAR_67 & 0xff;
  VAR_61[5] = VAR_67 >> 8;
  VAR_59->sc_stge1023 = 0;
 } else {
  uint16_t VAR_68[VAR_7 / 2];
  for (VAR_64 = 0; VAR_64 <VAR_7 / 2; VAR_64++) {
   FUNC_37(VAR_59, VAR_34 + VAR_64,
       &VAR_68[VAR_64]);
   VAR_68[VAR_64] = FUNC_27(VAR_68[VAR_64]);
  }
  FUNC_12(VAR_68, VAR_61, sizeof(VAR_61));
  VAR_59->sc_stge1023 = 1;
 }

 VAR_60 = VAR_59->sc_ifp = FUNC_25(VAR_17);
 if (VAR_60 == ((void*)0)) {
  FUNC_22(VAR_59->sc_dev, "failed to if_alloc()\n");
  VAR_62 = VAR_6;
  goto fail;
 }

 VAR_60->if_softc = VAR_59;
 FUNC_26(VAR_60, FUNC_16(VAR_58), FUNC_21(VAR_58));
 VAR_60->if_flags = VAR_14 | VAR_16 | VAR_15;
 VAR_60->if_ioctl = VAR_49;
 VAR_60->if_start = VAR_55;
 VAR_60->if_init = VAR_47;
 VAR_60->if_snd.ifq_drv_maxlen = VAR_46 - 1;
 FUNC_3(&VAR_60->if_snd, VAR_60->if_snd.ifq_drv_maxlen);
 FUNC_4(&VAR_60->if_snd);

 if (VAR_59->sc_rev >= 0x0c) {
  VAR_60->if_hwassist = VAR_32;
  VAR_60->if_capabilities = VAR_8;
 } else {
  VAR_60->if_hwassist = 0;
  VAR_60->if_capabilities = 0;
 }
 VAR_60->if_capabilities |= VAR_13;
 VAR_60->if_capenable = VAR_60->if_capabilities;




 VAR_59->sc_PhyCtrl = FUNC_0(VAR_59, VAR_35) &
     (VAR_29 | VAR_30);


 VAR_63 = VAR_20;
 if (VAR_59->sc_rev >= 0x40 && VAR_59->sc_rev <= 0x4e)
  VAR_63 |= VAR_21;
 VAR_62 = FUNC_28(VAR_59->sc_dev, &VAR_59->sc_miibus, VAR_60, VAR_51,
     VAR_52, VAR_1, VAR_23, VAR_22,
     VAR_63);
 if (VAR_62 != 0) {
  FUNC_22(VAR_59->sc_dev, "attaching PHYs failed\n");
  goto fail;
 }

 FUNC_23(VAR_60, VAR_61);


 VAR_60->if_capabilities |= VAR_12 | VAR_11;
 if (VAR_59->sc_rev >= 0x0c)
  VAR_60->if_capabilities |= VAR_10;
 VAR_60->if_capenable = VAR_60->if_capabilities;
 VAR_60->if_hdrlen = sizeof(struct ether_vlan_header);







 VAR_59->sc_txthresh = 0x0fff;




 VAR_59->sc_DMACtrl = 0;
 if ((VAR_65 & VAR_27) == 0)
  VAR_59->sc_DMACtrl |= VAR_5;




 VAR_62 = FUNC_14(VAR_58, VAR_59->sc_res[1], VAR_19 | VAR_18,
     ((void*)0), VAR_48, VAR_59, &VAR_59->sc_ih);
 if (VAR_62 != 0) {
  FUNC_24(VAR_60);
  FUNC_22(VAR_59->sc_dev, "couldn't set up IRQ\n");
  VAR_59->sc_ifp = ((void*)0);
  goto fail;
 }

fail:
 if (VAR_62 != 0)
  FUNC_35(VAR_58);

 return (VAR_62);
}
