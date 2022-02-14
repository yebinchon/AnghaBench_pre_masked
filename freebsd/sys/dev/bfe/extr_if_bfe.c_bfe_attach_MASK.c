
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ifq_drv_maxlen; } ;
struct ifnet {int if_flags; int if_hdrlen; int if_capenable; int if_capabilities; TYPE_1__ if_snd; int if_init; int if_start; int if_ioctl; struct bfe_softc* if_softc; } ;
struct ether_vlan_header {int dummy; } ;
struct bfe_softc {int bfe_intrhand; int * bfe_irq; int bfe_enaddr; int bfe_phyaddr; int bfe_miibus; struct ifnet* bfe_ifp; int * bfe_res; int bfe_dev; int bfe_mtx; int bfe_stat_co; } ;
typedef int device_t ;


 int FUNC_0 (struct bfe_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct bfe_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_4 (int ) ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_5 (int ,int ,int ,char*,int,struct bfe_softc*,int ,int ,char*,char*) ;
 int FUNC_6 (int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_7 (struct bfe_softc*) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct bfe_softc*) ;
 int FUNC_10 (struct bfe_softc*) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 void* FUNC_11 (int ,int ,int*,int) ;
 int FUNC_12 (int ,int *,int,int *,int ,struct bfe_softc*,int *) ;
 int FUNC_13 (int *,int *,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 struct bfe_softc* FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,char*) ;
 int FUNC_21 (struct ifnet*,int ) ;
 struct ifnet* FUNC_22 (int ) ;
 int FUNC_23 (struct ifnet*,int ,int ) ;
 int FUNC_24 (int ,int *,struct ifnet*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_25 (int *,int ,int ,int ) ;
 int FUNC_26 (int ) ;
 int VAR_27 ;

__attribute__((used)) static int
FUNC_27(device_t VAR_28)
{
 struct ifnet *VAR_29 = ((void*)0);
 struct bfe_softc *VAR_30;
 int VAR_31 = 0, VAR_32;

 VAR_30 = FUNC_16(VAR_28);
 FUNC_25(&VAR_30->bfe_mtx, FUNC_15(VAR_28), VAR_15,
   VAR_14);
 FUNC_13(&VAR_30->bfe_stat_co, &VAR_30->bfe_mtx, 0);

 VAR_30->bfe_dev = VAR_28;




 FUNC_26(VAR_28);

 VAR_32 = FUNC_4(0);
 VAR_30->bfe_res = FUNC_11(VAR_28, VAR_20, &VAR_32,
   VAR_17);
 if (VAR_30->bfe_res == ((void*)0)) {
  FUNC_20(VAR_28, "couldn't map memory\n");
  VAR_31 = VAR_5;
  goto fail;
 }


 VAR_32 = 0;

 VAR_30->bfe_irq = FUNC_11(VAR_28, VAR_19, &VAR_32,
   VAR_18 | VAR_17);
 if (VAR_30->bfe_irq == ((void*)0)) {
  FUNC_20(VAR_28, "couldn't map interrupt\n");
  VAR_31 = VAR_5;
  goto fail;
 }

 if (FUNC_9(VAR_30) != 0) {
  FUNC_20(VAR_28, "failed to allocate DMA resources\n");
  VAR_31 = VAR_5;
  goto fail;
 }

 FUNC_5(FUNC_17(VAR_28),
     FUNC_6(FUNC_18(VAR_28)), VAR_16,
     "stats", VAR_3 | VAR_2, VAR_30, 0, VAR_27,
     "I", "Statistics");


 VAR_29 = VAR_30->bfe_ifp = FUNC_22(VAR_10);
 if (VAR_29 == ((void*)0)) {
  FUNC_20(VAR_28, "failed to if_alloc()\n");
  VAR_31 = VAR_4;
  goto fail;
 }
 VAR_29->if_softc = VAR_30;
 FUNC_23(VAR_29, FUNC_14(VAR_28), FUNC_19(VAR_28));
 VAR_29->if_flags = VAR_7 | VAR_9 | VAR_8;
 VAR_29->if_ioctl = VAR_25;
 VAR_29->if_start = VAR_26;
 VAR_29->if_init = VAR_23;
 FUNC_2(&VAR_29->if_snd, VAR_0);
 VAR_29->if_snd.ifq_drv_maxlen = VAR_0;
 FUNC_3(&VAR_29->if_snd);

 FUNC_10(VAR_30);


 FUNC_0(VAR_30);
 FUNC_7(VAR_30);
 FUNC_1(VAR_30);

 VAR_31 = FUNC_24(VAR_28, &VAR_30->bfe_miibus, VAR_29, VAR_22,
     VAR_21, VAR_1, VAR_30->bfe_phyaddr, VAR_13,
     0);
 if (VAR_31 != 0) {
  FUNC_20(VAR_28, "attaching PHYs failed\n");
  goto fail;
 }

 FUNC_21(VAR_29, VAR_30->bfe_enaddr);




 VAR_29->if_hdrlen = sizeof(struct ether_vlan_header);
 VAR_29->if_capabilities |= VAR_6;
 VAR_29->if_capenable |= VAR_6;




 VAR_31 = FUNC_12(VAR_28, VAR_30->bfe_irq, VAR_12 | VAR_11,
   ((void*)0), VAR_24, VAR_30, &VAR_30->bfe_intrhand);

 if (VAR_31) {
  FUNC_20(VAR_28, "couldn't set up irq\n");
  goto fail;
 }
fail:
 if (VAR_31 != 0)
  FUNC_8(VAR_28);
 return (VAR_31);
}
