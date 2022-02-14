
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u32 ;
struct net_device {int if_drv_flags; int if_mtu; } ;
struct mlx4_en_tx_ring {int buf_size; scalar_t__ buf; } ;
struct TYPE_6__ {int indir_qp; } ;
struct mlx4_en_priv {int port_up; int rx_ring_num; size_t port; int tx_ring_num; int num_tx_rings_p_up; int flags; TYPE_5__** rx_ring; struct mlx4_en_cq** rx_cq; struct mlx4_en_cq** tx_cq; struct mlx4_en_tx_ring** tx_ring; int watchdog_timer; int rx_mode_task; int broadcast_id; TYPE_1__ rss_map; int base_qpn; TYPE_4__* prof; int rx_mb_size; int counter_index; int max_mtu; int ethtool_list; int curr_uc_list; int curr_mc_list; int uc_list; int mc_list; struct mlx4_en_dev* mdev; } ;
struct mlx4_en_dev {int workqueue; int dev; scalar_t__* mac_removed; } ;
struct TYPE_8__ {int cqn; } ;
struct mlx4_en_cq {int size; TYPE_3__ mcq; TYPE_2__* buf; } ;
struct TYPE_10__ {int cqn; } ;
struct TYPE_9__ {int rx_ppp; int rx_pause; int tx_ppp; int tx_pause; } ;
struct TYPE_7__ {int wqe_index; int owner_sr_opcode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (int *,int ,int ,struct mlx4_en_priv*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,struct mlx4_en_priv*,char*,...) ;
 int FUNC_4 (struct mlx4_en_priv*,char*,...) ;
 int FUNC_5 (size_t*,int,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,size_t) ;
 int FUNC_8 (int ,size_t,int ,int ,int ,int ,int ) ;
 int FUNC_9 (int ,size_t,int ,int ) ;
 int FUNC_10 (struct mlx4_en_priv*,struct mlx4_en_cq*,int) ;
 int FUNC_11 (struct mlx4_en_priv*) ;
 int FUNC_12 (struct mlx4_en_priv*,struct mlx4_en_tx_ring*,int ,int) ;
 int FUNC_13 (struct mlx4_en_priv*,struct mlx4_en_cq*) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (struct mlx4_en_priv*) ;
 int FUNC_16 (struct mlx4_en_cq*) ;
 int FUNC_17 (struct mlx4_en_priv*) ;
 int FUNC_18 (struct mlx4_en_priv*) ;
 int FUNC_19 (struct mlx4_en_priv*,struct mlx4_en_cq*) ;
 int FUNC_20 (struct mlx4_en_priv*,TYPE_5__*) ;
 int FUNC_21 (struct mlx4_en_priv*,struct mlx4_en_tx_ring*) ;
 int FUNC_22 (struct mlx4_en_priv*) ;
 int FUNC_23 (struct mlx4_en_priv*) ;
 int FUNC_24 (struct mlx4_en_priv*) ;
 int FUNC_25 (struct mlx4_en_priv*) ;
 int FUNC_26 (struct mlx4_en_priv*,struct mlx4_en_cq*) ;
 int VAR_12 ;
 int FUNC_27 (int ,size_t) ;
 scalar_t__ FUNC_28 (int ,int *,size_t*,size_t,int ,int ,int *) ;
 int FUNC_29 (struct mlx4_en_dev*,char*) ;
 struct mlx4_en_priv* FUNC_30 (struct net_device*) ;
 int FUNC_31 (int ,int *) ;

int FUNC_32(struct net_device *VAR_13)
{
 struct mlx4_en_priv *VAR_14 = FUNC_30(VAR_13);
 struct mlx4_en_dev *VAR_15 = VAR_14->mdev;
 struct mlx4_en_cq *VAR_16;
 struct mlx4_en_tx_ring *VAR_17;
 int VAR_18 = 0;
 int VAR_19 = 0;
 int VAR_20 = 0;
 int VAR_21;
 int VAR_22;
 u8 VAR_23[16] = {0};


 if (VAR_14->port_up) {
  FUNC_3(VAR_0, VAR_14, "start port called while port already up\n");
  return 0;
 }

 FUNC_0(&VAR_14->mc_list);
 FUNC_0(&VAR_14->uc_list);
 FUNC_0(&VAR_14->curr_mc_list);
 FUNC_0(&VAR_14->curr_uc_list);
 FUNC_0(&VAR_14->ethtool_list);


 VAR_13->if_mtu = FUNC_6(VAR_13->if_mtu, VAR_14->max_mtu);
        FUNC_14(VAR_13);
 FUNC_3(VAR_0, VAR_14, "Rx buf size:%d\n", VAR_14->rx_mb_size);


 VAR_20 = FUNC_11(VAR_14);
 if (VAR_20) {
  FUNC_4(VAR_14, "Failed to activate RX rings\n");
  return VAR_20;
 }
 for (VAR_21 = 0; VAR_21 < VAR_14->rx_ring_num; VAR_21++) {
  VAR_16 = VAR_14->rx_cq[VAR_21];

  FUNC_16(VAR_16);
  VAR_20 = FUNC_10(VAR_14, VAR_16, VAR_21);
  if (VAR_20) {
   FUNC_4(VAR_14, "Failed activating Rx CQ\n");
   goto cq_err;
  }
  for (VAR_22 = 0; VAR_22 < VAR_16->size; VAR_22++)
   VAR_16->buf[VAR_22].owner_sr_opcode = VAR_6;
  VAR_20 = FUNC_26(VAR_14, VAR_16);
  if (VAR_20) {
   FUNC_4(VAR_14, "Failed setting cq moderation parameters");
   FUNC_19(VAR_14, VAR_16);
   goto cq_err;
  }
  FUNC_13(VAR_14, VAR_16);
  VAR_14->rx_ring[VAR_21]->cqn = VAR_16->mcq.cqn;
  ++VAR_18;
 }


 FUNC_3(VAR_0, VAR_14, "Getting qp number for port %d\n", VAR_14->port);
 VAR_20 = FUNC_23(VAR_14);
 if (VAR_20) {
  FUNC_4(VAR_14, "Failed getting eth qp\n");
  goto cq_err;
 }
 VAR_15->mac_removed[VAR_14->port] = 0;

 VAR_14->counter_index =
   FUNC_27(VAR_15->dev, VAR_14->port);

 VAR_20 = FUNC_15(VAR_14);
 if (VAR_20) {
  FUNC_4(VAR_14, "Failed configuring rss steering\n");
  goto mac_err;
 }

 VAR_20 = FUNC_18(VAR_14);
 if (VAR_20)
  goto rss_err;


 for (VAR_21 = 0; VAR_21 < VAR_14->tx_ring_num; VAR_21++) {

  VAR_16 = VAR_14->tx_cq[VAR_21];
  VAR_20 = FUNC_10(VAR_14, VAR_16, VAR_21);
  if (VAR_20) {
   FUNC_4(VAR_14, "Failed activating Tx CQ\n");
   goto tx_err;
  }
  VAR_20 = FUNC_26(VAR_14, VAR_16);
  if (VAR_20) {
   FUNC_4(VAR_14, "Failed setting cq moderation parameters");
   FUNC_19(VAR_14, VAR_16);
   goto tx_err;
  }
  FUNC_3(VAR_0, VAR_14, "Resetting index of collapsed CQ:%d to -1\n", VAR_21);
  VAR_16->buf->wqe_index = FUNC_2(0xffff);


  VAR_17 = VAR_14->tx_ring[VAR_21];

  VAR_20 = FUNC_12(VAR_14, VAR_17, VAR_16->mcq.cqn,
            VAR_21 / VAR_14->num_tx_rings_p_up);
  if (VAR_20) {
   FUNC_4(VAR_14, "Failed activating Tx ring %d\n", VAR_21);
   FUNC_19(VAR_14, VAR_16);
   goto tx_err;
  }


  FUNC_13(VAR_14, VAR_16);


  for (VAR_22 = 0; VAR_22 < VAR_17->buf_size; VAR_22 += VAR_11)
   *((u32 *) (VAR_17->buf + VAR_22)) = VAR_5;
  ++VAR_19;
 }


 VAR_20 = FUNC_8(VAR_15->dev, VAR_14->port,
        VAR_14->rx_mb_size,
        VAR_14->prof->tx_pause,
        VAR_14->prof->tx_ppp,
        VAR_14->prof->rx_pause,
        VAR_14->prof->rx_ppp);
 if (VAR_20) {
  FUNC_4(VAR_14, "Failed setting port general configurations for port %d, with error %d\n",
         VAR_14->port, VAR_20);
  goto tx_err;
 }

 VAR_20 = FUNC_9(VAR_15->dev, VAR_14->port, VAR_14->base_qpn, 0);
 if (VAR_20) {
  FUNC_4(VAR_14, "Failed setting default qp numbers\n");
  goto tx_err;
 }


 FUNC_3(VAR_2, VAR_14, "Initializing port\n");
 VAR_20 = FUNC_7(VAR_15->dev, VAR_14->port);
 if (VAR_20) {
  FUNC_4(VAR_14, "Failed Initializing port\n");
  goto tx_err;
 }


 FUNC_5(&VAR_23[10], 0xff, VAR_1);
 VAR_23[5] = VAR_14->port;
 if (FUNC_28(VAR_15->dev, &VAR_14->rss_map.indir_qp, VAR_23,
      VAR_14->port, 0, VAR_10,
      &VAR_14->broadcast_id))
  FUNC_29(VAR_15, "Failed Attaching Broadcast\n");


 VAR_14->flags &= ~(VAR_8 | VAR_7);


 FUNC_31(VAR_15->workqueue, &VAR_14->rx_mode_task);

 VAR_14->port_up = 1;


        VAR_13->if_drv_flags &= ~VAR_3;
        VAR_13->if_drv_flags |= VAR_4;



        FUNC_1(&VAR_14->watchdog_timer, VAR_9,
                    VAR_12, VAR_14);


 return 0;

tx_err:
 while (VAR_19--) {
  FUNC_21(VAR_14, VAR_14->tx_ring[VAR_19]);
  FUNC_19(VAR_14, VAR_14->tx_cq[VAR_19]);
 }
 FUNC_22(VAR_14);
rss_err:
 FUNC_25(VAR_14);
mac_err:
 FUNC_24(VAR_14);
cq_err:
 while (VAR_18--)
  FUNC_19(VAR_14, VAR_14->rx_cq[VAR_18]);
 for (VAR_21 = 0; VAR_21 < VAR_14->rx_ring_num; VAR_21++)
  FUNC_20(VAR_14, VAR_14->rx_ring[VAR_21]);

 return VAR_20;
}
