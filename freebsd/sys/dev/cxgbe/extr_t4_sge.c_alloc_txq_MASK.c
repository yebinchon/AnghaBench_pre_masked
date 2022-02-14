
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vi_info {int ctx; int vfvld; int vin; int ifp; struct port_info* pi; } ;
struct tx_sdesc {int dummy; } ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sge_eq {int sidx; scalar_t__ abs_id; scalar_t__ cntxt_id; struct vi_info pidx; struct vi_info cidx; int ba; } ;
struct sge_txq {int tc_idx; TYPE_4__* r; int raw_wrs; int txpkts1_pkts; int txpkts0_pkts; int txpkts1_wrs; int txpkts0_wrs; int txpkt_wrs; int sgl_wrs; int imm_wrs; int tso_wrs; int vlan_insertion; int txcsum; int sdesc; void* cpl_ctrl0; int gl; int ifp; int tx_reclaim_task; struct sge_eq eq; } ;
struct port_info {int tx_chan; struct adapter* adapter; } ;
struct TYPE_6__ {int spg_len; } ;
struct TYPE_7__ {TYPE_1__ sge; } ;
struct TYPE_8__ {scalar_t__ eq_base; } ;
struct adapter {int flags; TYPE_2__ params; int pf; TYPE_3__ sge; int dev; } ;
typedef int name ;
struct TYPE_9__ {int abdications; int restarts; int stalls; int starts; int drops; int enqueues; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *,struct sysctl_oid_list*,int ,char*,int,int *,char*) ;
 int FUNC_2 (int *,struct sysctl_oid_list*,int ,char*,int,int *,int,char*) ;
 struct sysctl_oid* FUNC_3 (int *,struct sysctl_oid_list*,int ,char*,int,int *,char*) ;
 int FUNC_4 (int *,struct sysctl_oid_list*,int ,char*,int,struct vi_info*,int,int ,char*,char*) ;
 int FUNC_5 (int *,struct sysctl_oid_list*,int ,char*,int,int *,char*) ;
 int FUNC_6 (int *,struct sysctl_oid_list*,int ,char*,int,scalar_t__*,int ,char*) ;
 int FUNC_7 (int *,struct sysctl_oid_list*,int ,char*,int,int *,char*) ;
 struct sysctl_oid_list* FUNC_8 (struct sysctl_oid*) ;
 int FUNC_9 (int *,int ,int ,struct sge_eq*) ;
 int VAR_11 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct adapter*,struct vi_info*,struct sge_eq*) ;
 int VAR_12 ;
 int FUNC_16 (int ,char*,int) ;
 int VAR_13 ;
 void* FUNC_17 (int) ;
 int FUNC_18 (int,int ,int) ;
 int FUNC_19 (TYPE_4__**,int,struct sge_txq*,int ,int ,int ,int) ;
 int FUNC_20 (TYPE_4__*) ;
 int FUNC_21 (int ,int) ;
 int FUNC_22 (char*,int,char*,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static int
FUNC_23(struct vi_info *VAR_17, struct sge_txq *VAR_18, int VAR_19,
    struct sysctl_oid *VAR_20)
{
 int VAR_21;
 struct port_info *VAR_22 = VAR_17->pi;
 struct adapter *VAR_23 = VAR_22->adapter;
 struct sge_eq *VAR_24 = &VAR_18->eq;
 char VAR_25[16];
 struct sysctl_oid_list *VAR_26 = FUNC_8(VAR_20);

 VAR_21 = FUNC_19(&VAR_18->r, VAR_24->sidx, VAR_18, VAR_13, VAR_12,
     VAR_7, VAR_8);
 if (VAR_21 != 0) {
  FUNC_16(VAR_23->dev, "failed to allocate mp_ring: %d\n", VAR_21);
  return (VAR_21);
 }

 VAR_21 = FUNC_15(VAR_23, VAR_17, VAR_24);
 if (VAR_21 != 0) {
  FUNC_20(VAR_18->r);
  VAR_18->r = ((void*)0);
  return (VAR_21);
 }



 if (VAR_19 == 0)
  VAR_23->sge.eq_base = VAR_24->abs_id - VAR_24->cntxt_id;
 else
  FUNC_0(VAR_24->cntxt_id + VAR_23->sge.eq_base == VAR_24->abs_id,
      ("eq_base mismatch"));
 FUNC_0(VAR_23->sge.eq_base == 0 || VAR_23->flags & VAR_6,
     ("PF with non-zero eq_base"));

 FUNC_9(&VAR_18->tx_reclaim_task, 0, VAR_16, VAR_24);
 VAR_18->ifp = VAR_17->ifp;
 VAR_18->gl = FUNC_21(VAR_11, VAR_8);
 if (VAR_23->flags & VAR_6)
  VAR_18->cpl_ctrl0 = FUNC_17(FUNC_11(VAR_1) |
      FUNC_10(VAR_22->tx_chan));
 else
  VAR_18->cpl_ctrl0 = FUNC_17(FUNC_11(VAR_0) |
      FUNC_10(VAR_22->tx_chan) | FUNC_12(VAR_23->pf) |
      FUNC_13(VAR_17->vin) | FUNC_14(VAR_17->vfvld));
 VAR_18->tc_idx = -1;
 VAR_18->sdesc = FUNC_18(VAR_24->sidx * sizeof(struct tx_sdesc), VAR_7,
     VAR_9 | VAR_8);

 FUNC_22(VAR_25, sizeof(VAR_25), "%d", VAR_19);
 VAR_20 = FUNC_3(&VAR_17->ctx, VAR_26, VAR_10, VAR_25, VAR_2,
     ((void*)0), "tx queue");
 VAR_26 = FUNC_8(VAR_20);

 FUNC_5(&VAR_17->ctx, VAR_26, VAR_10, "ba", VAR_2,
     &VAR_24->ba, "bus address of descriptor ring");
 FUNC_2(&VAR_17->ctx, VAR_26, VAR_10, "dmalen", VAR_2, ((void*)0),
     VAR_24->sidx * VAR_5 + VAR_23->params.sge.spg_len,
     "desc ring size in bytes");
 FUNC_6(&VAR_17->ctx, VAR_26, VAR_10, "abs_id", VAR_2,
     &VAR_24->abs_id, 0, "absolute id of the queue");
 FUNC_6(&VAR_17->ctx, VAR_26, VAR_10, "cntxt_id", VAR_2,
     &VAR_24->cntxt_id, 0, "SGE context id of the queue");
 FUNC_4(&VAR_17->ctx, VAR_26, VAR_10, "cidx",
     VAR_4 | VAR_2, &VAR_24->cidx, 0, VAR_15, "I",
     "consumer index");
 FUNC_4(&VAR_17->ctx, VAR_26, VAR_10, "pidx",
     VAR_4 | VAR_2, &VAR_24->pidx, 0, VAR_15, "I",
     "producer index");
 FUNC_2(&VAR_17->ctx, VAR_26, VAR_10, "sidx", VAR_2, ((void*)0),
     VAR_24->sidx, "status page index");

 FUNC_4(&VAR_17->ctx, VAR_26, VAR_10, "tc",
     VAR_4 | VAR_3, VAR_17, VAR_19, VAR_14, "I",
     "traffic class (-1 means none)");

 FUNC_7(&VAR_17->ctx, VAR_26, VAR_10, "txcsum", VAR_2,
     &VAR_18->txcsum, "# of times hardware assisted with checksum");
 FUNC_7(&VAR_17->ctx, VAR_26, VAR_10, "vlan_insertion",
     VAR_2, &VAR_18->vlan_insertion,
     "# of times hardware inserted 802.1Q tag");
 FUNC_7(&VAR_17->ctx, VAR_26, VAR_10, "tso_wrs", VAR_2,
     &VAR_18->tso_wrs, "# of TSO work requests");
 FUNC_7(&VAR_17->ctx, VAR_26, VAR_10, "imm_wrs", VAR_2,
     &VAR_18->imm_wrs, "# of work requests with immediate data");
 FUNC_7(&VAR_17->ctx, VAR_26, VAR_10, "sgl_wrs", VAR_2,
     &VAR_18->sgl_wrs, "# of work requests with direct SGL");
 FUNC_7(&VAR_17->ctx, VAR_26, VAR_10, "txpkt_wrs", VAR_2,
     &VAR_18->txpkt_wrs, "# of txpkt work requests (one pkt/WR)");
 FUNC_7(&VAR_17->ctx, VAR_26, VAR_10, "txpkts0_wrs",
     VAR_2, &VAR_18->txpkts0_wrs,
     "# of txpkts (type 0) work requests");
 FUNC_7(&VAR_17->ctx, VAR_26, VAR_10, "txpkts1_wrs",
     VAR_2, &VAR_18->txpkts1_wrs,
     "# of txpkts (type 1) work requests");
 FUNC_7(&VAR_17->ctx, VAR_26, VAR_10, "txpkts0_pkts",
     VAR_2, &VAR_18->txpkts0_pkts,
     "# of frames tx'd using type0 txpkts work requests");
 FUNC_7(&VAR_17->ctx, VAR_26, VAR_10, "txpkts1_pkts",
     VAR_2, &VAR_18->txpkts1_pkts,
     "# of frames tx'd using type1 txpkts work requests");
 FUNC_7(&VAR_17->ctx, VAR_26, VAR_10, "raw_wrs", VAR_2,
     &VAR_18->raw_wrs, "# of raw work requests (non-packets)");

 FUNC_1(&VAR_17->ctx, VAR_26, VAR_10, "r_enqueues",
     VAR_2, &VAR_18->r->enqueues,
     "# of enqueues to the mp_ring for this queue");
 FUNC_1(&VAR_17->ctx, VAR_26, VAR_10, "r_drops",
     VAR_2, &VAR_18->r->drops,
     "# of drops in the mp_ring for this queue");
 FUNC_1(&VAR_17->ctx, VAR_26, VAR_10, "r_starts",
     VAR_2, &VAR_18->r->starts,
     "# of normal consumer starts in the mp_ring for this queue");
 FUNC_1(&VAR_17->ctx, VAR_26, VAR_10, "r_stalls",
     VAR_2, &VAR_18->r->stalls,
     "# of consumer stalls in the mp_ring for this queue");
 FUNC_1(&VAR_17->ctx, VAR_26, VAR_10, "r_restarts",
     VAR_2, &VAR_18->r->restarts,
     "# of consumer restarts in the mp_ring for this queue");
 FUNC_1(&VAR_17->ctx, VAR_26, VAR_10, "r_abdications",
     VAR_2, &VAR_18->r->abdications,
     "# of consumer abdications in the mp_ring for this queue");

 return (0);
}
