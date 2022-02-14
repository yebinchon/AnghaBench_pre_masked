
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct seq_file {struct pktgen_dev* private; } ;
struct TYPE_11__ {int s6_addr; } ;
struct TYPE_10__ {int s6_addr; } ;
struct TYPE_17__ {int s6_addr; } ;
struct TYPE_16__ {int s6_addr; } ;
struct TYPE_15__ {int s6_addr; } ;
struct TYPE_14__ {int s6_addr; } ;
struct TYPE_13__ {int s6_addr; } ;
struct TYPE_12__ {int s6_addr; } ;
struct pktgen_dev {int cflows; int flags; unsigned int nr_labels; int vlan_id; int svlan_id; int tos; int traffic_class; scalar_t__* result; int nflows; int cur_queue_map; int cur_udp_src; int cur_udp_dst; int cur_daddr; int cur_saddr; TYPE_2__ cur_in6_saddr; TYPE_1__ cur_in6_daddr; int cur_src_mac_offset; int cur_dst_mac_offset; int seq_num; int started_at; scalar_t__ errors; scalar_t__ sofar; scalar_t__ idle_acc; int stopped_at; scalar_t__ running; int svlan_cfi; int svlan_p; int vlan_cfi; int vlan_p; int * labels; int dst_mac_count; int src_mac_count; int udp_dst_max; int udp_dst_min; int udp_src_max; int udp_src_min; int dst_mac; int src_mac; TYPE_9__* odev; int src_max; int src_min; int dst_max; int dst_min; TYPE_8__ max_in6_daddr; TYPE_7__ min_in6_daddr; TYPE_6__ in6_daddr; TYPE_5__ max_in6_saddr; TYPE_4__ min_in6_saddr; TYPE_3__ in6_saddr; int queue_map_max; int queue_map_min; int lflow; int odevname; int clone_skb; scalar_t__ delay; int nfrags; int max_pkt_size; int min_pkt_size; scalar_t__ count; } ;
typedef int ktime_t ;
struct TYPE_18__ {int dev_addr; } ;


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
 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct seq_file*,char*,...) ;
 int FUNC_7 (struct seq_file*,char*) ;

