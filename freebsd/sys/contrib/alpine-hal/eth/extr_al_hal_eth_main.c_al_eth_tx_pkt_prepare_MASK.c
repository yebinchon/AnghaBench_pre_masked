
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int buf_ptr; void* meta_ctrl; void* len_ctrl; } ;
struct TYPE_8__ {void* meta2; void* meta1; void* meta_ctrl; void* len_ctrl; } ;
union al_udma_desc {TYPE_2__ tx; TYPE_1__ tx_meta; } ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct al_udma_q {scalar_t__ adapter_rev_id; int qid; TYPE_4__* udma; } ;
struct al_eth_pkt {scalar_t__ flags; scalar_t__ num_of_bufs; scalar_t__ l3_proto_idx; scalar_t__ l4_proto_idx; scalar_t__ source_vlan_count; scalar_t__ vlan_mod_add_count; scalar_t__ vlan_mod_del_count; scalar_t__ vlan_mod_v1_ether_sel; scalar_t__ vlan_mod_v1_vid_sel; scalar_t__ vlan_mod_v1_pbits_sel; scalar_t__ tunnel_mode; scalar_t__ outer_l3_proto_idx; TYPE_3__* bufs; TYPE_6__* ext_meta_data; TYPE_5__* meta; scalar_t__ tgtid; } ;
struct TYPE_13__ {int * tx_crypto_data; } ;
struct TYPE_12__ {int words_valid; scalar_t__ vlan1_cfi_sel; int vlan2_vid_sel; int vlan2_cfi_sel; int vlan2_pbits_sel; int vlan2_ether_sel; scalar_t__ vlan1_new_vid; int vlan1_new_cfi; int vlan1_new_pbits; int vlan2_new_vid; int vlan2_new_cfi; int vlan2_new_pbits; scalar_t__ l3_header_len; scalar_t__ l3_header_offset; int l4_header_len; scalar_t__ ts_index; int mss_val; int outer_l3_offset; int outer_l3_len; scalar_t__ store; } ;
struct TYPE_11__ {int name; } ;
struct TYPE_10__ {scalar_t__ len; int addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 int VAR_38 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int ,...) ;
 int FUNC_2 (union al_udma_desc*) ;
 int FUNC_3 (struct al_udma_q*,struct al_eth_pkt*) ;
 int FUNC_4 (struct al_udma_q*,scalar_t__*,TYPE_6__*) ;
 scalar_t__ FUNC_5 (TYPE_6__*) ;
 scalar_t__ FUNC_6 (struct al_udma_q*) ;
 union al_udma_desc* FUNC_7 (struct al_udma_q*) ;
 scalar_t__ FUNC_8 (struct al_udma_q*) ;
 void* FUNC_9 (scalar_t__) ;
 int FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;

