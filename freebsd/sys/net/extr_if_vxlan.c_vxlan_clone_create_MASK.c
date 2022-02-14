
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vxlp ;
struct TYPE_2__ {int octet; } ;
struct vxlan_softc {int vxl_unit; TYPE_1__ vxl_hwaddr; int vxl_media; int vxl_port_hash_key; int vxl_lock; int vxl_callout; struct ifnet* vxl_ifp; } ;
struct ifvxlanparam {int dummy; } ;
struct ifnet {int if_flags; int if_capabilities; int if_capenable; scalar_t__ if_hdrlen; scalar_t__ if_baudrate; int if_qflush; int if_transmit; int if_ioctl; int if_init; struct vxlan_softc* if_softc; } ;
struct if_clone {int dummy; } ;
typedef scalar_t__ caddr_t ;


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
 int FUNC_0 () ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (scalar_t__,struct ifvxlanparam*,int) ;
 int FUNC_3 (struct ifnet*,TYPE_1__*) ;
 int FUNC_4 (struct ifnet*,int ) ;
 int FUNC_5 (struct vxlan_softc*,int ) ;
 struct ifnet* FUNC_6 (int ) ;
 int FUNC_7 (struct ifnet*,int ,int) ;
 int FUNC_8 (int *,int,int ,int *) ;
 int FUNC_9 (int *,int ,int ,int ) ;
 int FUNC_10 (int *,int) ;
 struct vxlan_softc* FUNC_11 (int,int ,int) ;
 int FUNC_12 (int *,char*) ;
 int FUNC_13 (struct vxlan_softc*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_14 (struct vxlan_softc*) ;
 int FUNC_15 (struct vxlan_softc*,struct ifvxlanparam*) ;
 int FUNC_16 (struct vxlan_softc*) ;
 int VAR_18 ;

__attribute__((used)) static int
FUNC_17(struct if_clone *VAR_19, int VAR_20, caddr_t VAR_21)
{
 struct vxlan_softc *VAR_22;
 struct ifnet *VAR_23;
 struct ifvxlanparam VAR_24;
 int VAR_25;

 VAR_22 = FUNC_11(sizeof(struct vxlan_softc), VAR_9, VAR_10 | VAR_11);
 VAR_22->vxl_unit = VAR_20;
 FUNC_14(VAR_22);

 if (VAR_21 != 0) {
  VAR_25 = FUNC_2(VAR_21, &VAR_24, sizeof(VAR_24));
  if (VAR_25)
   goto fail;

  VAR_25 = FUNC_15(VAR_22, &VAR_24);
  if (VAR_25)
   goto fail;
 }

 VAR_23 = FUNC_6(VAR_8);
 if (VAR_23 == ((void*)0)) {
  VAR_25 = VAR_0;
  goto fail;
 }

 VAR_22->vxl_ifp = VAR_23;
 FUNC_12(&VAR_22->vxl_lock, "vxlanrm");
 FUNC_1(&VAR_22->vxl_callout, &VAR_22->vxl_lock, 0);
 VAR_22->vxl_port_hash_key = FUNC_0();
 FUNC_13(VAR_22);

 FUNC_16(VAR_22);

 VAR_23->if_softc = VAR_22;
 FUNC_7(VAR_23, VAR_16, VAR_20);
 VAR_23->if_flags = VAR_3 | VAR_5 | VAR_4;
 VAR_23->if_init = VAR_12;
 VAR_23->if_ioctl = VAR_13;
 VAR_23->if_transmit = VAR_18;
 VAR_23->if_qflush = VAR_17;
 VAR_23->if_capabilities |= VAR_2 | VAR_1;
 VAR_23->if_capenable |= VAR_2 | VAR_1;

 FUNC_9(&VAR_22->vxl_media, 0, VAR_14, VAR_15);
 FUNC_8(&VAR_22->vxl_media, VAR_7 | VAR_6, 0, ((void*)0));
 FUNC_10(&VAR_22->vxl_media, VAR_7 | VAR_6);

 FUNC_3(VAR_23, &VAR_22->vxl_hwaddr);
 FUNC_4(VAR_23, VAR_22->vxl_hwaddr.octet);

 VAR_23->if_baudrate = 0;
 VAR_23->if_hdrlen = 0;

 return (0);

fail:
 FUNC_5(VAR_22, VAR_9);
 return (VAR_25);
}
