
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vtnet_softc {int vtnet_flags; void* vtnet_vlan_detach; void* vtnet_vlan_attach; int vtnet_hwaddr; int vtnet_media; TYPE_1__* vtnet_txqs; struct ifnet* vtnet_ifp; int vtnet_dev; } ;
struct virtqueue {int dummy; } ;
struct TYPE_5__ {scalar_t__ ifq_drv_maxlen; } ;
struct ifnet {int if_flags; int if_capabilities; int if_hdrlen; int if_capenable; TYPE_2__ if_snd; int if_start; int if_qflush; int if_transmit; int if_get_counter; int if_ioctl; int if_init; struct vtnet_softc* if_softc; int if_baudrate; } ;
struct ether_vlan_header {int dummy; } ;
typedef int device_t ;
struct TYPE_4__ {struct virtqueue* vtntx_vq; } ;


 int FUNC_0 (struct ifnet*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int ,int ,struct vtnet_softc*,int ) ;
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
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_22 ;
 int FUNC_4 (int) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (struct ifnet*,int ) ;
 struct ifnet* FUNC_9 (int ) ;
 int FUNC_10 (struct ifnet*,int ,int ) ;
 int FUNC_11 (int *,int ,int ,int *) ;
 int FUNC_12 (int *,int ,int ,int ) ;
 int FUNC_13 (int *,int ) ;
 scalar_t__ FUNC_14 (int ,int ) ;
 scalar_t__ FUNC_15 (struct virtqueue*) ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_16 (struct vtnet_softc*) ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int FUNC_17 (struct vtnet_softc*) ;
 int FUNC_18 (struct vtnet_softc*) ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;

__attribute__((used)) static int
FUNC_19(struct vtnet_softc *VAR_48)
{
 device_t VAR_49;
 struct ifnet *VAR_50;

 VAR_49 = VAR_48->vtnet_dev;

 VAR_50 = VAR_48->vtnet_ifp = FUNC_9(VAR_22);
 if (VAR_50 == ((void*)0)) {
  FUNC_7(VAR_49, "cannot allocate ifnet structure\n");
  return (VAR_0);
 }

 FUNC_10(VAR_50, FUNC_5(VAR_49), FUNC_6(VAR_49));
 VAR_50->if_baudrate = FUNC_4(10);
 VAR_50->if_softc = VAR_48;
 VAR_50->if_flags = VAR_18 | VAR_20 | VAR_19;
 VAR_50->if_init = VAR_41;
 VAR_50->if_ioctl = VAR_42;
 VAR_50->if_get_counter = VAR_38;

 VAR_50->if_transmit = VAR_46;
 VAR_50->if_qflush = VAR_43;
 FUNC_12(&VAR_48->vtnet_media, VAR_21, VAR_40,
     VAR_39);
 FUNC_11(&VAR_48->vtnet_media, VAR_34, 0, ((void*)0));
 FUNC_13(&VAR_48->vtnet_media, VAR_34);


 FUNC_16(VAR_48);

 FUNC_8(VAR_50, VAR_48->vtnet_hwaddr);

 if (FUNC_14(VAR_49, VAR_31))
  VAR_50->if_capabilities |= VAR_4;


 VAR_50->if_hdrlen = sizeof(struct ether_vlan_header);
 VAR_50->if_capabilities |= VAR_3 | VAR_17;

 if (FUNC_14(VAR_49, VAR_23)) {
  VAR_50->if_capabilities |= VAR_11 | VAR_12;

  if (FUNC_14(VAR_49, VAR_24)) {
   VAR_50->if_capabilities |= VAR_9 | VAR_10;
   VAR_48->vtnet_flags |= VAR_32;
  } else {
   if (FUNC_14(VAR_49, VAR_29))
    VAR_50->if_capabilities |= VAR_9;
   if (FUNC_14(VAR_49, VAR_30))
    VAR_50->if_capabilities |= VAR_10;
   if (FUNC_14(VAR_49, VAR_28))
    VAR_48->vtnet_flags |= VAR_32;
  }

  if (VAR_50->if_capabilities & VAR_8)
   VAR_50->if_capabilities |= VAR_16;
 }

 if (FUNC_14(VAR_49, VAR_25)) {
  VAR_50->if_capabilities |= VAR_6 | VAR_7;

  if (FUNC_14(VAR_49, VAR_26) ||
      FUNC_14(VAR_49, VAR_27))
   VAR_50->if_capabilities |= VAR_5;
 }

 if (VAR_50->if_capabilities & VAR_2) {






  VAR_50->if_capabilities |=
      VAR_15 | VAR_13;
 }

 VAR_50->if_capenable = VAR_50->if_capabilities;





 if (VAR_48->vtnet_flags & VAR_33) {
  VAR_50->if_capabilities |= VAR_14;

  VAR_48->vtnet_vlan_attach = FUNC_1(VAR_35,
      VAR_44, VAR_48, VAR_1);
  VAR_48->vtnet_vlan_detach = FUNC_1(VAR_36,
      VAR_47, VAR_48, VAR_1);
 }

 FUNC_17(VAR_48);
 FUNC_18(VAR_48);

 FUNC_0(VAR_50, VAR_37);

 return (0);
}
