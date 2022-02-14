
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct tx_ring {int me; int * tx_base; struct adapter* adapter; } ;
struct e1000_adv_tx_context_desc {void* mss_l4len_idx; void* seqnum_seed; void* type_tucmd_mlhl; void* vlan_macip_lens; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct TYPE_7__ {TYPE_1__ mac; } ;
struct adapter {TYPE_2__ hw; } ;
typedef TYPE_3__* if_pkt_info_t ;
struct TYPE_8__ {int ipi_csum_flags; int ipi_len; size_t ipi_pidx; int ipi_mflags; int ipi_vtag; int ipi_ehdrlen; int ipi_etype; int ipi_ip_hlen; int ipi_ipproto; } ;


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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;


 int VAR_18 ;



 int VAR_19 ;
 scalar_t__ VAR_20 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct tx_ring*,TYPE_3__*,int*,int*) ;

__attribute__((used)) static int
FUNC_2(struct tx_ring *VAR_21, if_pkt_info_t VAR_22, u32 *VAR_23, u32 *VAR_24)
{
 struct e1000_adv_tx_context_desc *VAR_25;
 struct adapter *VAR_26 = VAR_21->adapter;
 u32 VAR_27, VAR_28;
 u32 VAR_29;
 VAR_29 = VAR_27 = VAR_28 = 0;


 if (VAR_22->ipi_csum_flags & VAR_6)
  return (FUNC_1(VAR_21, VAR_22, VAR_23, VAR_24));


 *VAR_24 |= VAR_22->ipi_len << VAR_10;


 VAR_25 = (struct e1000_adv_tx_context_desc *) &VAR_21->tx_base[VAR_22->ipi_pidx];






 if (VAR_22->ipi_mflags & VAR_19) {
  VAR_27 |= (VAR_22->ipi_vtag << VAR_16);
 } else if ((VAR_22->ipi_csum_flags & VAR_18) == 0) {
  return (0);
 }


 VAR_27 |= VAR_22->ipi_ehdrlen << VAR_9;

 switch(VAR_22->ipi_etype) {
 case 132:
  VAR_28 |= VAR_11;
  break;
 case 131:
  VAR_28 |= VAR_12;
  break;
 default:
  break;
 }

 VAR_27 |= VAR_22->ipi_ip_hlen;
 VAR_28 |= VAR_7 | VAR_8;

 switch (VAR_22->ipi_ipproto) {
 case 129:
  if (VAR_22->ipi_csum_flags & (VAR_4 | VAR_1)) {
   VAR_28 |= VAR_14;
   *VAR_24 |= VAR_17 << 8;
  }
  break;
 case 128:
  if (VAR_22->ipi_csum_flags & (VAR_5 | VAR_2)) {
   VAR_28 |= VAR_15;
   *VAR_24 |= VAR_17 << 8;
  }
  break;
 case 130:
  if (VAR_22->ipi_csum_flags & (VAR_3 | VAR_0)) {
   VAR_28 |= VAR_13;
   *VAR_24 |= VAR_17 << 8;
  }
  break;
 default:
  break;
 }


 if (VAR_26->hw.mac.type == VAR_20)
  VAR_29 = VAR_21->me << 4;


 VAR_25->vlan_macip_lens = FUNC_0(VAR_27);
 VAR_25->type_tucmd_mlhl = FUNC_0(VAR_28);
 VAR_25->seqnum_seed = FUNC_0(0);
 VAR_25->mss_l4len_idx = FUNC_0(VAR_29);

 return (1);
}
