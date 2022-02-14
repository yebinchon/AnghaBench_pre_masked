
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct sge_softc {int sge_res_id; int sge_flags; int sge_intrhand; int * sge_irq; int sge_miibus; struct ifnet* sge_ifp; int sge_rev; int * sge_res; int sge_res_type; int sge_mtx; int sge_stat_ch; int sge_dev; } ;
struct TYPE_3__ {scalar_t__ ifq_drv_maxlen; } ;
struct ifnet {int if_flags; int if_capabilities; int if_hwassist; int if_capenable; int if_hdrlen; TYPE_1__ if_snd; int if_init; int if_start; int if_ioctl; struct sge_softc* if_softc; } ;
struct ether_vlan_header {int dummy; } ;
typedef int device_t ;


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
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_2 (int ) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 void* FUNC_3 (int ,int ,int*,int) ;
 int FUNC_4 (int ,int *,int,int *,int ,struct sge_softc*,int *) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct sge_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (struct ifnet*,int *) ;
 int FUNC_12 (struct ifnet*) ;
 struct ifnet* FUNC_13 (int ) ;
 int FUNC_14 (struct ifnet*,int ,int ) ;
 int FUNC_15 (int ,int *,struct ifnet*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_16 (int *,int ,int ,int ) ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,int,int) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (struct sge_softc*) ;
 int FUNC_23 (struct sge_softc*,int *) ;
 int FUNC_24 (struct sge_softc*,int *) ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int FUNC_25 (struct sge_softc*) ;
 int VAR_36 ;

__attribute__((used)) static int
FUNC_26(device_t VAR_37)
{
 struct sge_softc *VAR_38;
 struct ifnet *VAR_39;
 uint8_t VAR_40[VAR_4];
 int VAR_41 = 0, VAR_42;

 VAR_38 = FUNC_8(VAR_37);
 VAR_38->sge_dev = VAR_37;

 FUNC_16(&VAR_38->sge_mtx, FUNC_7(VAR_37), VAR_21,
     VAR_20);
        FUNC_5(&VAR_38->sge_stat_ch, &VAR_38->sge_mtx, 0);




 FUNC_17(VAR_37);


 VAR_38->sge_res_id = FUNC_2(0);
 VAR_38->sge_res_type = VAR_30;
 VAR_38->sge_res = FUNC_3(VAR_37, VAR_38->sge_res_type,
     &VAR_38->sge_res_id, VAR_22);
 if (VAR_38->sge_res == ((void*)0)) {
  FUNC_10(VAR_37, "couldn't allocate resource\n");
  VAR_41 = VAR_3;
  goto fail;
 }

 VAR_42 = 0;
 VAR_38->sge_irq = FUNC_3(VAR_37, VAR_29, &VAR_42,
     VAR_23 | VAR_22);
 if (VAR_38->sge_irq == ((void*)0)) {
  FUNC_10(VAR_37, "couldn't allocate IRQ resources\n");
  VAR_41 = VAR_3;
  goto fail;
 }
 VAR_38->sge_rev = FUNC_19(VAR_37);
 if (FUNC_18(VAR_37) == VAR_28)
  VAR_38->sge_flags |= VAR_25 | VAR_26;

 FUNC_25(VAR_38);


 if ((FUNC_20(VAR_37, 0x73, 1) & 0x01) != 0)
  FUNC_23(VAR_38, VAR_40);
 else
  FUNC_24(VAR_38, VAR_40);

 if ((VAR_41 = FUNC_22(VAR_38)) != 0)
  goto fail;

 VAR_39 = VAR_38->sge_ifp = FUNC_13(VAR_15);
 if (VAR_39 == ((void*)0)) {
  FUNC_10(VAR_37, "cannot allocate ifnet structure.\n");
  VAR_41 = VAR_2;
  goto fail;
 }
 VAR_39->if_softc = VAR_38;
 FUNC_14(VAR_39, FUNC_6(VAR_37), FUNC_9(VAR_37));
 VAR_39->if_flags = VAR_12 | VAR_14 | VAR_13;
 VAR_39->if_ioctl = VAR_35;
 VAR_39->if_start = VAR_36;
 VAR_39->if_init = VAR_33;
 VAR_39->if_snd.ifq_drv_maxlen = VAR_27 - 1;
 FUNC_0(&VAR_39->if_snd, VAR_39->if_snd.ifq_drv_maxlen);
 FUNC_1(&VAR_39->if_snd);
 VAR_39->if_capabilities = VAR_7 | VAR_5 | VAR_6;
 VAR_39->if_hwassist = VAR_24 | VAR_1;
 VAR_39->if_capenable = VAR_39->if_capabilities;



 VAR_41 = FUNC_15(VAR_37, &VAR_38->sge_miibus, VAR_39, VAR_32,
     VAR_31, VAR_0, VAR_19, VAR_18, 0);
 if (VAR_41 != 0) {
  FUNC_10(VAR_37, "attaching PHYs failed\n");
  goto fail;
 }




 FUNC_11(VAR_39, VAR_40);


 VAR_39->if_capabilities |= VAR_9 | VAR_8 |
     VAR_10 | VAR_11;
 VAR_39->if_capenable = VAR_39->if_capabilities;

 VAR_39->if_hdrlen = sizeof(struct ether_vlan_header);


 VAR_41 = FUNC_4(VAR_37, VAR_38->sge_irq, VAR_17 | VAR_16,
     ((void*)0), VAR_34, VAR_38, &VAR_38->sge_intrhand);
 if (VAR_41) {
  FUNC_10(VAR_37, "couldn't set up irq\n");
  FUNC_12(VAR_39);
  goto fail;
 }

fail:
 if (VAR_41)
  FUNC_21(VAR_37);

 return (VAR_41);
}
