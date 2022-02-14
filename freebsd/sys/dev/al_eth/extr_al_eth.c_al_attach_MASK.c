
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint32_t ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct ifnet {int if_drv_flags; int if_flags; int if_capabilities; int if_capenable; void* if_mtu; int if_get_counter; int if_init; int if_ioctl; int if_qflush; int if_transmit; struct al_eth_adapter* if_softc; int if_link_state; } ;
struct TYPE_2__ {int force_1000_base_x; } ;
struct al_eth_adapter {scalar_t__ board_type; int if_flags; size_t id_number; scalar_t__ mac_mode; int * udma_res; int * mac_res; int * ec_res; int miibus; void* mii; int dev; struct ifnet* netdev; int mac_addr; int wd_mtx; int wd_callout; int stats_mtx; int stats_callout; int media; TYPE_1__ link_config; int max_rx_buff_alloc_size; int link_poll_interval; int small_copy_len; void* num_rx_queues; void* num_tx_queues; void* rx_descs_count; void* rx_ring_count; int tx_descs_count; int tx_ring_count; void* rev_id; void* dev_id; int internal_pcie_base; void* ec_base; void* mac_base; void* udma_base; int name; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct al_eth_adapter*) ;
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
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int FUNC_1 (int ) ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,int ,char*) ;
 struct sysctl_oid_list* FUNC_3 (struct sysctl_oid*) ;
 struct sysctl_oid* FUNC_4 (int ) ;
 int VAR_42 ;
 void* FUNC_5 (int ,int ) ;
 int FUNC_6 (struct al_eth_adapter*) ;
 int FUNC_7 (int ,int ,void**) ;
 int FUNC_8 (struct al_eth_adapter*) ;
 int FUNC_9 (struct al_eth_adapter*) ;
 int FUNC_10 (struct al_eth_adapter*) ;
 int FUNC_11 (struct al_eth_adapter*) ;
 int FUNC_12 (struct al_eth_adapter*) ;
 int FUNC_13 (struct al_eth_adapter*,void*) ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 void* FUNC_14 (int ,int ,int*,int ) ;
 int FUNC_15 (int ,int ,int,int *) ;
 int FUNC_16 (int *,int *,int ) ;
 int FUNC_17 (int ) ;
 char* FUNC_18 (int ) ;
 void* FUNC_19 (int ) ;
 struct sysctl_ctx_list* FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ,char*) ;
 int FUNC_24 (struct ifnet*,int ) ;
 struct al_eth_adapter** VAR_50 ;
 size_t VAR_51 ;
 struct ifnet* FUNC_25 (int ) ;
 int FUNC_26 (struct ifnet*,int ,int ) ;
 int FUNC_27 (int *,int,int ,int *) ;
 int FUNC_28 (int *,int ,int ,int ) ;
 int FUNC_29 (int *,int) ;
 int FUNC_30 (int ,int *,struct ifnet*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_31 (int *,char*,int *,int ) ;
 int VAR_52 ;
 void* FUNC_32 (int ) ;
 void* FUNC_33 (int ) ;
 int FUNC_34 (int *) ;
 int FUNC_35 (int *) ;
 int FUNC_36 (int ,int ,char*,char*) ;

__attribute__((used)) static int
FUNC_37(device_t VAR_53)
{
 struct al_eth_adapter *VAR_54;
 struct sysctl_oid_list *VAR_55;
 struct sysctl_ctx_list *VAR_56;
 struct sysctl_oid *VAR_57;
 struct ifnet *VAR_58;
 uint32_t VAR_59;
 uint32_t VAR_60;
 int VAR_61;
 int VAR_62;
 int VAR_63;
 int VAR_64;

 VAR_64 = 0;
 VAR_58 = ((void*)0);
 VAR_59 = VAR_60 = 0;
 VAR_56 = FUNC_20(VAR_53);
 VAR_57 = FUNC_4(FUNC_21(VAR_53));
 VAR_55 = FUNC_3(VAR_57);

 if (VAR_51 == 0) {
  FUNC_2(VAR_56, VAR_55, VAR_38, "napi",
      VAR_17, &VAR_52, 0, "Use pseudo-napi mechanism");
 }
 VAR_54 = FUNC_19(VAR_53);
 VAR_54->dev = VAR_53;
 VAR_54->board_type = VAR_0;
 FUNC_36(VAR_54->name, VAR_13, "%s",
     FUNC_18(VAR_53));
 FUNC_0(VAR_54);

 VAR_50[VAR_51] = VAR_54;

 VAR_61 = FUNC_1(VAR_15);
 VAR_54->udma_res = FUNC_14(VAR_53, VAR_42,
     &VAR_61, VAR_41);
 if (VAR_54->udma_res == ((void*)0)) {
  FUNC_23(VAR_54->dev,
      "could not allocate memory resources for DMA.\n");
  VAR_64 = VAR_18;
  goto err_res_dma;
 }
 VAR_54->udma_base = FUNC_5(FUNC_35(VAR_54->udma_res),
     FUNC_34(VAR_54->udma_res));
 VAR_62 = FUNC_1(VAR_10);
 VAR_54->mac_res = FUNC_14(VAR_53, VAR_42,
     &VAR_62, VAR_41);
 if (VAR_54->mac_res == ((void*)0)) {
  FUNC_23(VAR_54->dev,
      "could not allocate memory resources for MAC.\n");
  VAR_64 = VAR_18;
  goto err_res_mac;
 }
 VAR_54->mac_base = FUNC_5(FUNC_35(VAR_54->mac_res),
     FUNC_34(VAR_54->mac_res));

 VAR_63 = FUNC_1(VAR_9);
 VAR_54->ec_res = FUNC_14(VAR_53, VAR_42, &VAR_63,
     VAR_41);
 if (VAR_54->ec_res == ((void*)0)) {
  FUNC_23(VAR_54->dev,
      "could not allocate memory resources for EC.\n");
  VAR_64 = VAR_18;
  goto err_res_ec;
 }
 VAR_54->ec_base = FUNC_5(FUNC_35(VAR_54->ec_res),
     FUNC_34(VAR_54->ec_res));

 VAR_54->netdev = VAR_58 = FUNC_25(VAR_34);

 VAR_54->netdev->if_link_state = VAR_35;

 VAR_58->if_softc = VAR_54;
 FUNC_26(VAR_58, FUNC_17(VAR_53), FUNC_22(VAR_53));
 VAR_58->if_drv_flags &= ~VAR_26;
 VAR_58->if_flags = VAR_58->if_drv_flags;
 VAR_58->if_flags |= VAR_25 | VAR_28 | VAR_27 | VAR_24;
 VAR_58->if_transmit = VAR_48;
 VAR_58->if_qflush = VAR_49;
 VAR_58->if_ioctl = VAR_45;
 VAR_58->if_init = VAR_44;
 VAR_58->if_get_counter = VAR_43;
 VAR_58->if_mtu = VAR_1;

 VAR_54->if_flags = VAR_58->if_flags;

 VAR_58->if_capabilities = VAR_58->if_capenable = 0;

 VAR_58->if_capabilities |= VAR_19 |
     VAR_20 | VAR_23 |
     VAR_22 | VAR_21;

 VAR_58->if_capenable = VAR_58->if_capabilities;

 VAR_54->id_number = VAR_51;

 if (VAR_54->board_type == VAR_0) {
  VAR_59 = FUNC_32(VAR_54->dev);
  VAR_60 = FUNC_33(VAR_54->dev);
 } else {
  FUNC_7(VAR_54->internal_pcie_base,
      VAR_39, &VAR_59);
  FUNC_7(VAR_54->internal_pcie_base,
      VAR_40, &VAR_60);
 }

 VAR_54->dev_id = VAR_59;
 VAR_54->rev_id = VAR_60;


 VAR_54->tx_ring_count = VAR_8;
 VAR_54->tx_descs_count = VAR_7;
 VAR_54->rx_ring_count = VAR_5;
 VAR_54->rx_descs_count = VAR_5;

 VAR_54->num_tx_queues = VAR_14;
 VAR_54->num_rx_queues = VAR_14;

 VAR_54->small_copy_len = VAR_6;
 VAR_54->link_poll_interval = VAR_3;
 VAR_54->max_rx_buff_alloc_size = VAR_4;

 FUNC_13(VAR_54, VAR_54->netdev->if_mtu);

 VAR_54->link_config.force_1000_base_x = VAR_2;

 VAR_64 = FUNC_6(VAR_54);
 if (VAR_64 != 0)
  goto err;

 if (VAR_54->mac_mode == VAR_11) {
  FUNC_28(&VAR_54->media, VAR_33,
      VAR_47, VAR_46);
  FUNC_27(&VAR_54->media, VAR_32 | VAR_29, 0, ((void*)0));
  FUNC_27(&VAR_54->media, VAR_32 | VAR_30, 0, ((void*)0));
  FUNC_27(&VAR_54->media, VAR_32 | VAR_31, 0, ((void*)0));
  FUNC_29(&VAR_54->media, VAR_32 | VAR_31);
 }

 FUNC_8(VAR_54);

 VAR_64 = FUNC_10(VAR_54);
 if (VAR_64 != 0)
  goto err;

 FUNC_11(VAR_54);
 VAR_51++;

 FUNC_12(VAR_54);
 FUNC_31(&VAR_54->stats_mtx, "AlStatsMtx", ((void*)0), VAR_37);
 FUNC_31(&VAR_54->wd_mtx, "AlWdMtx", ((void*)0), VAR_37);
 FUNC_16(&VAR_54->stats_callout, &VAR_54->stats_mtx, 0);
 FUNC_16(&VAR_54->wd_callout, &VAR_54->wd_mtx, 0);

 FUNC_24(VAR_58, VAR_54->mac_addr);
 VAR_58->if_mtu = VAR_1;

 if (VAR_54->mac_mode == VAR_12) {
  FUNC_9(VAR_54);


  VAR_64 = FUNC_30(VAR_54->dev, &VAR_54->miibus, VAR_54->netdev,
      VAR_47, VAR_46, VAR_16, 0,
      VAR_36, 0);
  if (VAR_64 != 0) {
   FUNC_23(VAR_54->dev, "attaching PHYs failed\n");
   return (VAR_64);
  }

  VAR_54->mii = FUNC_19(VAR_54->miibus);
 }

 return (VAR_64);

err:
 FUNC_15(VAR_53, VAR_42, VAR_63, VAR_54->ec_res);
err_res_ec:
 FUNC_15(VAR_53, VAR_42, VAR_62, VAR_54->mac_res);
err_res_mac:
 FUNC_15(VAR_53, VAR_42, VAR_61, VAR_54->udma_res);
err_res_dma:
 return (VAR_64);
}
