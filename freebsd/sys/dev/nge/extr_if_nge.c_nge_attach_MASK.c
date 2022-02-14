
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct nge_softc {scalar_t__ nge_res_type; int nge_res_id; int nge_intrhand; int * nge_irq; int nge_miibus; int nge_flags; int nge_dev; struct ifnet* nge_ifp; int * nge_res; int nge_mtx; int nge_stat_ch; } ;
struct TYPE_3__ {scalar_t__ ifq_drv_maxlen; } ;
struct ifnet {int if_flags; int if_capabilities; int if_capenable; int if_hdrlen; int if_hwassist; TYPE_1__ if_snd; int if_init; int if_start; int if_ioctl; struct nge_softc* if_softc; } ;
struct ether_vlan_header {int dummy; } ;
typedef int eaddr ;
typedef int device_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int FUNC_0 (struct nge_softc*,int ) ;
 int FUNC_1 (struct nge_softc*,int ,int) ;
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
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
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
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_4 (struct nge_softc*) ;
 int FUNC_5 (struct nge_softc*,int ) ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 void* FUNC_6 (int) ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 void* VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 int FUNC_7 (int *,int *,int) ;
 void* FUNC_8 (int ,scalar_t__,int*,int) ;
 int FUNC_9 (int ,int *,int,int *,int ,struct nge_softc*,int *) ;
 int FUNC_10 (int *,int *,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 struct nge_softc* FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,char*,...) ;
 int FUNC_16 (struct ifnet*,int *) ;
 struct ifnet* FUNC_17 (int ) ;
 int FUNC_18 (struct ifnet*,int ,int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ,int *,struct ifnet*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_21 (int ) ;
 scalar_t__ FUNC_22 (struct nge_softc*) ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int FUNC_23 (struct nge_softc*,int ,int ,int) ;
 int FUNC_24 (struct nge_softc*) ;
 int VAR_44 ;
 int FUNC_25 (struct nge_softc*) ;
 int FUNC_26 (int ) ;
 scalar_t__ FUNC_27 (int ,int ,int*) ;
 int FUNC_28 (int ,int ,int) ;
 int FUNC_29 (int ,int ,int ,int) ;

__attribute__((used)) static int
FUNC_30(device_t VAR_45)
{
 uint8_t VAR_46[VAR_3];
 uint16_t VAR_47[VAR_3/2], VAR_48, VAR_49;
 struct nge_softc *VAR_50;
 struct ifnet *VAR_51;
 int VAR_52, VAR_53, VAR_54;

 VAR_52 = 0;
 VAR_50 = FUNC_13(VAR_45);
 VAR_50->nge_dev = VAR_45;

 FUNC_5(VAR_50, FUNC_12(VAR_45));
 FUNC_10(&VAR_50->nge_stat_ch, &VAR_50->nge_mtx, 0);




 FUNC_26(VAR_45);





 VAR_50->nge_res_type = VAR_38;
 VAR_50->nge_res_id = FUNC_6(1);

 VAR_50->nge_res = FUNC_8(VAR_45, VAR_50->nge_res_type,
     &VAR_50->nge_res_id, VAR_34);

 if (VAR_50->nge_res == ((void*)0)) {
  if (VAR_50->nge_res_type == VAR_38) {
   VAR_50->nge_res_type = VAR_36;
   VAR_50->nge_res_id = FUNC_6(0);
  } else {
   VAR_50->nge_res_type = VAR_38;
   VAR_50->nge_res_id = FUNC_6(1);
  }
  VAR_50->nge_res = FUNC_8(VAR_45, VAR_50->nge_res_type,
      &VAR_50->nge_res_id, VAR_34);
  if (VAR_50->nge_res == ((void*)0)) {
   FUNC_15(VAR_45, "couldn't allocate %s resources\n",
       VAR_50->nge_res_type == VAR_38 ? "memory" :
       "I/O");
   FUNC_4(VAR_50);
   return (VAR_2);
  }
 }


 VAR_54 = 0;
 VAR_50->nge_irq = FUNC_8(VAR_45, VAR_37, &VAR_54,
     VAR_35 | VAR_34);

 if (VAR_50->nge_irq == ((void*)0)) {
  FUNC_15(VAR_45, "couldn't map interrupt\n");
  VAR_52 = VAR_2;
  goto fail;
 }


 VAR_49 = FUNC_28(VAR_45, VAR_32, 2);
 VAR_49 |= VAR_31;
 FUNC_29(VAR_45, VAR_32, VAR_49, 2);


 FUNC_24(VAR_50);




 FUNC_23(VAR_50, (caddr_t)VAR_47, VAR_21, 3);
 for (VAR_53 = 0; VAR_53 < VAR_3 / 2; VAR_53++)
  VAR_47[VAR_53] = FUNC_19(VAR_47[VAR_53]);
 VAR_48 = VAR_47[0];
 VAR_47[0] = VAR_47[2];
 VAR_47[2] = VAR_48;
 FUNC_7(VAR_47, VAR_46, sizeof(VAR_46));

 if (FUNC_22(VAR_50) != 0) {
  VAR_52 = VAR_2;
  goto fail;
 }

 FUNC_25(VAR_50);

 VAR_51 = VAR_50->nge_ifp = FUNC_17(VAR_13);
 if (VAR_51 == ((void*)0)) {
  FUNC_15(VAR_45, "can not allocate ifnet structure\n");
  VAR_52 = VAR_1;
  goto fail;
 }
 VAR_51->if_softc = VAR_50;
 FUNC_18(VAR_51, FUNC_11(VAR_45), FUNC_14(VAR_45));
 VAR_51->if_flags = VAR_10 | VAR_12 | VAR_11;
 VAR_51->if_ioctl = VAR_41;
 VAR_51->if_start = VAR_44;
 VAR_51->if_init = VAR_39;
 VAR_51->if_snd.ifq_drv_maxlen = VAR_30 - 1;
 FUNC_2(&VAR_51->if_snd, VAR_51->if_snd.ifq_drv_maxlen);
 FUNC_3(&VAR_51->if_snd);
 VAR_51->if_hwassist = VAR_20;
 VAR_51->if_capabilities = VAR_4;





 if (FUNC_27(VAR_50->nge_dev, VAR_33, &VAR_53) == 0)
  VAR_51->if_capabilities |= VAR_9;
 VAR_51->if_capenable = VAR_51->if_capabilities;

 if ((FUNC_0(VAR_50, VAR_18) & VAR_19) != 0) {
  VAR_50->nge_flags |= VAR_22;
  FUNC_15(VAR_45, "Using TBI\n");

  FUNC_1(VAR_50, VAR_23, FUNC_0(VAR_50, VAR_23)
      | VAR_29
      | VAR_24 | VAR_25
      | VAR_27
      | VAR_26 | VAR_28);
 }




 VAR_52 = FUNC_20(VAR_45, &VAR_50->nge_miibus, VAR_51, VAR_42,
     VAR_43, VAR_0, VAR_17, VAR_16, 0);
 if (VAR_52 != 0) {
  FUNC_15(VAR_45, "attaching PHYs failed\n");
  goto fail;
 }




 FUNC_16(VAR_51, VAR_46);


 VAR_51->if_capabilities |= VAR_8 | VAR_7;
 VAR_51->if_capabilities |= VAR_6;
 VAR_51->if_capenable = VAR_51->if_capabilities;
 VAR_51->if_hdrlen = sizeof(struct ether_vlan_header);




 VAR_52 = FUNC_9(VAR_45, VAR_50->nge_irq, VAR_15 | VAR_14,
     ((void*)0), VAR_40, VAR_50, &VAR_50->nge_intrhand);
 if (VAR_52) {
  FUNC_15(VAR_45, "couldn't set up irq\n");
  goto fail;
 }

fail:
 if (VAR_52 != 0)
  FUNC_21(VAR_45);
 return (VAR_52);
}
