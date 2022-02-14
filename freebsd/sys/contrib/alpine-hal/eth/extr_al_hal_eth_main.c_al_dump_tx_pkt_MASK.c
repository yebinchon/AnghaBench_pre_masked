
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct al_udma_q {int qid; TYPE_3__* udma; } ;
struct al_eth_pkt {int flags; int tunnel_mode; int l3_proto_idx; int num_of_bufs; TYPE_2__* bufs; TYPE_1__* meta; int vlan_mod_del_count; int vlan_mod_add_count; int source_vlan_count; int outer_l3_proto_idx; int l4_proto_idx; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {int len; scalar_t__ addr; } ;
struct TYPE_4__ {int words_valid; int outer_l3_len; int outer_l3_offset; int ts_index; int mss_val; int l4_header_len; int l3_header_offset; int l3_header_len; int store; } ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*,int ,int ,...) ;

__attribute__((used)) static void
FUNC_1(struct al_udma_q *VAR_8, struct al_eth_pkt *VAR_9)
{
 const char *VAR_10 = (VAR_9->flags & VAR_7) ? "TSO" : "";
 const char *VAR_11 = (VAR_9->flags & VAR_2) ? "L3 CSUM" : "";
 const char *VAR_12 = (VAR_9->flags & VAR_4) ?
   ((VAR_9->flags & VAR_5) ? "L4 PARTIAL CSUM" : "L4 FULL CSUM") : "";
 const char *VAR_13 = (VAR_9->flags & VAR_3) ? "Disable FCS" : "";
 const char *VAR_14 = (VAR_9->flags & VAR_6) ? "TX_PTP" : "";
 const char *VAR_15 = "unknown";
 const char *VAR_16 = "unknown";
 const char *VAR_17 = "N/A";
 const char *VAR_18 = (((VAR_9->tunnel_mode &
    VAR_1) == VAR_1) ?
    "TUNNEL_WITH_UDP" :
    (((VAR_9->tunnel_mode &
    VAR_0) == VAR_0) ?
    "TUNNEL_NO_UDP" : ""));
 uint32_t VAR_19 = 0;
 int VAR_20;

 FUNC_0("[%s %d]: flags: %s %s %s %s %s %s\n", VAR_8->udma->name, VAR_8->qid,
   VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_18);

 switch (VAR_9->l3_proto_idx) {
 case 131:
  VAR_15 = "IPv4";
  break;
 case 130:
  VAR_15 = "IPv6";
  break;
 default:
  VAR_15 = "unknown";
  break;
 }

 switch (VAR_9->l4_proto_idx) {
 case 129:
  VAR_16 = "TCP";
  break;
 case 128:
  VAR_16 = "UDP";
  break;
 default:
  VAR_16 = "unknown";
  break;
 }

 switch (VAR_9->outer_l3_proto_idx) {
 case 131:
  VAR_17 = "IPv4";
  break;
 case 130:
  VAR_17 = "IPv6";
  break;
 default:
  VAR_17 = "N/A";
  break;
 }

 FUNC_0("[%s %d]: L3 proto: %d (%s). L4 proto: %d (%s). Outer_L3 proto: %d (%s). vlan source count %d. mod add %d. mod del %d\n",
   VAR_8->udma->name, VAR_8->qid, VAR_9->l3_proto_idx,
   VAR_15, VAR_9->l4_proto_idx, VAR_16,
   VAR_9->outer_l3_proto_idx, VAR_17,
   VAR_9->source_vlan_count, VAR_9->vlan_mod_add_count,
   VAR_9->vlan_mod_del_count);

 if (VAR_9->meta) {
  const char * VAR_21 = VAR_9->meta->store ? "Yes" : "No";
  const char *VAR_22 = (VAR_9->flags & VAR_6) ? "Yes" : "No";

  FUNC_0("[%s %d]: tx pkt with meta data. words valid %x\n",
   VAR_8->udma->name, VAR_8->qid,
   VAR_9->meta->words_valid);
  FUNC_0("[%s %d]: meta: store to cache %s. l3 hdr len %d. l3 hdr offset %d. "
   "l4 hdr len %d. mss val %d ts_index %d ts_val:%s\n"
   , VAR_8->udma->name, VAR_8->qid, VAR_21,
   VAR_9->meta->l3_header_len, VAR_9->meta->l3_header_offset,
   VAR_9->meta->l4_header_len, VAR_9->meta->mss_val,
   VAR_9->meta->ts_index, VAR_22);
  FUNC_0("outer_l3_hdr_offset %d. outer_l3_len %d.\n",
   VAR_9->meta->outer_l3_offset, VAR_9->meta->outer_l3_len);
 }

 FUNC_0("[%s %d]: num of bufs: %d\n", VAR_8->udma->name, VAR_8->qid,
  VAR_9->num_of_bufs);
 for (VAR_20 = 0; VAR_20 < VAR_9->num_of_bufs; VAR_20++) {
  FUNC_0("eth [%s %d]: buf[%d]: len 0x%08x. address 0x%016llx\n", VAR_8->udma->name, VAR_8->qid,
   VAR_20, VAR_9->bufs[VAR_20].len, (unsigned long long)VAR_9->bufs[VAR_20].addr);
  VAR_19 += VAR_9->bufs[VAR_20].len;
 }
 FUNC_0("[%s %d]: total len: 0x%08x\n", VAR_8->udma->name, VAR_8->qid, VAR_19);

}
