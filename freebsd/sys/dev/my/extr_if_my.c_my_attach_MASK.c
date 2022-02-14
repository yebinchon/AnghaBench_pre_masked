
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u_int16_t ;
typedef int u_char ;
struct my_type {int my_vid; int my_name; } ;
struct TYPE_7__ {int ifm_media; } ;
struct my_softc {int my_phy_addr; int my_mtx; int * my_res; int * my_irq; int * my_ldata_ptr; int my_intrhand; TYPE_2__ ifmedia; struct my_type* my_pinfo; TYPE_1__* my_info; struct ifnet* my_ifp; struct my_list_data* my_ldata; int my_bhandle; int my_btag; int my_watchdog; int my_autoneg_timer; int my_dev; } ;
struct my_list_data {int dummy; } ;
struct TYPE_8__ {int ifq_drv_maxlen; } ;
struct ifnet {int if_flags; int if_baudrate; TYPE_4__ if_snd; int if_init; int if_start; int if_ioctl; struct my_softc* if_softc; } ;
typedef int device_t ;
typedef int * caddr_t ;
struct TYPE_6__ {scalar_t__ my_did; } ;


 int FUNC_0 (struct my_softc*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (TYPE_4__*,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (struct my_softc*) ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_4 (struct my_softc*) ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 size_t VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 scalar_t__ VAR_33 ;
 void* FUNC_5 (int ,int ,int*,int) ;
 int FUNC_6 (int ,int ,int,int *) ;
 int FUNC_7 (int ,int *,int,int *,int ,struct my_softc*,int *) ;
 int FUNC_8 (struct my_list_data*,int) ;
 int FUNC_9 (int *,int *,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 struct my_softc* FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,char*,...) ;
 int FUNC_15 (struct ifnet*,int *) ;
 int FUNC_16 (struct ifnet*) ;
 int FUNC_17 (int *,int ) ;
 struct ifnet* FUNC_18 (int ) ;
 int FUNC_19 (struct ifnet*) ;
 int FUNC_20 (struct ifnet*,int ,int ) ;
 int FUNC_21 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_22 (TYPE_2__*,int) ;
 int VAR_34 ;
 int * FUNC_23 (int,int ,int ) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *,int ,int ,int ) ;
 int FUNC_26 (struct my_softc*,int ,int) ;
 int FUNC_27 (struct my_softc*) ;
 int VAR_35 ;
 int VAR_36 ;
 TYPE_1__* VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_28 (struct my_softc*,int ) ;
 struct my_type* VAR_41 ;
 int FUNC_29 (struct my_softc*) ;
 int VAR_42 ;
 int FUNC_30 (struct my_softc*) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (int ,int ,int) ;
 int FUNC_33 (char*,int,int) ;
 int FUNC_34 (int *) ;
 int FUNC_35 (int *) ;

__attribute__((used)) static int
FUNC_36(device_t VAR_43)
{
 int VAR_44;
 u_char VAR_45[VAR_2];
 u_int32_t VAR_46;
 struct my_softc *VAR_47;
 struct ifnet *VAR_48;
 int VAR_49 = VAR_7 | VAR_6 | VAR_8;
 unsigned int VAR_50;
 caddr_t VAR_51;
 struct my_type *VAR_52;
 u_int16_t VAR_53, VAR_54, VAR_55 = 0;
 int VAR_56, VAR_57 = 0;

 VAR_47 = FUNC_12(VAR_43);
 VAR_47->my_dev = VAR_43;
 FUNC_25(&VAR_47->my_mtx, FUNC_11(VAR_43), VAR_15,
     VAR_14);
 FUNC_9(&VAR_47->my_autoneg_timer, &VAR_47->my_mtx, 0);
 FUNC_9(&VAR_47->my_watchdog, &VAR_47->my_mtx, 0);




 FUNC_31(VAR_43);

 if (VAR_37->my_did == VAR_12) {
  VAR_46 = FUNC_32(VAR_43, VAR_18, 4);
  if (VAR_46 & 0x300)
   VAR_23 = 0;
 }

 VAR_56 = VAR_22;
 VAR_47->my_res = FUNC_5(VAR_43, VAR_21, &VAR_56, VAR_30);

 if (VAR_47->my_res == ((void*)0)) {
  FUNC_14(VAR_43, "couldn't map ports/memory\n");
  VAR_57 = VAR_1;
  goto destroy_mutex;
 }
 VAR_47->my_btag = FUNC_35(VAR_47->my_res);
 VAR_47->my_bhandle = FUNC_34(VAR_47->my_res);

 VAR_56 = 0;
 VAR_47->my_irq = FUNC_5(VAR_43, VAR_32, &VAR_56,
         VAR_31 | VAR_30);

 if (VAR_47->my_irq == ((void*)0)) {
  FUNC_14(VAR_43, "couldn't map interrupt\n");
  VAR_57 = VAR_1;
  goto release_io;
 }

 VAR_47->my_info = VAR_37;


 FUNC_3(VAR_47);
 FUNC_29(VAR_47);
 FUNC_4(VAR_47);




 for (VAR_44 = 0; VAR_44 < VAR_2; ++VAR_44)
  VAR_45[VAR_44] = FUNC_0(VAR_47, VAR_17 + VAR_44);

 VAR_47->my_ldata_ptr = FUNC_23(sizeof(struct my_list_data) + 8,
      VAR_24, VAR_25);
 if (VAR_47->my_ldata_ptr == ((void*)0)) {
  FUNC_14(VAR_43, "no memory for list buffers!\n");
  VAR_57 = VAR_1;
  goto release_irq;
 }
 VAR_47->my_ldata = (struct my_list_data *) VAR_47->my_ldata_ptr;
 VAR_50 = (uintptr_t)VAR_47->my_ldata_ptr & 0xF;
 VAR_51 = VAR_47->my_ldata_ptr;
 for (VAR_44 = 0; VAR_44 < 8; VAR_44++) {
  if (VAR_50 % 8) {
   VAR_50++;
   VAR_51++;
  } else
   break;
 }
 VAR_47->my_ldata = (struct my_list_data *) VAR_51;
 FUNC_8(VAR_47->my_ldata, sizeof(struct my_list_data));

 VAR_48 = VAR_47->my_ifp = FUNC_18(VAR_9);
 if (VAR_48 == ((void*)0)) {
  FUNC_14(VAR_43, "can not if_alloc()\n");
  VAR_57 = VAR_0;
  goto free_ldata;
 }
 VAR_48->if_softc = VAR_47;
 FUNC_20(VAR_48, FUNC_10(VAR_43), FUNC_13(VAR_43));
 VAR_48->if_flags = VAR_3 | VAR_5 | VAR_4;
 VAR_48->if_ioctl = VAR_40;
 VAR_48->if_start = VAR_42;
 VAR_48->if_init = VAR_38;
 VAR_48->if_baudrate = 10000000;
 FUNC_1(&VAR_48->if_snd, VAR_34);
 VAR_48->if_snd.ifq_drv_maxlen = VAR_34;
 FUNC_2(&VAR_48->if_snd);

 if (VAR_47->my_info->my_did == VAR_13)
  VAR_47->my_pinfo = VAR_41;
 else {
  if (VAR_33)
   FUNC_14(VAR_43, "probing for a PHY\n");
  FUNC_3(VAR_47);
  for (VAR_44 = VAR_20; VAR_44 < VAR_19 + 1; VAR_44++) {
   if (VAR_33)
    FUNC_14(VAR_43, "checking address: %d\n", VAR_44);
   VAR_47->my_phy_addr = VAR_44;
   VAR_55 = FUNC_28(VAR_47, VAR_26);
   if ((VAR_55 != 0) && (VAR_55 != 0xffff))
    break;
   else
    VAR_55 = 0;
  }
  if (VAR_55) {
   VAR_53 = FUNC_28(VAR_47, VAR_29);
   VAR_54 = FUNC_28(VAR_47, VAR_27);
   if (VAR_33) {
    FUNC_14(VAR_43, "found PHY at address %d, ",
        VAR_47->my_phy_addr);
    FUNC_33("vendor id: %x device id: %x\n",
        VAR_53, VAR_54);
   }
   VAR_52 = VAR_41;
   while (VAR_52->my_vid) {
    if (VAR_53 == VAR_52->my_vid) {
     VAR_47->my_pinfo = VAR_52;
     break;
    }
    VAR_52++;
   }
   if (VAR_47->my_pinfo == ((void*)0))
    VAR_47->my_pinfo = &VAR_41[VAR_28];
   if (VAR_33)
    FUNC_14(VAR_43, "PHY type: %s\n",
           VAR_47->my_pinfo->my_name);
  } else {
   FUNC_4(VAR_47);
   FUNC_14(VAR_43, "MII without any phy!\n");
   VAR_57 = VAR_1;
   goto free_if;
  }
  FUNC_4(VAR_47);
 }


 FUNC_21(&VAR_47->ifmedia, 0, VAR_36, VAR_35);
 FUNC_3(VAR_47);
 FUNC_27(VAR_47);
 FUNC_26(VAR_47, VAR_16, 1);
 VAR_49 = VAR_47->ifmedia.ifm_media;
 FUNC_30(VAR_47);
 FUNC_4(VAR_47);
 FUNC_22(&VAR_47->ifmedia, VAR_49);

 FUNC_15(VAR_48, VAR_45);

 VAR_57 = FUNC_7(VAR_43, VAR_47->my_irq, VAR_11 | VAR_10,
          ((void*)0), VAR_39, VAR_47, &VAR_47->my_intrhand);

 if (VAR_57) {
  FUNC_14(VAR_43, "couldn't set up irq\n");
  goto detach_if;
 }

 return (0);

detach_if:
 FUNC_16(VAR_48);
free_if:
 FUNC_19(VAR_48);
free_ldata:
 FUNC_17(VAR_47->my_ldata_ptr, VAR_24);
release_irq:
 FUNC_6(VAR_43, VAR_32, 0, VAR_47->my_irq);
release_io:
 FUNC_6(VAR_43, VAR_21, VAR_22, VAR_47->my_res);
destroy_mutex:
 FUNC_24(&VAR_47->my_mtx);
 return (VAR_57);
}
