
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_char ;
struct ti_softc {int ti_copper; int ti_intrhand; int * ti_irq; TYPE_1__* dev; int ifmedia; int * ti_membuf2; int * ti_membuf; int * ti_res; int ti_bhandle; int ti_btag; struct ifnet* ti_ifp; int ti_mtx; int ti_watchdog; int ti_dev; } ;
struct TYPE_5__ {scalar_t__ ifq_drv_maxlen; } ;
struct ifnet {int if_capabilities; int if_capenable; int if_flags; int if_hdrlen; TYPE_2__ if_snd; int if_baudrate; int if_get_counter; int if_init; int if_start; int if_ioctl; struct ti_softc* if_softc; int if_hwassist; } ;
struct ether_vlan_header {int dummy; } ;
typedef int device_t ;
struct TYPE_4__ {struct ti_softc* si_drv1; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_24 ;
 int FUNC_2 (unsigned long) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 int FUNC_3 (int ) ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 void* FUNC_4 (int ,int ,int*,int) ;
 int FUNC_5 (int ,int *,int,int *,int ,struct ti_softc*,int *) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct ti_softc* FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (struct ifnet*,int *) ;
 struct ifnet* FUNC_13 (int ) ;
 int FUNC_14 (struct ifnet*,int ,int ) ;
 int FUNC_15 (int *,int,int ,int *) ;
 int FUNC_16 (int *,int ,int ,int ) ;
 int FUNC_17 (int *,int) ;
 TYPE_1__* FUNC_18 (int *,int ,int ,int ,int,char*,int ) ;
 void* FUNC_19 (int,int ,int ) ;
 int FUNC_20 (int *,int ,int ,int ) ;
 int FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (int ) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int VAR_42 ;
 scalar_t__ FUNC_26 (struct ti_softc*) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (struct ti_softc*) ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int FUNC_29 (struct ti_softc*,int,int) ;
 scalar_t__ FUNC_30 (struct ti_softc*,int *,scalar_t__,int ) ;
 int VAR_49 ;
 int FUNC_31 (struct ti_softc*) ;

__attribute__((used)) static int
FUNC_32(device_t VAR_50)
{
 struct ifnet *VAR_51;
 struct ti_softc *VAR_52;
 int VAR_53 = 0, VAR_54;
 u_char VAR_55[6];

 VAR_52 = FUNC_9(VAR_50);
 VAR_52->ti_dev = VAR_50;

 FUNC_20(&VAR_52->ti_mtx, FUNC_8(VAR_50), VAR_28,
     VAR_27);
 FUNC_6(&VAR_52->ti_watchdog, &VAR_52->ti_mtx, 0);
 FUNC_16(&VAR_52->ifmedia, VAR_23, VAR_45, VAR_44);
 VAR_51 = VAR_52->ti_ifp = FUNC_13(VAR_24);
 if (VAR_51 == ((void*)0)) {
  FUNC_11(VAR_50, "can not if_alloc()\n");
  VAR_53 = VAR_3;
  goto fail;
 }
 VAR_52->ti_ifp->if_hwassist = VAR_37;
 VAR_52->ti_ifp->if_capabilities = VAR_9 | VAR_8;
 VAR_52->ti_ifp->if_capenable = VAR_52->ti_ifp->if_capabilities;




 FUNC_21(VAR_50);

 VAR_54 = FUNC_3(0);
 VAR_52->ti_res = FUNC_4(VAR_50, VAR_36, &VAR_54,
     VAR_33);

 if (VAR_52->ti_res == ((void*)0)) {
  FUNC_11(VAR_50, "couldn't map memory\n");
  VAR_53 = VAR_4;
  goto fail;
 }

 VAR_52->ti_btag = FUNC_25(VAR_52->ti_res);
 VAR_52->ti_bhandle = FUNC_24(VAR_52->ti_res);


 VAR_54 = 0;

 VAR_52->ti_irq = FUNC_4(VAR_50, VAR_35, &VAR_54,
     VAR_34 | VAR_33);

 if (VAR_52->ti_irq == ((void*)0)) {
  FUNC_11(VAR_50, "couldn't map interrupt\n");
  VAR_53 = VAR_4;
  goto fail;
 }

 if (FUNC_26(VAR_52)) {
  FUNC_11(VAR_50, "chip initialization failed\n");
  VAR_53 = VAR_4;
  goto fail;
 }


 FUNC_29(VAR_52, 0x2000, 0x100000 - 0x2000);


 if (FUNC_26(VAR_52)) {
  FUNC_11(VAR_50, "chip initialization failed\n");
  VAR_53 = VAR_4;
  goto fail;
 }
 if (FUNC_30(VAR_52, VAR_55, VAR_38 + 2, VAR_5)) {
  FUNC_11(VAR_50, "failed to read station address\n");
  VAR_53 = VAR_4;
  goto fail;
 }


 VAR_52->ti_membuf = FUNC_19(sizeof(uint8_t) * VAR_40, VAR_29, VAR_30);
 VAR_52->ti_membuf2 = FUNC_19(sizeof(uint8_t) * VAR_40, VAR_29,
     VAR_30);
 if (VAR_52->ti_membuf == ((void*)0) || VAR_52->ti_membuf2 == ((void*)0)) {
  FUNC_11(VAR_50, "cannot allocate memory buffer\n");
  VAR_53 = VAR_2;
  goto fail;
 }
 if ((VAR_53 = FUNC_28(VAR_52)) != 0)
  goto fail;
 if (FUNC_23(VAR_50) == VAR_1 &&
     FUNC_22(VAR_50) == VAR_0)
  VAR_52->ti_copper = 1;

 if (FUNC_23(VAR_50) == VAR_32 &&
     FUNC_22(VAR_50) == VAR_31)
  VAR_52->ti_copper = 1;


 FUNC_31(VAR_52);


 VAR_51->if_softc = VAR_52;
 FUNC_14(VAR_51, FUNC_7(VAR_50), FUNC_10(VAR_50));
 VAR_51->if_flags = VAR_13 | VAR_15 | VAR_14;
 VAR_51->if_ioctl = VAR_48;
 VAR_51->if_start = VAR_49;
 VAR_51->if_init = VAR_46;
 VAR_51->if_get_counter = VAR_43;
 VAR_51->if_baudrate = FUNC_2(1UL);
 VAR_51->if_snd.ifq_drv_maxlen = VAR_39 - 1;
 FUNC_0(&VAR_51->if_snd, VAR_51->if_snd.ifq_drv_maxlen);
 FUNC_1(&VAR_51->if_snd);


 if (VAR_52->ti_copper) {
  FUNC_15(&VAR_52->ifmedia, VAR_21|VAR_19, 0, ((void*)0));
  FUNC_15(&VAR_52->ifmedia,
      VAR_21|VAR_19|VAR_22, 0, ((void*)0));
  FUNC_15(&VAR_52->ifmedia, VAR_21|VAR_18, 0, ((void*)0));
  FUNC_15(&VAR_52->ifmedia,
      VAR_21|VAR_18|VAR_22, 0, ((void*)0));
  FUNC_15(&VAR_52->ifmedia, VAR_21|VAR_17, 0, ((void*)0));
  FUNC_15(&VAR_52->ifmedia,
      VAR_21|VAR_17|VAR_22, 0, ((void*)0));
 } else {

  FUNC_15(&VAR_52->ifmedia, VAR_21|VAR_16, 0, ((void*)0));
  FUNC_15(&VAR_52->ifmedia,
      VAR_21|VAR_16|VAR_22, 0, ((void*)0));
 }
 FUNC_15(&VAR_52->ifmedia, VAR_21|VAR_20, 0, ((void*)0));
 FUNC_17(&VAR_52->ifmedia, VAR_21|VAR_20);
 VAR_52->dev = FUNC_18(&VAR_42, FUNC_10(VAR_50), VAR_41,
     VAR_6, 0600, "ti%d", FUNC_10(VAR_50));
 VAR_52->dev->si_drv1 = VAR_52;




 FUNC_12(VAR_51, VAR_55);


 VAR_51->if_capabilities |= VAR_12 | VAR_10 |
     VAR_11;
 VAR_51->if_capenable = VAR_51->if_capabilities;

 VAR_51->if_hdrlen = sizeof(struct ether_vlan_header);


 VAR_51->if_capabilities |= VAR_7;
 VAR_51->if_capenable |= VAR_7;


 VAR_53 = FUNC_5(VAR_50, VAR_52->ti_irq, VAR_26|VAR_25,
    ((void*)0), VAR_47, VAR_52, &VAR_52->ti_intrhand);

 if (VAR_53) {
  FUNC_11(VAR_50, "couldn't set up irq\n");
  goto fail;
 }

fail:
 if (VAR_53)
  FUNC_27(VAR_50);

 return (VAR_53);
}
