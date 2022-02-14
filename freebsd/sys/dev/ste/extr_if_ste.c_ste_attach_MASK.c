
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct ste_softc {int ste_flags; int ste_res_id; int ste_intrhand; int * ste_irq; int ste_tx_thresh; int ste_miibus; struct ifnet* ste_ifp; int ste_mtx; int ste_callout; int * ste_res; int ste_res_type; int ste_dev; } ;
struct TYPE_3__ {scalar_t__ ifq_drv_maxlen; } ;
struct ifnet {int if_flags; int if_hdrlen; int if_capabilities; int if_capenable; TYPE_1__ if_snd; int if_init; int if_start; int if_ioctl; struct ste_softc* if_softc; } ;
struct ether_vlan_header {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_1__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* FUNC_2 (int) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 void* FUNC_3 (int ,int ,int*,int) ;
 int FUNC_4 (int ,int *,int,int *,int ,struct ste_softc*,int *) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 struct ste_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (struct ifnet*,int *) ;
 int FUNC_12 (struct ifnet*) ;
 struct ifnet* FUNC_13 (int ) ;
 int FUNC_14 (struct ifnet*,int ,int ) ;
 int FUNC_15 (int ,int *,struct ifnet*,int ,int ,int ,int,int ,int ) ;
 int FUNC_16 (int *,int ,int ,int ) ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (int ,int ,int*) ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 (int ,int ,char*,int*) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (struct ste_softc*) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 scalar_t__ FUNC_25 (struct ste_softc*,int *,int ,int) ;
 int FUNC_26 (struct ste_softc*) ;
 int VAR_35 ;
 int FUNC_27 (struct ste_softc*) ;

__attribute__((used)) static int
FUNC_28(device_t VAR_36)
{
 struct ste_softc *VAR_37;
 struct ifnet *VAR_38;
 uint16_t VAR_39[VAR_5 / 2];
 int VAR_40 = 0, VAR_41, VAR_42, VAR_43, VAR_44;

 VAR_37 = FUNC_8(VAR_36);
 VAR_37->ste_dev = VAR_36;






 if (FUNC_21(VAR_36) == VAR_2 &&
     FUNC_19(VAR_36) == VAR_1 &&
     FUNC_20(VAR_36) == 0x12 )
  VAR_37->ste_flags |= VAR_23;

 FUNC_16(&VAR_37->ste_mtx, FUNC_7(VAR_36), VAR_18,
     VAR_17);



 FUNC_17(VAR_36);






 VAR_43 = 0;
 if (FUNC_19(VAR_36) == VAR_26)
  VAR_43 = 1;
 else
  FUNC_22(FUNC_6(VAR_37->ste_dev),
      FUNC_9(VAR_37->ste_dev), "prefer_iomap",
      &VAR_43);
 if (VAR_43 == 0) {
  VAR_37->ste_res_id = FUNC_2(1);
  VAR_37->ste_res_type = VAR_29;
  VAR_37->ste_res = FUNC_3(VAR_36, VAR_37->ste_res_type,
      &VAR_37->ste_res_id, VAR_20);
 }
 if (VAR_43 || VAR_37->ste_res == ((void*)0)) {
  VAR_37->ste_res_id = FUNC_2(0);
  VAR_37->ste_res_type = VAR_27;
  VAR_37->ste_res = FUNC_3(VAR_36, VAR_37->ste_res_type,
      &VAR_37->ste_res_id, VAR_20);
 }
 if (VAR_37->ste_res == ((void*)0)) {
  FUNC_10(VAR_36, "couldn't map ports/memory\n");
  VAR_40 = VAR_4;
  goto fail;
 }


 VAR_44 = 0;
 VAR_37->ste_irq = FUNC_3(VAR_36, VAR_28, &VAR_44,
     VAR_21 | VAR_20);

 if (VAR_37->ste_irq == ((void*)0)) {
  FUNC_10(VAR_36, "couldn't map interrupt\n");
  VAR_40 = VAR_4;
  goto fail;
 }

 FUNC_5(&VAR_37->ste_callout, &VAR_37->ste_mtx, 0);


 FUNC_26(VAR_37);




 if (FUNC_25(VAR_37, VAR_39, VAR_22, VAR_5 / 2)) {
  FUNC_10(VAR_36, "failed to read station address\n");
  VAR_40 = VAR_4;
  goto fail;
 }
 FUNC_27(VAR_37);

 if ((VAR_40 = FUNC_24(VAR_37)) != 0)
  goto fail;

 VAR_38 = VAR_37->ste_ifp = FUNC_13(VAR_12);
 if (VAR_38 == ((void*)0)) {
  FUNC_10(VAR_36, "can not if_alloc()\n");
  VAR_40 = VAR_3;
  goto fail;
 }


 VAR_41 = VAR_16;
 if ((VAR_37->ste_flags & VAR_23) != 0)
  VAR_41 = 0;
 VAR_40 = FUNC_15(VAR_36, &VAR_37->ste_miibus, VAR_38, VAR_31,
  VAR_30, VAR_0, VAR_41, VAR_15, 0);
 if (VAR_40 != 0) {
  FUNC_10(VAR_36, "attaching PHYs failed\n");
  goto fail;
 }

 VAR_38->if_softc = VAR_37;
 FUNC_14(VAR_38, FUNC_6(VAR_36), FUNC_9(VAR_36));
 VAR_38->if_flags = VAR_9 | VAR_11 | VAR_10;
 VAR_38->if_ioctl = VAR_34;
 VAR_38->if_start = VAR_35;
 VAR_38->if_init = VAR_32;
 FUNC_0(&VAR_38->if_snd, VAR_25 - 1);
 VAR_38->if_snd.ifq_drv_maxlen = VAR_25 - 1;
 FUNC_1(&VAR_38->if_snd);

 VAR_37->ste_tx_thresh = VAR_24;




 FUNC_11(VAR_38, (uint8_t *)VAR_39);




 VAR_38->if_hdrlen = sizeof(struct ether_vlan_header);
 VAR_38->if_capabilities |= VAR_7;
 if (FUNC_18(VAR_36, VAR_19, &VAR_42) == 0)
  VAR_38->if_capabilities |= VAR_8;
 VAR_38->if_capenable = VAR_38->if_capabilities;





 VAR_40 = FUNC_4(VAR_36, VAR_37->ste_irq, VAR_14 | VAR_13,
     ((void*)0), VAR_33, VAR_37, &VAR_37->ste_intrhand);

 if (VAR_40) {
  FUNC_10(VAR_36, "couldn't set up irq\n");
  FUNC_12(VAR_38);
  goto fail;
 }

fail:
 if (VAR_40)
  FUNC_23(VAR_36);

 return (VAR_40);
}
