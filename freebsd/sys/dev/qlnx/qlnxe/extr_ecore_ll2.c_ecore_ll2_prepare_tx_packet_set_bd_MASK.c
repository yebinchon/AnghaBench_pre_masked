
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u16 ;
struct ecore_ll2_tx_pkt_info {scalar_t__ ecore_roce_flavor; int tx_dest; size_t vlan; int remove_stag; size_t l4_hdr_offset_w; size_t bd_flags; int num_of_bds; size_t first_frag_len; int first_frag; int calc_ip_len; int enable_l4_cksum; int enable_ip_cksum; } ;
struct ecore_ll2_tx_packet {TYPE_5__* bds_set; } ;
struct ecore_chain {int dummy; } ;
struct TYPE_9__ {int cur_send_frag_num; struct ecore_chain txq_chain; } ;
struct TYPE_8__ {scalar_t__ conn_type; } ;
struct ecore_ll2_info {TYPE_3__ tx_queue; TYPE_2__ input; int cid; int queue_id; } ;
struct ecore_hwfn {TYPE_1__* p_dev; } ;
struct TYPE_10__ {int as_bitfield; } ;
struct TYPE_12__ {int lo; int hi; } ;
struct core_tx_bd {int nw_vlan_or_lb_echo; size_t bitfield1; int nbytes; TYPE_4__ bd_data; TYPE_6__ addr; } ;
typedef enum core_tx_dest { ____Placeholder_core_tx_dest } core_tx_dest ;
typedef enum core_roce_flavor_type { ____Placeholder_core_roce_flavor_type } core_roce_flavor_type ;
struct TYPE_11__ {scalar_t__ frag_len; scalar_t__ tx_frag; struct core_tx_bd* txq_bd; } ;
struct TYPE_7__ {int mf_bits; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (TYPE_6__,int ) ;
 int FUNC_1 (struct ecore_hwfn*,int,char*,int ,int ,scalar_t__,size_t,size_t,int,int ,int ) ;
 scalar_t__ FUNC_2 (struct ecore_hwfn*) ;
 scalar_t__ VAR_14 ;



 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 size_t VAR_20 ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (int ) ;
 struct core_tx_bd* VAR_21 ;
 scalar_t__ FUNC_5 (int ,int *) ;
 int FUNC_6 (size_t,int ,int) ;
 size_t FUNC_7 (struct ecore_chain*) ;
 scalar_t__ FUNC_8 (struct ecore_chain*) ;

__attribute__((used)) static void FUNC_9(
  struct ecore_hwfn *VAR_22,
  struct ecore_ll2_info *VAR_23,
  struct ecore_ll2_tx_packet *VAR_24,
  struct ecore_ll2_tx_pkt_info *VAR_25)
{
 struct ecore_chain *VAR_26 = &VAR_23->tx_queue.txq_chain;
 u16 VAR_27 = FUNC_7(VAR_26);
 struct core_tx_bd *VAR_28 = VAR_21;
 enum core_roce_flavor_type VAR_29;
 enum core_tx_dest VAR_30;
 u16 VAR_31 = 0, VAR_32;

 VAR_29 = (VAR_25->ecore_roce_flavor == VAR_14) ?
  VAR_0 : VAR_1;

 switch (VAR_25->tx_dest) {
 case 128:
  VAR_30 = VAR_13;
  break;
 case 129:
  VAR_30 = VAR_12;
  break;
 case 130:
  VAR_30 = VAR_11;
  break;
 default:
  VAR_30 = VAR_12;
  break;
 }

 VAR_28 = (struct core_tx_bd*)FUNC_8(VAR_26);

 if (FUNC_2(VAR_22) &&
     (VAR_23->input.conn_type == VAR_16)) {
  VAR_28->nw_vlan_or_lb_echo =
   FUNC_3(VAR_20);
 } else {
  VAR_28->nw_vlan_or_lb_echo = FUNC_3(VAR_25->vlan);
  if (FUNC_5(VAR_17, &VAR_22->p_dev->mf_bits) &&
      (VAR_23->input.conn_type == VAR_15))
   VAR_25->remove_stag = 1;
 }

 FUNC_6(VAR_28->bitfield1, VAR_9,
    FUNC_3(VAR_25->l4_hdr_offset_w));
 FUNC_6(VAR_28->bitfield1, VAR_10, VAR_30);
 VAR_31 |= VAR_25->bd_flags;
 FUNC_6(VAR_31, VAR_8, 0x1);
 FUNC_6(VAR_31, VAR_6, VAR_25->num_of_bds);
 FUNC_6(VAR_31, VAR_7, VAR_29);
 FUNC_6(VAR_31, VAR_3, !!(VAR_25->enable_ip_cksum));
 FUNC_6(VAR_31, VAR_5, !!(VAR_25->enable_l4_cksum));
 FUNC_6(VAR_31, VAR_4, !!(VAR_25->calc_ip_len));
 FUNC_6(VAR_31, VAR_2,
    !!(VAR_25->remove_stag));

 VAR_28->bd_data.as_bitfield = FUNC_3(VAR_31);
 FUNC_0(VAR_28->addr, VAR_25->first_frag);
 VAR_28->nbytes = FUNC_3(VAR_25->first_frag_len);

 FUNC_1(VAR_22, (VAR_19 | VAR_18),
     "LL2 [q 0x%02x cid 0x%08x type 0x%08x] Tx Producer at [0x%04x] - set with a %04x bytes %02x BDs buffer at %08x:%08x\n",
     VAR_23->queue_id, VAR_23->cid, VAR_23->input.conn_type,
     VAR_27, VAR_25->first_frag_len, VAR_25->num_of_bds,
     FUNC_4(VAR_28->addr.hi),
     FUNC_4(VAR_28->addr.lo));

 if (VAR_23->tx_queue.cur_send_frag_num == VAR_25->num_of_bds)
  return;


 for (VAR_32 = VAR_23->tx_queue.cur_send_frag_num;
      VAR_32 < VAR_25->num_of_bds; VAR_32++) {
  struct core_tx_bd **VAR_33 = &VAR_24->bds_set[VAR_32].txq_bd;

  *VAR_33 = (struct core_tx_bd *)FUNC_8(VAR_26);
  (*VAR_33)->bd_data.as_bitfield = 0;
  (*VAR_33)->bitfield1 = 0;
  VAR_24->bds_set[VAR_32].tx_frag = 0;
  VAR_24->bds_set[VAR_32].frag_len = 0;
 }
}
