
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int ifq_drv_maxlen; int ifq_mtx; } ;
struct ifnet {int if_flags; int if_hdrlen; int if_capabilities; int if_capenable; int if_hwassist; TYPE_5__ if_snd; int if_transmit; int if_xname; int if_ioctl; int if_init; } ;
struct ether_vlan_header {int dummy; } ;
typedef int * device_t ;
struct TYPE_7__ {int phy_id; int if_flags; int mac; TYPE_5__* tx_free_queue; int tx_mtx; int media; int * miibus; int * phy_device; struct ifnet* ifp; } ;
typedef TYPE_1__ cvm_oct_private_t ;


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
 int FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (TYPE_5__*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,char*,...) ;
 int FUNC_10 (struct ifnet*,int ) ;
 int FUNC_11 (struct ifnet*,int ,int ) ;
 int FUNC_12 (int *,int,int ,int *) ;
 int FUNC_13 (int *,int ,int ,int ) ;
 int FUNC_14 (int *,int) ;
 int FUNC_15 (int *,int **,struct ifnet*,int ,int ,int ,int,int ,int ) ;
 int FUNC_16 (int *,int ,char*,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static int
FUNC_17(device_t VAR_21)
{
 struct ifnet *VAR_22;
 cvm_oct_private_t *VAR_23;
 device_t VAR_24;
 unsigned VAR_25;
 int VAR_26;

 VAR_23 = FUNC_7(VAR_21);
 VAR_22 = VAR_23->ifp;

 FUNC_11(VAR_22, FUNC_6(VAR_21), FUNC_8(VAR_21));

 if (VAR_23->phy_id != -1) {
  if (VAR_23->phy_device == ((void*)0)) {
   VAR_26 = FUNC_15(VAR_21, &VAR_23->miibus, VAR_22,
       VAR_18, VAR_19,
       VAR_0, VAR_23->phy_id, VAR_12, 0);
   if (VAR_26 != 0)
    FUNC_9(VAR_21, "attaching PHYs failed\n");
  } else {
   VAR_24 = FUNC_5(VAR_21, VAR_23->phy_device, -1);
   if (VAR_24 == ((void*)0))
    FUNC_9(VAR_21, "missing phy %u device %s\n", VAR_23->phy_id, VAR_23->phy_device);
  }
 }

 if (VAR_23->miibus == ((void*)0)) {
  FUNC_13(&VAR_23->media, 0, VAR_16, VAR_17);

  FUNC_12(&VAR_23->media, VAR_10 | VAR_9, 0, ((void*)0));
  FUNC_14(&VAR_23->media, VAR_10 | VAR_9);
 }







 VAR_22->if_flags = VAR_6 | VAR_8 | VAR_7 | VAR_5;
 VAR_22->if_init = VAR_14;
 VAR_22->if_ioctl = VAR_15;

 VAR_23->if_flags = VAR_22->if_flags;

 FUNC_16(&VAR_23->tx_mtx, VAR_22->if_xname, "octe tx send queue", VAR_13);

 for (VAR_25 = 0; VAR_25 < 16; VAR_25++) {
  FUNC_16(&VAR_23->tx_free_queue[VAR_25].ifq_mtx, VAR_22->if_xname, "octe tx free queue", VAR_13);
  FUNC_0(&VAR_23->tx_free_queue[VAR_25], VAR_11);
 }

 FUNC_10(VAR_22, VAR_23->mac);

 VAR_22->if_transmit = VAR_20;

 VAR_22->if_hdrlen = sizeof(struct ether_vlan_header);
 VAR_22->if_capabilities = VAR_4 | VAR_3;
 VAR_22->if_capenable = VAR_22->if_capabilities;
 VAR_22->if_hwassist = VAR_1 | VAR_2;

 FUNC_2(VAR_23);
 FUNC_0(&VAR_22->if_snd, VAR_11);
 VAR_22->if_snd.ifq_drv_maxlen = VAR_11;
 FUNC_1(&VAR_22->if_snd);
 FUNC_3(VAR_23);

 return (FUNC_4(VAR_21));
}
