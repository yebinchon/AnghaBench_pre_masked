
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xlp_port_ivars {int num_channels; int free_desc_sizes; int hw_parser_en; int ieee1588_inc_den; int ieee1588_inc_num; int type; int num_free_descs; int iface_fifo_size; int rxbuf_size; int pseq_fifo_size; void* tx_slots_reqd; void* rx_slots_reqd; int stg2_ms_credit; int stg2_frout_credit; int stg2_eh_credit; int stg1_2_credit; int max_pmem_offset; int max_ms_offset; int max_frout_offset; int max_eh_offset; int max_stg2_offset; int pktlen_fifo_size; int pkt_fifo_size; int ms_fifo_size; int frout_fifo_size; int eh_fifo_size; int stg2_fifo_size; scalar_t__ ieee1588_inc_intg; scalar_t__ ieee1588_tmr3; scalar_t__ ieee1588_tmr2; scalar_t__ ieee1588_tmr1; scalar_t__ ieee1588_ptpoff; scalar_t__ ieee1588_userval; scalar_t__ vlan_pri_en; scalar_t__ loopback_mode; } ;


 void* VAR_0 ;


 void* VAR_1 ;

 void* VAR_2 ;
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
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static void
FUNC_1(struct xlp_port_ivars *VAR_33)
{
 VAR_33->loopback_mode = 0;
 VAR_33->num_channels = 1;
 VAR_33->free_desc_sizes = 2048;
 VAR_33->vlan_pri_en = 0;
 VAR_33->hw_parser_en = 1;
 VAR_33->ieee1588_userval = 0;
 VAR_33->ieee1588_ptpoff = 0;
 VAR_33->ieee1588_tmr1 = 0;
 VAR_33->ieee1588_tmr2 = 0;
 VAR_33->ieee1588_tmr3 = 0;
 VAR_33->ieee1588_inc_intg = 0;
 VAR_33->ieee1588_inc_den = 1;
 VAR_33->ieee1588_inc_num = 1;

 if (FUNC_0()) {
  VAR_33->stg2_fifo_size = VAR_15;
  VAR_33->eh_fifo_size = VAR_3;
  VAR_33->frout_fifo_size = VAR_4;
  VAR_33->ms_fifo_size = VAR_10;
  VAR_33->pkt_fifo_size = VAR_12;
  VAR_33->pktlen_fifo_size = VAR_11;
  VAR_33->max_stg2_offset = VAR_9;
  VAR_33->max_eh_offset = VAR_5;
  VAR_33->max_frout_offset = VAR_6;
  VAR_33->max_ms_offset = VAR_7;
  VAR_33->max_pmem_offset = VAR_8;
  VAR_33->stg1_2_credit = VAR_13;
  VAR_33->stg2_eh_credit = VAR_14;
  VAR_33->stg2_frout_credit = VAR_16;
  VAR_33->stg2_ms_credit = VAR_17;
 } else {
  VAR_33->stg2_fifo_size = VAR_30;
  VAR_33->eh_fifo_size = VAR_18;
  VAR_33->frout_fifo_size = VAR_19;
  VAR_33->ms_fifo_size = VAR_25;
  VAR_33->pkt_fifo_size = VAR_27;
  VAR_33->pktlen_fifo_size = VAR_26;
  VAR_33->max_stg2_offset = VAR_24;
  VAR_33->max_eh_offset = VAR_20;
  VAR_33->max_frout_offset = VAR_21;
  VAR_33->max_ms_offset = VAR_22;
  VAR_33->max_pmem_offset = VAR_23;
  VAR_33->stg1_2_credit = VAR_28;
  VAR_33->stg2_eh_credit = VAR_29;
  VAR_33->stg2_frout_credit = VAR_31;
  VAR_33->stg2_ms_credit = VAR_32;
 }

 switch (VAR_33->type) {
 case 129:
  VAR_33->num_free_descs = 52;
  VAR_33->iface_fifo_size = 13;
  VAR_33->rxbuf_size = 128;
  VAR_33->rx_slots_reqd = VAR_1;
  VAR_33->tx_slots_reqd = VAR_1;
  if (FUNC_0())
      VAR_33->pseq_fifo_size = 30;
  else
      VAR_33->pseq_fifo_size = 62;
  break;
 case 130:
  VAR_33->num_free_descs = 150;
  VAR_33->rxbuf_size = 944;
  VAR_33->rx_slots_reqd = VAR_0;
  VAR_33->tx_slots_reqd = VAR_0;
  VAR_33->pseq_fifo_size = 225;
  VAR_33->iface_fifo_size = 55;
  break;
 case 128:
 default:
  VAR_33->num_free_descs = 150;
  VAR_33->rxbuf_size = 944;
  VAR_33->rx_slots_reqd = VAR_2;
  VAR_33->tx_slots_reqd = VAR_2;
  if (FUNC_0()) {
      VAR_33->pseq_fifo_size = 120;
      VAR_33->iface_fifo_size = 52;
  } else {
      VAR_33->pseq_fifo_size = 225;
      VAR_33->iface_fifo_size = 55;
  }
  break;
 }
}
