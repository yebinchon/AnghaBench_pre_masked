
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_char ;
struct sis_softc {scalar_t__ sis_type; scalar_t__ sis_rev; int sis_srr; int sis_intrhand; int * sis_res; int sis_miibus; int sis_dev; struct ifnet* sis_ifp; int sis_mtx; int sis_stat_ch; } ;
struct TYPE_3__ {scalar_t__ ifq_drv_maxlen; } ;
struct ifnet {int if_flags; int if_hdrlen; int if_capabilities; int if_capenable; TYPE_1__ if_snd; int if_init; int if_start; int if_ioctl; struct sis_softc* if_softc; } ;
struct ether_vlan_header {int dummy; } ;
typedef int device_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int FUNC_0 (struct sis_softc*,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
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
 int FUNC_4 (int ) ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 int VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ VAR_45 ;

 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int ,int ,int,int *,int ,struct sis_softc*,int *) ;
 int FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 struct sis_softc* FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 (struct ifnet*,int*) ;
 int FUNC_14 (struct ifnet*) ;
 struct ifnet* FUNC_15 (int ) ;
 int FUNC_16 (struct ifnet*,int ,int ) ;
 int FUNC_17 (int ,int *,struct ifnet*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_18 (int *,int ,int ,int ) ;
 int FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int ,int ,int*) ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (int ,int ,int) ;
 int FUNC_24 (struct sis_softc*) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (struct sis_softc*) ;
 int FUNC_27 (struct sis_softc*) ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int FUNC_28 (struct sis_softc*,int ,int ,int,int) ;
 int FUNC_29 (struct sis_softc*,int ,int ,int,int ) ;
 int FUNC_30 (struct sis_softc*,int ,int ) ;
 int VAR_51 ;
 int FUNC_31 (struct sis_softc*) ;
 int FUNC_32 (int) ;
 int VAR_52 ;