__attribute__((used)) static int FUNC_8(struct seq_file *VAR_16, void *VAR_17)
{
 const struct pktgen_dev *VAR_18 = VAR_16->private;
 ktime_t VAR_19;
 u64 VAR_20;

 FUNC_6(VAR_16,
     "Params: count %llu  min_pkt_size: %u  max_pkt_size: %u\n",
     (unsigned long long)VAR_18->count, VAR_18->min_pkt_size,
     VAR_18->max_pkt_size);

 FUNC_6(VAR_16,
     "     frags: %d  delay: %llu  clone_skb: %d  ifname: %s\n",
     VAR_18->nfrags, (unsigned long long) VAR_18->delay,
     VAR_18->clone_skb, VAR_18->odevname);

 FUNC_6(VAR_16, "     flows: %u flowlen: %u\n", VAR_18->cflows,
     VAR_18->lflow);

 FUNC_6(VAR_16,
     "     queue_map_min: %u  queue_map_max: %u\n",
     VAR_18->queue_map_min,
     VAR_18->queue_map_max);

 if (VAR_18->flags & VAR_4) {
  char VAR_21[128], VAR_22[128], VAR_23[128];
  FUNC_1(VAR_21, VAR_18->in6_saddr.s6_addr);
  FUNC_1(VAR_22, VAR_18->min_in6_saddr.s6_addr);
  FUNC_1(VAR_23, VAR_18->max_in6_saddr.s6_addr);
  FUNC_6(VAR_16,
      "     saddr: %s  min_saddr: %s  max_saddr: %s\n", VAR_21,
      VAR_22, VAR_23);

  FUNC_1(VAR_21, VAR_18->in6_daddr.s6_addr);
  FUNC_1(VAR_22, VAR_18->min_in6_daddr.s6_addr);
  FUNC_1(VAR_23, VAR_18->max_in6_daddr.s6_addr);
  FUNC_6(VAR_16,
      "     daddr: %s  min_daddr: %s  max_daddr: %s\n", VAR_21,
      VAR_22, VAR_23);

 } else {
  FUNC_6(VAR_16,
      "     dst_min: %s  dst_max: %s\n",
      VAR_18->dst_min, VAR_18->dst_max);
  FUNC_6(VAR_16,
      "        src_min: %s  src_max: %s\n",
      VAR_18->src_min, VAR_18->src_max);
 }

 FUNC_7(VAR_16, "     src_mac: ");

 FUNC_6(VAR_16, "%pM ",
     FUNC_2(VAR_18->src_mac) ?
        VAR_18->odev->dev_addr : VAR_18->src_mac);

 FUNC_6(VAR_16, "dst_mac: ");
 FUNC_6(VAR_16, "%pM\n", VAR_18->dst_mac);

 FUNC_6(VAR_16,
     "     udp_src_min: %d  udp_src_max: %d"
     "  udp_dst_min: %d  udp_dst_max: %d\n",
     VAR_18->udp_src_min, VAR_18->udp_src_max,
     VAR_18->udp_dst_min, VAR_18->udp_dst_max);

 FUNC_6(VAR_16,
     "     src_mac_count: %d  dst_mac_count: %d\n",
     VAR_18->src_mac_count, VAR_18->dst_mac_count);

 if (VAR_18->nr_labels) {
  unsigned VAR_24;
  FUNC_6(VAR_16, "     mpls: ");
  for (VAR_24 = 0; VAR_24 < VAR_18->nr_labels; VAR_24++)
   FUNC_6(VAR_16, "%08x%s", FUNC_5(VAR_18->labels[VAR_24]),
       VAR_24 == VAR_18->nr_labels-1 ? "\n" : ", ");
 }

 if (VAR_18->vlan_id != 0xffff)
  FUNC_6(VAR_16, "     vlan_id: %u  vlan_p: %u  vlan_cfi: %u\n",
      VAR_18->vlan_id, VAR_18->vlan_p,
      VAR_18->vlan_cfi);

 if (VAR_18->svlan_id != 0xffff)
  FUNC_6(VAR_16, "     svlan_id: %u  vlan_p: %u  vlan_cfi: %u\n",
      VAR_18->svlan_id, VAR_18->svlan_p,
      VAR_18->svlan_cfi);

 if (VAR_18->tos)
  FUNC_6(VAR_16, "     tos: 0x%02x\n", VAR_18->tos);

 if (VAR_18->traffic_class)
  FUNC_6(VAR_16, "     traffic_class: 0x%02x\n", VAR_18->traffic_class);

 FUNC_6(VAR_16, "     Flags: ");

 if (VAR_18->flags & VAR_4)
  FUNC_6(VAR_16, "IPV6  ");

 if (VAR_18->flags & VAR_3)
  FUNC_6(VAR_16, "IPSRC_RND  ");

 if (VAR_18->flags & VAR_1)
  FUNC_6(VAR_16, "IPDST_RND  ");

 if (VAR_18->flags & VAR_11)
  FUNC_6(VAR_16, "TXSIZE_RND  ");

 if (VAR_18->flags & VAR_13)
  FUNC_6(VAR_16, "UDPSRC_RND  ");

 if (VAR_18->flags & VAR_12)
  FUNC_6(VAR_16, "UDPDST_RND  ");

 if (VAR_18->flags & VAR_7)
  FUNC_6(VAR_16, "MPLS_RND  ");

 if (VAR_18->flags & VAR_9)
  FUNC_6(VAR_16, "QUEUE_MAP_RND  ");

 if (VAR_18->flags & VAR_8)
  FUNC_6(VAR_16, "QUEUE_MAP_CPU  ");

 if (VAR_18->cflows) {
  if (VAR_18->flags & VAR_0)
   FUNC_6(VAR_16, "FLOW_SEQ  ");
  else
   FUNC_6(VAR_16, "FLOW_RND  ");
 }






 if (VAR_18->flags & VAR_6)
  FUNC_6(VAR_16, "MACSRC_RND  ");

 if (VAR_18->flags & VAR_5)
  FUNC_6(VAR_16, "MACDST_RND  ");

 if (VAR_18->flags & VAR_14)
  FUNC_6(VAR_16, "VID_RND  ");

 if (VAR_18->flags & VAR_10)
  FUNC_6(VAR_16, "SVID_RND  ");

 FUNC_7(VAR_16, "\n");


 VAR_19 = VAR_18->running ? FUNC_3() : VAR_18->stopped_at;
 VAR_20 = VAR_18->idle_acc;
 FUNC_0(VAR_20, VAR_15);

 FUNC_6(VAR_16,
     "Current:\n     pkts-sofar: %llu  errors: %llu\n",
     (unsigned long long)VAR_18->sofar,
     (unsigned long long)VAR_18->errors);

 FUNC_6(VAR_16,
     "     started: %lluus  stopped: %lluus idle: %lluus\n",
     (unsigned long long) FUNC_4(VAR_18->started_at),
     (unsigned long long) FUNC_4(VAR_19),
     (unsigned long long) VAR_20);

 FUNC_6(VAR_16,
     "     seq_num: %d  cur_dst_mac_offset: %d  cur_src_mac_offset: %d\n",
     VAR_18->seq_num, VAR_18->cur_dst_mac_offset,
     VAR_18->cur_src_mac_offset);

 if (VAR_18->flags & VAR_4) {
  char VAR_25[128], VAR_26[128];
  FUNC_1(VAR_25, VAR_18->cur_in6_daddr.s6_addr);
  FUNC_1(VAR_26, VAR_18->cur_in6_saddr.s6_addr);
  FUNC_6(VAR_16, "     cur_saddr: %s  cur_daddr: %s\n", VAR_26, VAR_25);
 } else
  FUNC_6(VAR_16, "     cur_saddr: 0x%x  cur_daddr: 0x%x\n",
      VAR_18->cur_saddr, VAR_18->cur_daddr);

 FUNC_6(VAR_16, "     cur_udp_dst: %d  cur_udp_src: %d\n",
     VAR_18->cur_udp_dst, VAR_18->cur_udp_src);

 FUNC_6(VAR_16, "     cur_queue_map: %u\n", VAR_18->cur_queue_map);

 FUNC_6(VAR_16, "     flows: %u\n", VAR_18->nflows);

 if (VAR_18->result[0])
  FUNC_6(VAR_16, "Result: %s\n", VAR_18->result);
 else
  FUNC_6(VAR_16, "Result: Idle\n");

 return 0;
}