int FUNC_12(struct al_udma_q *VAR_39, struct al_eth_pkt *VAR_40)
{
 union al_udma_desc *VAR_41;
 uint32_t VAR_42;
 uint32_t VAR_43 = VAR_33 |
   VAR_32 |
   (VAR_40->flags & VAR_3);
 uint64_t VAR_44 = ((uint64_t)VAR_40->tgtid) << VAR_38;
 uint32_t VAR_45;
 uint32_t VAR_46;
 int VAR_47;

 FUNC_1("[%s %d]: new tx pkt\n", VAR_39->udma->name, VAR_39->qid);

 FUNC_3(VAR_39, VAR_40);

 VAR_42 = VAR_40->num_of_bufs;
 if (VAR_40->meta) {
  VAR_42 += 1;
 }
 if (FUNC_11(FUNC_6(VAR_39) < VAR_42)) {
  FUNC_1("[%s %d]: failed to allocate (%d) descriptors",
    VAR_39->udma->name, VAR_39->qid, VAR_42);
  return 0;
 }
 if (VAR_40->meta) {
  uint32_t VAR_48 = 0;
  uint32_t VAR_49 = 0;
  uint32_t VAR_50 = 0;
  uint32_t VAR_51 = 0;

  VAR_48 |= VAR_43 | VAR_36;
  VAR_48 &= ~VAR_32;
  VAR_43 &= ~(VAR_33 | VAR_3);

  VAR_41 = FUNC_7(VAR_39);

  VAR_46 = FUNC_8(VAR_39) <<
   VAR_37;

  VAR_48 |= VAR_46;
  VAR_48 |= VAR_40->meta->words_valid << 12;

  if (VAR_40->meta->store)
   VAR_48 |= VAR_21;

  if (VAR_40->meta->words_valid & 1) {
   VAR_48 |= VAR_40->meta->vlan1_cfi_sel;
   VAR_48 |= VAR_40->meta->vlan2_vid_sel << 2;
   VAR_48 |= VAR_40->meta->vlan2_cfi_sel << 4;
   VAR_48 |= VAR_40->meta->vlan2_pbits_sel << 6;
   VAR_48 |= VAR_40->meta->vlan2_ether_sel << 8;
  }

  if (VAR_40->meta->words_valid & 2) {
   VAR_49 = VAR_40->meta->vlan1_new_vid;
   VAR_49 |= VAR_40->meta->vlan1_new_cfi << 12;
   VAR_49 |= VAR_40->meta->vlan1_new_pbits << 13;
   VAR_49 |= VAR_40->meta->vlan2_new_vid << 16;
   VAR_49 |= VAR_40->meta->vlan2_new_cfi << 28;
   VAR_49 |= VAR_40->meta->vlan2_new_pbits << 29;
  }

  if (VAR_40->meta->words_valid & 4) {
   uint32_t VAR_52;

   VAR_50 = VAR_40->meta->l3_header_len & VAR_10;
   VAR_50 |= (VAR_40->meta->l3_header_offset & VAR_11) <<
    VAR_12;
   VAR_50 |= (VAR_40->meta->l4_header_len & 0x3f) << 16;

   if (FUNC_11(VAR_40->flags & VAR_7))
    VAR_48 |= VAR_40->meta->ts_index <<
     VAR_14;
   else
    VAR_48 |= (((VAR_40->meta->mss_val & 0x3c00) >> 10)
      << VAR_14);
   VAR_50 |= ((VAR_40->meta->mss_val & 0x03ff)
     << VAR_13);





   VAR_52 = (VAR_40->meta->outer_l3_offset >> 1);

   VAR_48 |=
    (((VAR_52 &
       VAR_17) >> 3)
       << VAR_18);

   VAR_51 |=
    ((VAR_52 &
       VAR_19)
       << VAR_20);





   VAR_51 |=
    (((VAR_40->meta->outer_l3_len >> 2) &
       VAR_15)
       << VAR_16);
  }

  VAR_41->tx_meta.len_ctrl = FUNC_9(VAR_48);
  VAR_41->tx_meta.meta_ctrl = FUNC_9(VAR_49);
  VAR_41->tx_meta.meta1 = FUNC_9(VAR_50);
  VAR_41->tx_meta.meta2 = FUNC_9(VAR_51);
  FUNC_2(VAR_41);
 }

 VAR_45 = VAR_40->flags & VAR_23;


 FUNC_0((VAR_40->flags & (VAR_4|VAR_5)) !=
    VAR_5);


 FUNC_0((VAR_40->flags & (VAR_8|VAR_7)) !=
    (VAR_8|VAR_7));

 VAR_45 |= VAR_40->l3_proto_idx;
 VAR_45 |= VAR_40->l4_proto_idx << VAR_9;
 VAR_45 |= VAR_40->source_vlan_count << VAR_25;
 VAR_45 |= VAR_40->vlan_mod_add_count << VAR_27;
 VAR_45 |= VAR_40->vlan_mod_del_count << VAR_28;
 VAR_45 |= VAR_40->vlan_mod_v1_ether_sel << VAR_29;
 VAR_45 |= VAR_40->vlan_mod_v1_vid_sel << VAR_31;
 VAR_45 |= VAR_40->vlan_mod_v1_pbits_sel << VAR_30;






 VAR_45 |= VAR_40->tunnel_mode << VAR_26;
 if (VAR_40->outer_l3_proto_idx == VAR_0)
  VAR_45 |= 1 << VAR_22;

 VAR_43 |= VAR_40->flags & VAR_24;
 for(VAR_47 = 0; VAR_47 < VAR_40->num_of_bufs; VAR_47++ ) {
  uint32_t VAR_53 = VAR_43;

  VAR_41 = FUNC_7(VAR_39);

  VAR_46 = FUNC_8(VAR_39) <<
   VAR_37;

  VAR_53 |= VAR_46;

  if (VAR_47 == (VAR_40->num_of_bufs - 1))
   VAR_53 |= VAR_34;


  VAR_43 &= VAR_6;
  VAR_43 |= VAR_32;

  VAR_53 |= VAR_40->bufs[VAR_47].len & VAR_35;
  VAR_41->tx.len_ctrl = FUNC_9(VAR_53);
  if (VAR_47 == 0)
   VAR_41->tx.meta_ctrl = FUNC_9(VAR_45);
  VAR_41->tx.buf_ptr = FUNC_10(
   VAR_40->bufs[VAR_47].addr | VAR_44);
  FUNC_2(VAR_41);
 }

 FUNC_1("[%s %d]: pkt descriptors written into the tx queue. descs num (%d)\n",
  VAR_39->udma->name, VAR_39->qid, VAR_42);

 return VAR_42;
}
