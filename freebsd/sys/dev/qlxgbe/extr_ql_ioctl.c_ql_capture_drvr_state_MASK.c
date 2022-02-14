
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_13__ {int dma_b; } ;
struct TYPE_15__ {TYPE_1__* sds_ring; TYPE_3__* rds_ring; TYPE_2__ tx_ring; } ;
struct TYPE_16__ {int num_tx_rings; int num_rds_rings; int num_sds_rings; TYPE_4__ dma_buf; int xmt_intr_coalesce; int rcv_intr_coalesce; int link_faults; int module_type; int link_up; int cable_oui; int cable_length; int link_speed; int mac_addr; int * drvr_state; } ;
struct TYPE_17__ {TYPE_5__ hw; } ;
typedef TYPE_6__ qla_host_t ;
typedef int qla_drvr_state_tx_t ;
typedef int qla_drvr_state_sds_t ;
typedef int qla_drvr_state_rx_t ;
struct TYPE_18__ {int saved; int tx_state_offset; int rx_state_offset; int sds_state_offset; int txr_offset; int num_tx_rings; int txr_size; int txr_entries; int rxr_offset; int rxr_size; int rxr_entries; int num_rx_rings; int sds_offset; int sds_ring_size; int sds_entries; int num_sds_rings; int xmt_intr_coalesce; int rcv_intr_coalesce; int link_faults; int module_type; int link_up; int cable_oui; int cable_length; int link_speed; int * mac_addr; int drvr_version_build; int drvr_version_minor; scalar_t__ drvr_version_major; int usec_ts; } ;
typedef TYPE_7__ qla_drvr_state_hdr_t ;
typedef int q80_tx_cmd_t ;
typedef int q80_stat_desc_t ;
typedef int q80_recv_desc_t ;
struct TYPE_14__ {int dma_b; } ;
struct TYPE_12__ {int dma_b; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int,int) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (TYPE_6__*,int *) ;
 int FUNC_3 (TYPE_6__*,int *) ;
 int FUNC_4 (TYPE_6__*,int *) ;
 int FUNC_5 () ;

void
FUNC_6(qla_host_t *VAR_7)
{
 uint8_t *VAR_8;
 uint8_t *VAR_9;
 qla_drvr_state_hdr_t *VAR_10;
 uint32_t VAR_11;
 int VAR_12;

 VAR_8 = VAR_7->hw.drvr_state;

 if (VAR_8 == ((void*)0))
  return;

 VAR_10 = (qla_drvr_state_hdr_t *)VAR_8;

 VAR_10->saved = 0;

 if (VAR_10->drvr_version_major) {
  VAR_10->saved = 1;
  return;
 }

 VAR_10->usec_ts = FUNC_5();

 VAR_10->drvr_version_major = VAR_5;
 VAR_10->drvr_version_minor = VAR_6;
 VAR_10->drvr_version_build = VAR_4;

 FUNC_1(VAR_7->hw.mac_addr, VAR_10->mac_addr, VAR_0);

 VAR_10->link_speed = VAR_7->hw.link_speed;
 VAR_10->cable_length = VAR_7->hw.cable_length;
 VAR_10->cable_oui = VAR_7->hw.cable_oui;
 VAR_10->link_up = VAR_7->hw.link_up;
 VAR_10->module_type = VAR_7->hw.module_type;
 VAR_10->link_faults = VAR_7->hw.link_faults;
 VAR_10->rcv_intr_coalesce = VAR_7->hw.rcv_intr_coalesce;
 VAR_10->xmt_intr_coalesce = VAR_7->hw.xmt_intr_coalesce;

 VAR_11 = sizeof (qla_drvr_state_hdr_t);
 VAR_10->tx_state_offset = FUNC_0(VAR_11, 64);

 VAR_9 = VAR_8 + VAR_10->tx_state_offset;

 FUNC_4(VAR_7, (qla_drvr_state_tx_t *)VAR_9);

 VAR_11 = VAR_7->hw.num_tx_rings * (sizeof (qla_drvr_state_tx_t));
 VAR_10->rx_state_offset = VAR_10->tx_state_offset + FUNC_0(VAR_11, 64);
 VAR_9 = VAR_8 + VAR_10->rx_state_offset;

 FUNC_2(VAR_7, (qla_drvr_state_rx_t *)VAR_9);

 VAR_11 = VAR_7->hw.num_rds_rings * (sizeof (qla_drvr_state_rx_t));
 VAR_10->sds_state_offset = VAR_10->rx_state_offset + FUNC_0(VAR_11, 64);
 VAR_9 = VAR_8 + VAR_10->sds_state_offset;

 FUNC_3(VAR_7, (qla_drvr_state_sds_t *)VAR_9);

 VAR_11 = VAR_7->hw.num_sds_rings * (sizeof (qla_drvr_state_sds_t));
 VAR_10->txr_offset = VAR_10->sds_state_offset + FUNC_0(VAR_11, 64);
 VAR_9 = VAR_8 + VAR_10->txr_offset;

 VAR_10->num_tx_rings = VAR_7->hw.num_tx_rings;
 VAR_10->txr_size = sizeof(q80_tx_cmd_t) * VAR_3;
 VAR_10->txr_entries = VAR_3;

 VAR_11 = VAR_10->num_tx_rings * VAR_10->txr_size;
 FUNC_1(VAR_7->hw.dma_buf.tx_ring.dma_b, VAR_9, VAR_11);

 VAR_10->rxr_offset = VAR_10->txr_offset + FUNC_0(VAR_11, 64);
 VAR_9 = VAR_8 + VAR_10->rxr_offset;

 VAR_10->rxr_size = sizeof(q80_recv_desc_t) * VAR_1;
 VAR_10->rxr_entries = VAR_1;
 VAR_10->num_rx_rings = VAR_7->hw.num_rds_rings;

 for (VAR_12 = 0; VAR_12 < VAR_7->hw.num_rds_rings; VAR_12++) {
  FUNC_1(VAR_7->hw.dma_buf.rds_ring[VAR_12].dma_b, VAR_9, VAR_10->rxr_size);
  VAR_9 += VAR_10->rxr_size;
 }

 VAR_11 = VAR_10->rxr_size * VAR_10->num_rx_rings;
 VAR_10->sds_offset = VAR_10->rxr_offset + FUNC_0(VAR_11, 64);
 VAR_10->sds_ring_size = sizeof(q80_stat_desc_t) * VAR_2;
 VAR_10->sds_entries = VAR_2;
 VAR_10->num_sds_rings = VAR_7->hw.num_sds_rings;

 VAR_9 = VAR_8 + VAR_10->sds_offset;
 for (VAR_12 = 0; VAR_12 < VAR_7->hw.num_sds_rings; VAR_12++) {
  FUNC_1(VAR_7->hw.dma_buf.sds_ring[VAR_12].dma_b, VAR_9, VAR_10->sds_ring_size);
  VAR_9 += VAR_10->sds_ring_size;
 }
 return;
}
