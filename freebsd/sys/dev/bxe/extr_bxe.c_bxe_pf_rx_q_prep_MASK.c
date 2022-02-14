
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint16_t ;
struct rxq_pause_params {int sge_th_hi; scalar_t__ bd_th_hi; int rcq_th_hi; int pri_map; int rcq_th_lo; int bd_th_lo; int sge_th_lo; } ;
struct ecore_rxq_setup_params {int max_sges_pkt; int silent_removal_mask; int silent_removal_value; int sb_cq_index; int fw_sb_id; int cache_line_log; int max_tpa_queues; void* mcast_engine_id; void* rss_engine_id; void* sge_buf_sz; void* tpa_agg_sz; int cl_qzone_id; scalar_t__ buf_sz; scalar_t__ rcq_np_map; scalar_t__ rcq_map; int sge_map; int dscr_map; } ;
struct TYPE_9__ {int afex_def_vlan_tag; } ;
struct TYPE_10__ {TYPE_4__ mf_info; } ;
struct bxe_softc {int mtu; void* max_aggregation_size; scalar_t__ rx_ring_size; TYPE_5__ devinfo; scalar_t__ dropless_fc; } ;
struct TYPE_8__ {scalar_t__ paddr; } ;
struct TYPE_7__ {int paddr; } ;
struct TYPE_6__ {int paddr; } ;
struct bxe_fastpath {int fw_sb_id; int cl_qzone_id; scalar_t__ rx_buf_size; TYPE_3__ rcq_dma; TYPE_2__ rx_sge_dma; TYPE_1__ rx_dma; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct bxe_softc*) ;
 int FUNC_1 (struct bxe_softc*) ;
 int FUNC_2 (struct bxe_softc*,char*) ;
 int VAR_1 ;
 int FUNC_3 (struct bxe_softc*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (struct bxe_softc*) ;
 int FUNC_5 (struct bxe_softc*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (struct bxe_softc*) ;
 int FUNC_7 (struct bxe_softc*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_8 (struct bxe_softc*) ;
 int VAR_12 ;
 int FUNC_9 (int) ;
 int VAR_13 ;
 int FUNC_10 (struct bxe_softc*) ;
 int FUNC_11 (struct bxe_softc*) ;
 scalar_t__ FUNC_12 (int ,int) ;

__attribute__((used)) static void
FUNC_13(struct bxe_softc *VAR_14,
                 struct bxe_fastpath *VAR_15,
                 struct rxq_pause_params *VAR_16,
                 struct ecore_rxq_setup_params *VAR_17)
{
    uint8_t VAR_18 = 0;
    uint16_t VAR_19 = 0;
    uint16_t VAR_20 = 0;

    VAR_16->sge_th_lo = FUNC_11(VAR_14);
    VAR_16->sge_th_hi = FUNC_10(VAR_14);


    if (VAR_14->dropless_fc &&
            (VAR_16->sge_th_hi + VAR_3) >
            (VAR_11 * VAR_10)) {
        FUNC_2(VAR_14, "sge ring threshold limit\n");
    }


    VAR_20 = (2 * VAR_14->mtu);
    if (VAR_20 < VAR_14->max_aggregation_size) {
        VAR_20 = VAR_14->max_aggregation_size;
    }

    VAR_18 = FUNC_9(VAR_14->mtu) >> VAR_13;
    VAR_18 = ((VAR_18 + VAR_6 - 1) &
                   (~(VAR_6 - 1))) >> VAR_7;
    VAR_19 = (uint16_t)FUNC_12(VAR_12, 0xffff);


    if (!FUNC_3(VAR_14)) {
        VAR_16->bd_th_lo = FUNC_1(VAR_14);
        VAR_16->bd_th_hi = FUNC_0(VAR_14);

        VAR_16->rcq_th_lo = FUNC_7(VAR_14);
        VAR_16->rcq_th_hi = FUNC_6(VAR_14);


        if (VAR_14->dropless_fc &&
            VAR_16->bd_th_hi + VAR_3 >
            VAR_14->rx_ring_size) {
            FUNC_2(VAR_14, "rx bd ring threshold limit\n");
        }

        if (VAR_14->dropless_fc &&
            VAR_16->rcq_th_hi + VAR_3 >
            VAR_8 * VAR_9) {
            FUNC_2(VAR_14, "rcq ring threshold limit\n");
        }

        VAR_16->pri_map = 1;
    }


    VAR_17->dscr_map = VAR_15->rx_dma.paddr;
    VAR_17->sge_map = VAR_15->rx_sge_dma.paddr;
    VAR_17->rcq_map = VAR_15->rcq_dma.paddr;
    VAR_17->rcq_np_map = (VAR_15->rcq_dma.paddr + VAR_0);





    VAR_17->buf_sz = (VAR_15->rx_buf_size -
                        VAR_5);

    VAR_17->cl_qzone_id = VAR_15->cl_qzone_id;
    VAR_17->tpa_agg_sz = VAR_20;
    VAR_17->sge_buf_sz = VAR_19;
    VAR_17->max_sges_pkt = VAR_18;
    VAR_17->rss_engine_id = FUNC_8(VAR_14);
    VAR_17->mcast_engine_id = FUNC_8(VAR_14);






    VAR_17->max_tpa_queues = FUNC_5(VAR_14);

    VAR_17->cache_line_log = VAR_1;
    VAR_17->fw_sb_id = VAR_15->fw_sb_id;

    VAR_17->sb_cq_index = VAR_4;





    if (FUNC_4(VAR_14)) {
        VAR_17->silent_removal_value =
            VAR_14->devinfo.mf_info.afex_def_vlan_tag;
        VAR_17->silent_removal_mask = VAR_2;
    }
}