__attribute__((used)) static int
FUNC_33(device_t VAR_53)
{
 u_char VAR_54[VAR_2];
 struct sis_softc *VAR_55;
 struct ifnet *VAR_56;
 int VAR_57 = 0, VAR_58, VAR_59 = 0;

 VAR_59 = 0;
 VAR_55 = FUNC_10(VAR_53);

 VAR_55->sis_dev = VAR_53;

 FUNC_18(&VAR_55->sis_mtx, FUNC_9(VAR_53), VAR_16,
     VAR_15);
 FUNC_7(&VAR_55->sis_stat_ch, &VAR_55->sis_mtx, 0);

 if (FUNC_21(VAR_53) == VAR_27)
  VAR_55->sis_type = VAR_45;
 if (FUNC_21(VAR_53) == VAR_26)
  VAR_55->sis_type = VAR_43;
 if (FUNC_22(VAR_53) == 129)
  VAR_55->sis_type = VAR_44;

 VAR_55->sis_rev = FUNC_23(VAR_53, VAR_22, 1);



 FUNC_19(VAR_53);

 VAR_57 = FUNC_5(VAR_53, VAR_51, VAR_55->sis_res);
 if (VAR_57) {
  FUNC_12(VAR_53, "couldn't allocate resources\n");
  goto fail;
 }


 FUNC_31(VAR_55);

 if (VAR_55->sis_type == VAR_45 &&
     (VAR_55->sis_rev == VAR_38 ||
     VAR_55->sis_rev == VAR_39)) {
  FUNC_4(VAR_25);
  FUNC_4(VAR_24);
 }




 switch (FUNC_22(VAR_53)) {
 case 129:
  VAR_55->sis_srr = FUNC_0(VAR_55, VAR_18);


  if (VAR_55->sis_srr == VAR_19)
   FUNC_12(VAR_53, "Silicon Revision: DP83815C\n");
  else if (VAR_55->sis_srr == VAR_20)
   FUNC_12(VAR_53, "Silicon Revision: DP83815D\n");
  else if (VAR_55->sis_srr == VAR_21)
   FUNC_12(VAR_53, "Silicon Revision: DP83816A\n");
  else
   FUNC_12(VAR_53, "Silicon Revision %x\n", VAR_55->sis_srr);
  {
   uint16_t VAR_60[4];

   FUNC_29(VAR_55, (caddr_t)&VAR_60,
       VAR_17, 4, 0);


   VAR_60[3] = VAR_60[3] >> 1;
   VAR_60[3] |= VAR_60[2] << 15;
   VAR_60[2] = VAR_60[2] >> 1;
   VAR_60[2] |= VAR_60[1] << 15;
   VAR_60[1] = VAR_60[1] >> 1;
   VAR_60[1] |= VAR_60[0] << 15;


   VAR_60[3] = FUNC_32(VAR_60[3]);
   VAR_60[2] = FUNC_32(VAR_60[2]);
   VAR_60[1] = FUNC_32(VAR_60[1]);

   VAR_54[0] = (VAR_60[1] >> 0) & 0xFF;
   VAR_54[1] = (VAR_60[1] >> 8) & 0xFF;
   VAR_54[2] = (VAR_60[2] >> 0) & 0xFF;
   VAR_54[3] = (VAR_60[2] >> 8) & 0xFF;
   VAR_54[4] = (VAR_60[3] >> 0) & 0xFF;
   VAR_54[5] = (VAR_60[3] >> 8) & 0xFF;
  }
  break;
 case 128:
 default:
  if (VAR_55->sis_rev == VAR_37 ||
      VAR_55->sis_rev == VAR_34 ||
      VAR_55->sis_rev == VAR_35)
   FUNC_28(VAR_55, VAR_53, (caddr_t)&VAR_54, 0x9, 6);

  else if (VAR_55->sis_rev == VAR_38 ||
    VAR_55->sis_rev == VAR_36)
   FUNC_30(VAR_55, VAR_53, (caddr_t)&VAR_54);
  else if (VAR_55->sis_rev == VAR_40) {




   FUNC_4(VAR_30);
   for (VAR_59 = 0; VAR_59 < VAR_41;
       VAR_59++) {

    FUNC_27(VAR_55);
    if (FUNC_0(VAR_55, VAR_31) & VAR_29) {
     FUNC_29(VAR_55, (caddr_t)&VAR_54,
         VAR_33, 3, 0);
     break;
    }
    FUNC_1(1);
   }




   FUNC_4(VAR_32);

   FUNC_4(VAR_28);
  } else

   FUNC_29(VAR_55, (caddr_t)&VAR_54,
       VAR_33, 3, 0);
  break;
 }

 FUNC_24(VAR_55);


 if ((VAR_57 = FUNC_26(VAR_55)) != 0)
  goto fail;

 VAR_56 = VAR_55->sis_ifp = FUNC_15(VAR_10);
 if (VAR_56 == ((void*)0)) {
  FUNC_12(VAR_53, "can not if_alloc()\n");
  VAR_57 = VAR_1;
  goto fail;
 }
 VAR_56->if_softc = VAR_55;
 FUNC_16(VAR_56, FUNC_8(VAR_53), FUNC_11(VAR_53));
 VAR_56->if_flags = VAR_7 | VAR_9 | VAR_8;
 VAR_56->if_ioctl = VAR_50;
 VAR_56->if_start = VAR_52;
 VAR_56->if_init = VAR_48;
 FUNC_2(&VAR_56->if_snd, VAR_42 - 1);
 VAR_56->if_snd.ifq_drv_maxlen = VAR_42 - 1;
 FUNC_3(&VAR_56->if_snd);

 if (FUNC_20(VAR_55->sis_dev, VAR_23, &VAR_58) == 0) {
  if (VAR_55->sis_type == VAR_44)
   VAR_56->if_capabilities |= VAR_5;
  else
   VAR_56->if_capabilities |= VAR_6;
  VAR_56->if_capenable = VAR_56->if_capabilities;
 }




 VAR_57 = FUNC_17(VAR_53, &VAR_55->sis_miibus, VAR_56, VAR_47,
     VAR_46, VAR_0, VAR_14, VAR_13, 0);
 if (VAR_57 != 0) {
  FUNC_12(VAR_53, "attaching PHYs failed\n");
  goto fail;
 }




 FUNC_13(VAR_56, VAR_54);




 VAR_56->if_hdrlen = sizeof(struct ether_vlan_header);
 VAR_56->if_capabilities |= VAR_4;
 VAR_56->if_capenable = VAR_56->if_capabilities;





 VAR_57 = FUNC_6(VAR_53, VAR_55->sis_res[1], VAR_12 | VAR_11,
     ((void*)0), VAR_49, VAR_55, &VAR_55->sis_intrhand);

 if (VAR_57) {
  FUNC_12(VAR_53, "couldn't set up irq\n");
  FUNC_14(VAR_56);
  goto fail;
 }

fail:
 if (VAR_57)
  FUNC_25(VAR_53);

 return (VAR_57);
}
