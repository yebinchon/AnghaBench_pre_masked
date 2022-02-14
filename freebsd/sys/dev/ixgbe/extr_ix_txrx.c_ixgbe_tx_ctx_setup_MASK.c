
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ixgbe_adv_tx_context_desc {void* mss_l4len_idx; void* seqnum_seed; void* type_tucmd_mlhl; void* vlan_macip_lens; } ;
typedef TYPE_1__* if_pkt_info_t ;
struct TYPE_3__ {scalar_t__ ipi_vtag; scalar_t__ ipi_ehdrlen; int ipi_len; int ipi_csum_flags; int ipi_ip_hlen; int ipi_tcp_hlen; int ipi_tso_segsz; int ipi_flags; int ipi_ipproto; } ;


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
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (scalar_t__) ;
 void* FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(struct ixgbe_adv_tx_context_desc *VAR_28, if_pkt_info_t VAR_29)
{
 u32 VAR_30, VAR_31;
 u32 VAR_32, VAR_33, VAR_34, VAR_35;
 u8 VAR_36;

 VAR_35 = VAR_27;
 VAR_32 = VAR_33 = VAR_30 = VAR_31 = 0;

 VAR_30 |= (FUNC_0(VAR_29->ipi_vtag) << VAR_24);
 if (VAR_29->ipi_ehdrlen == 0) {
  VAR_36 = VAR_8;
  VAR_36 += (VAR_29->ipi_vtag != 0) ? VAR_9 : 0;
 } else
  VAR_36 = VAR_29->ipi_ehdrlen;
 VAR_30 |= VAR_36 << VAR_16;

 VAR_34 = VAR_29->ipi_len;

 if (VAR_29->ipi_csum_flags & VAR_7) {

  VAR_34 = VAR_29->ipi_len - VAR_36 - VAR_29->ipi_ip_hlen - VAR_29->ipi_tcp_hlen;
  VAR_33 |= (VAR_29->ipi_tso_segsz << VAR_17);
  VAR_33 |= (VAR_29->ipi_tcp_hlen << VAR_15);
 }

 VAR_32 |= VAR_34 << VAR_18;

 if (VAR_29->ipi_flags & VAR_11) {
  VAR_31 |= VAR_19;

  if (VAR_29->ipi_csum_flags & (VAR_0|VAR_7))
   VAR_32 |= VAR_25 << 8;
 } else if (VAR_29->ipi_flags & VAR_12)
  VAR_31 |= VAR_20;
 else
  VAR_35 = VAR_10;

 VAR_30 |= VAR_29->ipi_ip_hlen;

 switch (VAR_29->ipi_ipproto) {
 case 129:
  if (VAR_29->ipi_csum_flags & (VAR_5 | VAR_2 | VAR_7))
   VAR_31 |= VAR_22;
  else
   VAR_35 = VAR_10;
  break;
 case 128:
  if (VAR_29->ipi_csum_flags & (VAR_6 | VAR_3))
   VAR_31 |= VAR_23;
  else
   VAR_35 = VAR_10;
  break;
 case 130:
  if (VAR_29->ipi_csum_flags & (VAR_4 | VAR_1))
   VAR_31 |= VAR_21;
  else
   VAR_35 = VAR_10;
  break;
 default:
  VAR_35 = VAR_10;
  break;
 }

 if (VAR_35)
  VAR_32 |= VAR_26 << 8;

 VAR_31 |= VAR_13 | VAR_14;


 VAR_28->vlan_macip_lens = FUNC_1(VAR_30);
 VAR_28->type_tucmd_mlhl = FUNC_1(VAR_31);
 VAR_28->seqnum_seed = FUNC_1(0);
 VAR_28->mss_l4len_idx = FUNC_1(VAR_33);

 return (VAR_32);
}
