
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
typedef int tn ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct rl_type {int rl_did; scalar_t__ rl_basetype; int * rl_name; } ;
struct rl_softc {int rl_twister_enable; int rl_res_id; scalar_t__ rl_type; int rl_dev; int * rl_intrhand; int ** rl_irq; int rl_miibus; struct ifnet* rl_ifp; int rl_eecmd_read; int rl_cfg5; int rl_cfg4; int rl_cfg3; scalar_t__ rl_cfg2; int rl_cfg1; int rl_cfg0; int * rl_res; int rl_bhandle; int rl_btag; int rl_res_type; int rl_mtx; int rl_stat_callout; } ;
struct TYPE_3__ {int ifq_drv_maxlen; } ;
struct ifnet {int if_flags; int if_capabilities; int if_capenable; TYPE_1__ if_snd; int if_init; int if_start; int if_ioctl; int if_mtu; struct rl_softc* if_softc; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct rl_softc*,scalar_t__) ;
 int FUNC_1 (struct rl_softc*,int ) ;
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
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 void* FUNC_4 (int) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;






 scalar_t__ VAR_35 ;
 int FUNC_5 (struct rl_softc*) ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_6 (struct rl_softc*) ;
 int FUNC_7 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int*,int ,char*) ;
 struct sysctl_oid_list* FUNC_8 (int ) ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_9 (char*,int*) ;
 void* FUNC_10 (int ,int ,int*,int) ;
 int FUNC_11 (int ,int *,int,int *,int ,struct rl_softc*,int *) ;
 int FUNC_12 (int *,int *,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 struct rl_softc* FUNC_15 (int ) ;
 struct sysctl_ctx_list* FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,char*,...) ;
 int FUNC_20 (struct ifnet*,int*) ;
 int FUNC_21 (struct ifnet*) ;
 struct ifnet* FUNC_22 (int ) ;
 int FUNC_23 (struct ifnet*,int ,int) ;
 int VAR_42 ;
 int FUNC_24 (int ,int *,struct ifnet*,int ,int ,int ,int,int ,int ) ;
 int FUNC_25 (int *,int ,int ,int ) ;
 int FUNC_26 (int ) ;
 scalar_t__ FUNC_27 (int ,int ,int*) ;
 int FUNC_28 (struct rl_softc*) ;
 int FUNC_29 (int ) ;
 struct rl_type* VAR_43 ;
 int FUNC_30 (struct rl_softc*) ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int FUNC_31 (struct rl_softc*,int*,int ,int,int ) ;
 int FUNC_32 (struct rl_softc*) ;
 int VAR_49 ;
 int FUNC_33 (int *) ;
 int FUNC_34 (int *) ;
 int FUNC_35 (int *) ;
 int FUNC_36 (int *) ;
 int FUNC_37 (char*,int,char*,int) ;

