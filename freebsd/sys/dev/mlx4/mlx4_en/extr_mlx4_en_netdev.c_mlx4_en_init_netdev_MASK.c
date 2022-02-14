
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef scalar_t__ u8 ;
struct TYPE_10__ {int ifq_maxlen; } ;
struct net_device {int if_flags; int if_capabilities; int if_capenable; int if_hwassist; scalar_t__ if_mtu; int if_hw_tsomaxsegsize; scalar_t__ if_hw_tsomaxsegcount; scalar_t__ if_hw_tsomax; int * dcbnl_ops; TYPE_1__ if_snd; int if_qflush; int if_transmit; int if_ioctl; int if_init; struct mlx4_en_priv* if_softc; } ;
struct mlx4_en_tx_ring {int dummy; } ;
struct mlx4_en_priv {int counter_index; int port; int port_up; int cqe_factor; int mac_index; int mac; int allocated; int registered; int service_task; int stats_task; scalar_t__ rx_mb_size; int media; int last_link_state; void* vlan_detach; void* vlan_attach; int res; int max_mtu; int flags; int dcbx_cap; struct mlx4_en_dev* mdev; scalar_t__ if_counters_rx_no_buffer; scalar_t__ if_counters_rx_errors; scalar_t__ last_ifq_jiffies; int rx_ring_num; void* tx_cq; void* tx_ring; int tx_ring_num; int num_tx_rings_p_up; struct mlx4_en_port_profile* prof; TYPE_2__* ddev; struct net_device* dev; int msg_enable; int filters_lock; int filters; int watchdog_timer; int linkstate_task; int watchdog_task; int rx_mode_task; int stats_lock; } ;
struct mlx4_en_port_profile {int rx_ppp; int rx_pause; int tx_ppp; int tx_pause; int rx_ring_num; int tx_ring_num; int flags; int tx_ring_size; } ;
struct TYPE_13__ {int num_tx_rings_p_up; } ;
struct mlx4_en_dev {int workqueue; TYPE_6__* dev; struct net_device** pndev; scalar_t__ LSO_support; TYPE_4__ profile; TYPE_3__* pdev; } ;
struct mlx4_en_cq {int dummy; } ;
struct TYPE_14__ {int cqe_size; int flags2; int* def_mac; int * eth_mtu_cap; } ;
struct TYPE_15__ {TYPE_5__ caps; } ;
struct TYPE_11__ {int bsddev; } ;
struct TYPE_12__ {TYPE_2__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct net_device*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 void* FUNC_1 (int ,int ,struct mlx4_en_priv*,int ) ;
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
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 scalar_t__ VAR_53 ;
 int VAR_54 ;
 scalar_t__ VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 scalar_t__ VAR_59 ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct mlx4_en_priv*,char*,...) ;
 int FUNC_9 (struct mlx4_en_priv*,char*) ;
 int FUNC_10 (struct mlx4_en_priv*,char*,...) ;
 int FUNC_11 (struct net_device*,scalar_t__*) ;
 struct net_device* FUNC_12 (int ) ;
 int FUNC_13 (struct net_device*,char*,int) ;
 int FUNC_14 (struct net_device*,int ) ;
 int FUNC_15 (int *,int,int ,int *) ;
 int FUNC_16 (int *,int,int ,int ) ;
 int FUNC_17 (int *,int) ;
 void* FUNC_18 (int,int,int ) ;
 int FUNC_19 (struct mlx4_en_priv*) ;
 struct mlx4_en_priv* FUNC_20 (int,int ) ;
 int FUNC_21 (TYPE_6__*,size_t) ;
 int FUNC_22 (TYPE_6__*,size_t,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_23 (TYPE_6__*,int *,int ,int ) ;
 int VAR_60 ;
 int FUNC_24 (struct mlx4_en_priv*) ;
 int VAR_61 ;
 int VAR_62 ;
 int FUNC_25 (struct net_device*) ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int FUNC_26 (struct mlx4_en_priv*) ;
 int FUNC_27 (struct mlx4_en_priv*) ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int FUNC_28 (TYPE_6__*) ;
 int FUNC_29 (int ,int *,int ) ;
 int FUNC_30 (int *) ;
 int VAR_76 ;
 int VAR_77 ;

int FUNC_31(struct mlx4_en_dev *VAR_78, int VAR_79,
   struct mlx4_en_port_profile *VAR_80)
{
 struct net_device *VAR_81;
 struct mlx4_en_priv *VAR_82;
 uint8_t VAR_83[VAR_10];
 int VAR_84;
 int VAR_85;

 VAR_82 = FUNC_20(sizeof(*VAR_82), VAR_16);
 VAR_81 = VAR_82->dev = FUNC_12(VAR_44);
 if (VAR_81 == ((void*)0)) {
  FUNC_8(VAR_82, "Net device allocation failed\n");
  FUNC_19(VAR_82);
  return -VAR_8;
 }
 VAR_81->if_softc = VAR_82;
 FUNC_13(VAR_81, "mlxen", (FUNC_7(
     VAR_78->pdev->dev.bsddev) * VAR_56) + VAR_79 - 1);
 VAR_81->if_mtu = VAR_9;
 VAR_81->if_init = VAR_69;
 VAR_81->if_flags = VAR_32 | VAR_34 | VAR_33;
 VAR_81->if_ioctl = VAR_65;
 VAR_81->if_transmit = VAR_73;
 VAR_81->if_qflush = VAR_70;
 VAR_81->if_snd.ifq_maxlen = VAR_80->tx_ring_size;




 VAR_82->counter_index = 0xff;
 FUNC_30(&VAR_82->stats_lock);
 FUNC_5(&VAR_82->rx_mode_task, VAR_64);
 FUNC_5(&VAR_82->watchdog_task, VAR_71);
 FUNC_5(&VAR_82->linkstate_task, VAR_66);
 FUNC_3(&VAR_82->stats_task, VAR_63);
 FUNC_3(&VAR_82->service_task, VAR_72);
 FUNC_6(&VAR_82->watchdog_timer, 1);





 VAR_82->msg_enable = VAR_51;
 VAR_82->dev = VAR_81;
 VAR_82->mdev = VAR_78;
 VAR_82->ddev = &VAR_78->pdev->dev;
 VAR_82->prof = VAR_80;
 VAR_82->port = VAR_79;
 VAR_82->port_up = 0;
 VAR_82->flags = VAR_80->flags;

 VAR_82->num_tx_rings_p_up = VAR_78->profile.num_tx_rings_p_up;
 VAR_82->tx_ring_num = VAR_80->tx_ring_num;
 VAR_82->tx_ring = FUNC_18(VAR_46,
    sizeof(struct mlx4_en_tx_ring *), VAR_16);
 if (!VAR_82->tx_ring) {
  VAR_84 = -VAR_8;
  goto out;
 }
 VAR_82->tx_cq = FUNC_18(sizeof(struct mlx4_en_cq *), VAR_46,
   VAR_16);
 if (!VAR_82->tx_cq) {
  VAR_84 = -VAR_8;
  goto out;
 }

 VAR_82->rx_ring_num = VAR_80->rx_ring_num;
 VAR_82->cqe_factor = (VAR_78->dev->caps.cqe_size == 64) ? 1 : 0;
 VAR_82->mac_index = -1;
 VAR_82->last_ifq_jiffies = 0;
 VAR_82->if_counters_rx_errors = 0;
 VAR_82->if_counters_rx_no_buffer = 0;
 VAR_82->max_mtu = VAR_78->dev->caps.eth_mtu_cap[VAR_82->port];
        VAR_82->mac = VAR_78->dev->caps.def_mac[VAR_82->port];
        if (FUNC_2(VAR_82->mac)) {







                VAR_84 = -VAR_7;
                goto out;
        }

 FUNC_27(VAR_82);

 VAR_84 = FUNC_24(VAR_82);
 if (VAR_84)
  goto out;


 VAR_84 = FUNC_23(VAR_78->dev, &VAR_82->res,
    VAR_52, VAR_52);
 if (VAR_84) {
  FUNC_8(VAR_82, "Failed to allocate page for rx qps\n");
  goto out;
 }
 VAR_82->allocated = 1;




 VAR_81->if_capabilities |= VAR_17 | VAR_18;
 VAR_81->if_capabilities |= VAR_31 | VAR_29;
 VAR_81->if_capabilities |= VAR_27 | VAR_28;
 VAR_81->if_capabilities |= VAR_21 | VAR_20;
 VAR_81->if_capabilities |= VAR_22;
 VAR_81->if_capabilities |= VAR_19;

 if (VAR_78->LSO_support)
  VAR_81->if_capabilities |= VAR_23 | VAR_24 | VAR_30;
 VAR_81->if_capenable = VAR_81->if_capabilities;

 VAR_81->if_hwassist = 0;
 if (VAR_81->if_capenable & (VAR_23 | VAR_24))
  VAR_81->if_hwassist |= VAR_3;
 if (VAR_81->if_capenable & VAR_25)
  VAR_81->if_hwassist |= (VAR_1 | VAR_4 | VAR_0);
 if (VAR_81->if_capenable & VAR_26)
  VAR_81->if_hwassist |= (VAR_5 | VAR_2);



 VAR_82->vlan_attach = FUNC_1(VAR_76,
            VAR_74, VAR_82, VAR_15);
 VAR_82->vlan_detach = FUNC_1(VAR_77,
            VAR_75, VAR_82, VAR_15);

 VAR_78->pndev[VAR_82->port] = VAR_81;

 VAR_82->last_link_state = VAR_49;
        FUNC_26(VAR_82);


 for (VAR_85 = 0; VAR_85 < VAR_10; VAR_85++)
  VAR_83[VAR_10 - 1 - VAR_85] = (u8) (VAR_82->mac >> (8 * VAR_85));


 FUNC_11(VAR_81, VAR_83);
 FUNC_14(VAR_81, VAR_45);
 FUNC_16(&VAR_82->media, VAR_43 | VAR_41,
     VAR_67, VAR_68);
 FUNC_15(&VAR_82->media, VAR_40 | VAR_42 | VAR_35, 0, ((void*)0));
 FUNC_15(&VAR_82->media, VAR_40 | VAR_42 | VAR_37, 0, ((void*)0));
 FUNC_15(&VAR_82->media, VAR_40 | VAR_42 | VAR_36, 0, ((void*)0));
 FUNC_15(&VAR_82->media, VAR_40 | VAR_42 | VAR_38, 0, ((void*)0));
 FUNC_15(&VAR_82->media, VAR_40 | VAR_39, 0, ((void*)0));
 FUNC_17(&VAR_82->media, VAR_40 | VAR_39);

 FUNC_0(VAR_81, VAR_60);

 FUNC_10(VAR_82, "Using %d TX rings\n", VAR_80->tx_ring_num);
 FUNC_10(VAR_82, "Using %d RX rings\n", VAR_80->rx_ring_num);

 VAR_82->registered = 1;

        FUNC_10(VAR_82, "Using %d TX rings\n", VAR_80->tx_ring_num);
        FUNC_10(VAR_82, "Using %d RX rings\n", VAR_80->rx_ring_num);


 VAR_82->rx_mb_size = VAR_81->if_mtu + VAR_14 + VAR_59 + VAR_13;
 VAR_84 = FUNC_22(VAR_78->dev, VAR_82->port,
        VAR_82->rx_mb_size,
        VAR_80->tx_pause, VAR_80->tx_ppp,
        VAR_80->rx_pause, VAR_80->rx_ppp);
 if (VAR_84) {
  FUNC_8(VAR_82, "Failed setting port general configurations "
         "for port %d, with error %d\n", VAR_82->port, VAR_84);
  goto out;
 }


 FUNC_10(VAR_82, "Initializing port\n");
 VAR_84 = FUNC_21(VAR_78->dev, VAR_82->port);
 if (VAR_84) {
  FUNC_8(VAR_82, "Failed Initializing port\n");
  goto out;
 }

 FUNC_29(VAR_78->workqueue, &VAR_82->stats_task, VAR_58);

        if (VAR_78->dev->caps.flags2 & VAR_48)
                FUNC_29(VAR_78->workqueue, &VAR_82->service_task, VAR_57);

 return 0;

out:
 FUNC_25(VAR_81);
 return VAR_84;
}
