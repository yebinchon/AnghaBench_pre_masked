
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct xlp_port_ivars {scalar_t__ free_desc_sizes; int ieee1588_tmr3; int ieee1588_tmr2; int ieee1588_tmr1; int ieee1588_ptpoff; int ieee1588_userval; int ieee1588_inc_num; int ieee1588_inc_den; int ieee1588_inc_intg; int stg2_ms_credit; int stg2_frout_credit; int stg2_eh_credit; int stg1_2_credit; int max_pmem_offset; int max_ms_offset; int max_frout_offset; int max_eh_offset; int max_stg2_offset; int pktlen_fifo_size; int pkt_fifo_size; int ms_fifo_size; int frout_fifo_size; int eh_fifo_size; int stg2_fifo_size; int pseq_fifo_size; int tx_slots_reqd; int rx_slots_reqd; int rxbuf_size; int iface_fifo_size; int num_free_descs; int vlan_pri_en; int num_channels; int loopback_mode; int phy_addr; int mdio_bus; int type; int port; int block; int node; } ;
struct xlp_nae_ivars {struct xlp_block_ivars* block_ivars; } ;
struct xlp_block_ivars {struct xlp_port_ivars* port_ivars; } ;
struct nlm_xlpnae_softc {int nucores; int total_num_ports; TYPE_1__* portcfg; int total_free_desc; } ;
struct TYPE_2__ {int free_desc_sizes; int ucore_mask; int ieee1588_tmr3; int ieee1588_tmr2; int ieee1588_tmr1; int ieee1588_ptpoff; int ieee1588_userval; int ieee1588_inc_num; int ieee1588_inc_den; int ieee1588_inc_intg; int stg2_ms_credit; int stg2_frout_credit; int stg2_eh_credit; int stg1_2_credit; int max_pmem_offset; int max_ms_offset; int max_frout_offset; int max_eh_offset; int max_stg2_offset; int pktlen_fifo_size; int pkt_fifo_size; int ms_fifo_size; int frout_fifo_size; int eh_fifo_size; int stg2_fifo_size; int pseq_fifo_size; int tx_slots_reqd; int rx_slots_reqd; int rxbuf_size; int iface_fifo_size; int num_free_descs; int vlan_pri_en; int num_channels; int loopback_mode; int phy_addr; int mdio_bus; int type; int port; int block; int node; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int,int,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct nlm_xlpnae_softc *VAR_1, struct xlp_nae_ivars *VAR_2,
    int VAR_3, int VAR_4)
{
 int VAR_5;
 uint32_t VAR_6 = 0;
 struct xlp_block_ivars *VAR_7;
 struct xlp_port_ivars *VAR_8;

 VAR_7 = &(VAR_2->block_ivars[VAR_3]);
 VAR_8 = &(VAR_7->port_ivars[VAR_4 & 0x3]);

 VAR_1->portcfg[VAR_4].node = VAR_8->node;
 VAR_1->portcfg[VAR_4].block = VAR_8->block;
 VAR_1->portcfg[VAR_4].port = VAR_8->port;
 VAR_1->portcfg[VAR_4].type = VAR_8->type;
 VAR_1->portcfg[VAR_4].mdio_bus = VAR_8->mdio_bus;
 VAR_1->portcfg[VAR_4].phy_addr = VAR_8->phy_addr;
 VAR_1->portcfg[VAR_4].loopback_mode = VAR_8->loopback_mode;
 VAR_1->portcfg[VAR_4].num_channels = VAR_8->num_channels;
 if (VAR_8->free_desc_sizes != VAR_0) {
  FUNC_0("[%d, %d] Error: free_desc_sizes %d != %d\n",
      VAR_3, VAR_4, VAR_8->free_desc_sizes, VAR_0);
  return;
 }
 VAR_1->portcfg[VAR_4].free_desc_sizes = VAR_8->free_desc_sizes;
 for (VAR_5 = 0; VAR_5 < VAR_1->nucores; VAR_5++)
  VAR_6 |= (0x1 << VAR_5);
 VAR_1->portcfg[VAR_4].ucore_mask = VAR_6;
 VAR_1->portcfg[VAR_4].vlan_pri_en = VAR_8->vlan_pri_en;
 VAR_1->portcfg[VAR_4].num_free_descs = VAR_8->num_free_descs;
 VAR_1->portcfg[VAR_4].iface_fifo_size = VAR_8->iface_fifo_size;
 VAR_1->portcfg[VAR_4].rxbuf_size = VAR_8->rxbuf_size;
 VAR_1->portcfg[VAR_4].rx_slots_reqd = VAR_8->rx_slots_reqd;
 VAR_1->portcfg[VAR_4].tx_slots_reqd = VAR_8->tx_slots_reqd;
 VAR_1->portcfg[VAR_4].pseq_fifo_size = VAR_8->pseq_fifo_size;

 VAR_1->portcfg[VAR_4].stg2_fifo_size = VAR_8->stg2_fifo_size;
 VAR_1->portcfg[VAR_4].eh_fifo_size = VAR_8->eh_fifo_size;
 VAR_1->portcfg[VAR_4].frout_fifo_size = VAR_8->frout_fifo_size;
 VAR_1->portcfg[VAR_4].ms_fifo_size = VAR_8->ms_fifo_size;
 VAR_1->portcfg[VAR_4].pkt_fifo_size = VAR_8->pkt_fifo_size;
 VAR_1->portcfg[VAR_4].pktlen_fifo_size = VAR_8->pktlen_fifo_size;
 VAR_1->portcfg[VAR_4].max_stg2_offset = VAR_8->max_stg2_offset;
 VAR_1->portcfg[VAR_4].max_eh_offset = VAR_8->max_eh_offset;
 VAR_1->portcfg[VAR_4].max_frout_offset = VAR_8->max_frout_offset;
 VAR_1->portcfg[VAR_4].max_ms_offset = VAR_8->max_ms_offset;
 VAR_1->portcfg[VAR_4].max_pmem_offset = VAR_8->max_pmem_offset;
 VAR_1->portcfg[VAR_4].stg1_2_credit = VAR_8->stg1_2_credit;
 VAR_1->portcfg[VAR_4].stg2_eh_credit = VAR_8->stg2_eh_credit;
 VAR_1->portcfg[VAR_4].stg2_frout_credit = VAR_8->stg2_frout_credit;
 VAR_1->portcfg[VAR_4].stg2_ms_credit = VAR_8->stg2_ms_credit;
 VAR_1->portcfg[VAR_4].ieee1588_inc_intg = VAR_8->ieee1588_inc_intg;
 VAR_1->portcfg[VAR_4].ieee1588_inc_den = VAR_8->ieee1588_inc_den;
 VAR_1->portcfg[VAR_4].ieee1588_inc_num = VAR_8->ieee1588_inc_num;
 VAR_1->portcfg[VAR_4].ieee1588_userval = VAR_8->ieee1588_userval;
 VAR_1->portcfg[VAR_4].ieee1588_ptpoff = VAR_8->ieee1588_ptpoff;
 VAR_1->portcfg[VAR_4].ieee1588_tmr1 = VAR_8->ieee1588_tmr1;
 VAR_1->portcfg[VAR_4].ieee1588_tmr2 = VAR_8->ieee1588_tmr2;
 VAR_1->portcfg[VAR_4].ieee1588_tmr3 = VAR_8->ieee1588_tmr3;

 VAR_1->total_free_desc += VAR_1->portcfg[VAR_4].free_desc_sizes;
 VAR_1->total_num_ports++;
}