__attribute__((used)) static int
FUNC_38(device_t VAR_50)
{
 uint8_t VAR_51[VAR_5];
 uint16_t VAR_52[3];
 struct ifnet *VAR_53;
 struct rl_softc *VAR_54;
 const struct rl_type *VAR_55;
 struct sysctl_ctx_list *VAR_56;
 struct sysctl_oid_list *VAR_57;
 int VAR_58 = 0, VAR_59, VAR_60, VAR_61, VAR_62, VAR_63;
 int VAR_64, VAR_65;
 uint16_t VAR_66 = 0;
 char VAR_67[32];

 VAR_54 = FUNC_15(VAR_50);
 VAR_65 = FUNC_18(VAR_50);
 VAR_54->rl_dev = VAR_50;

 VAR_54->rl_twister_enable = 0;
 FUNC_37(VAR_67, sizeof(VAR_67), "dev.rl.%d.twister_enable", VAR_65);
 FUNC_9(VAR_67, &VAR_54->rl_twister_enable);
 VAR_56 = FUNC_16(VAR_54->rl_dev);
 VAR_57 = FUNC_8(FUNC_17(VAR_54->rl_dev));
 FUNC_7(VAR_56, VAR_57, VAR_21, "twister_enable", VAR_1,
    &VAR_54->rl_twister_enable, 0, "");

 FUNC_25(&VAR_54->rl_mtx, FUNC_14(VAR_50), VAR_20,
     VAR_19);
 FUNC_12(&VAR_54->rl_stat_callout, &VAR_54->rl_mtx, 0);

 FUNC_26(VAR_50);
 VAR_64 = 1;
 FUNC_37(VAR_67, sizeof(VAR_67), "dev.rl.%d.prefer_iomap", VAR_65);
 FUNC_9(VAR_67, &VAR_64);
 if (VAR_64) {
  VAR_54->rl_res_id = FUNC_4(0);
  VAR_54->rl_res_type = VAR_39;
  VAR_54->rl_res = FUNC_10(VAR_50, VAR_54->rl_res_type,
      &VAR_54->rl_res_id, VAR_23);
 }
 if (VAR_64 == 0 || VAR_54->rl_res == ((void*)0)) {
  VAR_54->rl_res_id = FUNC_4(1);
  VAR_54->rl_res_type = VAR_41;
  VAR_54->rl_res = FUNC_10(VAR_50, VAR_54->rl_res_type,
      &VAR_54->rl_res_id, VAR_23);
 }
 if (VAR_54->rl_res == ((void*)0)) {
  FUNC_19(VAR_50, "couldn't map ports/memory\n");
  VAR_58 = VAR_3;
  goto fail;
 }
 VAR_54->rl_btag = FUNC_34(VAR_54->rl_res);
 VAR_54->rl_bhandle = FUNC_33(VAR_54->rl_res);


 VAR_63 = 0;
 VAR_54->rl_irq[0] = FUNC_10(VAR_50, VAR_40, &VAR_63,
     VAR_24 | VAR_23);

 if (VAR_54->rl_irq[0] == ((void*)0)) {
  FUNC_19(VAR_50, "couldn't map interrupt\n");
  VAR_58 = VAR_3;
  goto fail;
 }

 VAR_54->rl_cfg0 = VAR_26;
 VAR_54->rl_cfg1 = VAR_27;
 VAR_54->rl_cfg2 = 0;
 VAR_54->rl_cfg3 = VAR_28;
 VAR_54->rl_cfg4 = VAR_29;
 VAR_54->rl_cfg5 = VAR_30;





 FUNC_5(VAR_54);
 FUNC_32(VAR_54);
 FUNC_6(VAR_54);

 VAR_54->rl_eecmd_read = VAR_31;
 FUNC_31(VAR_54, (uint8_t *)&VAR_66, 0, 1, 0);
 if (VAR_66 != 0x8129)
  VAR_54->rl_eecmd_read = VAR_32;




 FUNC_31(VAR_54, (uint8_t *)VAR_52, VAR_33, 3, 0);
 for (VAR_60 = 0; VAR_60 < 3; VAR_60++) {
  VAR_51[(VAR_60 * 2) + 0] = VAR_52[VAR_60] & 0xff;
  VAR_51[(VAR_60 * 2) + 1] = VAR_52[VAR_60] >> 8;
 }





 FUNC_31(VAR_54, (uint8_t *)&VAR_66, VAR_34, 1, 0);

 VAR_55 = VAR_43;
 VAR_54->rl_type = 0;
 while(VAR_55->rl_name != ((void*)0)) {
  if (VAR_66 == VAR_55->rl_did) {
   VAR_54->rl_type = VAR_55->rl_basetype;
   break;
  }
  VAR_55++;
 }

 if (VAR_54->rl_type == 0) {
  FUNC_19(VAR_50, "unknown device ID: %x assuming 8139\n",
      VAR_66);
  VAR_54->rl_type = VAR_25;




  for (VAR_60 = 0; VAR_60 < VAR_5; VAR_60++)
   VAR_51[VAR_60] = FUNC_0(VAR_54, VAR_35 + VAR_60);
 }

 if ((VAR_58 = FUNC_30(VAR_54)) != 0)
  goto fail;

 VAR_53 = VAR_54->rl_ifp = FUNC_22(VAR_14);
 if (VAR_53 == ((void*)0)) {
  FUNC_19(VAR_50, "can not if_alloc()\n");
  VAR_58 = VAR_2;
  goto fail;
 }




 VAR_61 = VAR_18;
 if (VAR_54->rl_type == VAR_25)
  VAR_61 = 0;
 VAR_58 = FUNC_24(VAR_50, &VAR_54->rl_miibus, VAR_53, VAR_45,
     VAR_44, VAR_0, VAR_61, VAR_17, 0);
 if (VAR_58 != 0) {
  FUNC_19(VAR_50, "attaching PHYs failed\n");
  goto fail;
 }

 VAR_53->if_softc = VAR_54;
 FUNC_23(VAR_53, FUNC_13(VAR_50), FUNC_18(VAR_50));
 VAR_53->if_mtu = VAR_4;
 VAR_53->if_flags = VAR_11 | VAR_13 | VAR_12;
 VAR_53->if_ioctl = VAR_48;
 VAR_53->if_start = VAR_49;
 VAR_53->if_init = VAR_46;
 VAR_53->if_capabilities = VAR_7;

 if (VAR_54->rl_type == VAR_25 &&
     FUNC_27(VAR_54->rl_dev, VAR_22, &VAR_62) == 0) {
  VAR_59 = FUNC_1(VAR_54, VAR_37) & VAR_38;
  switch (VAR_59) {
  case 130:
  case 131:
  case 129:
  case 128:
  case 132:
  case 133:
   VAR_53->if_capabilities |= VAR_8;

   FUNC_28(VAR_54);
   break;
  default:
   break;
  }
 }
 VAR_53->if_capenable = VAR_53->if_capabilities;
 VAR_53->if_capenable &= ~(VAR_10 | VAR_9);



 FUNC_2(&VAR_53->if_snd, VAR_42);
 VAR_53->if_snd.ifq_drv_maxlen = VAR_42;
 FUNC_3(&VAR_53->if_snd);




 FUNC_20(VAR_53, VAR_51);


 VAR_58 = FUNC_11(VAR_50, VAR_54->rl_irq[0], VAR_16 | VAR_15,
     ((void*)0), VAR_47, VAR_54, &VAR_54->rl_intrhand[0]);
 if (VAR_58) {
  FUNC_19(VAR_54->rl_dev, "couldn't set up irq\n");
  FUNC_21(VAR_53);
 }

fail:
 if (VAR_58)
  FUNC_29(VAR_50);

 return (VAR_58);
}
