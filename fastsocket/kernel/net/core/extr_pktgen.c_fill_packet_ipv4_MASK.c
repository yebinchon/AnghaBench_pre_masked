
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct udphdr {scalar_t__ check; void* len; void* dest; void* source; } ;
struct timeval {int tv_usec; int tv_sec; } ;
struct sk_buff {int network_header; int tail; int transport_header; int mac_header; int len; int data_len; int pkt_type; struct net_device* dev; void* protocol; } ;
struct pktgen_hdr {void* tv_usec; void* tv_sec; void* seq_num; void* pgh_magic; } ;
struct pktgen_dev {int nr_labels; int vlan_id; int cur_pkt_size; int pkt_overhead; int svlan_id; int cur_udp_src; int cur_udp_dst; int ip_id; int nfrags; int seq_num; int cur_daddr; int cur_saddr; int tos; int hh; int vlan_p; int vlan_cfi; int svlan_p; int svlan_cfi; int result; int cur_queue_map; } ;
struct page {int dummy; } ;
struct net_device {int hard_header_len; } ;
struct iphdr {int ihl; int version; int ttl; scalar_t__ check; void* tot_len; scalar_t__ frag_off; void* id; int daddr; int saddr; int protocol; int tos; } ;
typedef int __u8 ;
typedef int __u32 ;
typedef int __be32 ;
typedef void* __be16 ;
struct TYPE_4__ {int nr_frags; TYPE_1__* frags; } ;
struct TYPE_3__ {int size; scalar_t__ page_offset; struct page* page; } ;


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
 struct sk_buff* FUNC_0 (struct net_device*,int,int ) ;
 struct page* FUNC_1 (int,int ) ;
 void* FUNC_2 (int,int ,int ) ;
 int FUNC_3 (struct timeval*) ;
 int FUNC_4 (struct page*) ;
 void* FUNC_5 (int ) ;
 void* FUNC_6 (int) ;
 scalar_t__ FUNC_7 (void*,int) ;
 struct iphdr* FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (struct pktgen_hdr*,int ,int) ;
 int FUNC_11 (struct pktgen_dev*) ;
 int FUNC_12 (int *,struct pktgen_dev*) ;
 int FUNC_13 (struct pktgen_dev*,struct sk_buff*,void*) ;
 scalar_t__ FUNC_14 (struct sk_buff*,int) ;
 struct pktgen_hdr* FUNC_15 (struct sk_buff*,int) ;
 int FUNC_16 (struct sk_buff*,int) ;
 int FUNC_17 (struct sk_buff*,int ) ;
 TYPE_2__* FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (int ,char*) ;
 struct udphdr* FUNC_20 (struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_21(struct net_device *VAR_12,
     struct pktgen_dev *VAR_13)
{
 struct sk_buff *VAR_14 = ((void*)0);
 __u8 *VAR_15;
 struct udphdr *VAR_16;
 int VAR_17, VAR_18;
 struct iphdr *VAR_19;
 struct pktgen_hdr *VAR_20 = ((void*)0);
 __be16 VAR_21 = FUNC_6(VAR_2);
 __be32 *VAR_22;
 __be16 *VAR_23 = ((void*)0);
 __be16 *VAR_24 = ((void*)0);
 __be16 *VAR_25 = ((void*)0);
 __be16 *VAR_26 = ((void*)0);
 u16 VAR_27;

 if (VAR_13->nr_labels)
  VAR_21 = FUNC_6(VAR_3);

 if (VAR_13->vlan_id != 0xffff)
  VAR_21 = FUNC_6(VAR_1);




 VAR_27 = VAR_13->cur_queue_map;
 FUNC_11(VAR_13);

 VAR_17 = (VAR_12->hard_header_len + 16) & ~0xf;
 VAR_14 = FUNC_0(VAR_12,
     VAR_13->cur_pkt_size + 64
     + VAR_17 + VAR_13->pkt_overhead, VAR_5);
 if (!VAR_14) {
  FUNC_19(VAR_13->result, "No memory");
  return ((void*)0);
 }

 FUNC_16(VAR_14, VAR_17);


 VAR_15 = (__u8 *) FUNC_14(VAR_14, 14);
 VAR_22 = (__be32 *)FUNC_15(VAR_14, VAR_13->nr_labels*sizeof(__u32));
 if (VAR_13->nr_labels)
  FUNC_12(VAR_22, VAR_13);

 if (VAR_13->vlan_id != 0xffff) {
  if (VAR_13->svlan_id != 0xffff) {
   VAR_25 = (__be16 *)FUNC_15(VAR_14, sizeof(__be16));
   *VAR_25 = FUNC_2(VAR_13->svlan_id,
            VAR_13->svlan_cfi,
            VAR_13->svlan_p);
   VAR_26 = (__be16 *)FUNC_15(VAR_14, sizeof(__be16));
   *VAR_26 = FUNC_6(VAR_1);
  }
  VAR_23 = (__be16 *)FUNC_15(VAR_14, sizeof(__be16));
  *VAR_23 = FUNC_2(VAR_13->vlan_id,
          VAR_13->vlan_cfi,
          VAR_13->vlan_p);
  VAR_24 = (__be16 *)FUNC_15(VAR_14, sizeof(__be16));
  *VAR_24 = FUNC_6(VAR_2);
 }

 VAR_14->network_header = VAR_14->tail;
 VAR_14->transport_header = VAR_14->network_header + sizeof(struct iphdr);
 FUNC_15(VAR_14, sizeof(struct iphdr) + sizeof(struct udphdr));
 FUNC_17(VAR_14, VAR_27);
 VAR_19 = FUNC_8(VAR_14);
 VAR_16 = FUNC_20(VAR_14);

 FUNC_9(VAR_15, VAR_13->hh, 12);
 *(__be16 *) & VAR_15[12] = VAR_21;


 VAR_17 = VAR_13->cur_pkt_size - 14 - 20 - 8 -
    VAR_13->pkt_overhead;
 if (VAR_17 < sizeof(struct pktgen_hdr))
  VAR_17 = sizeof(struct pktgen_hdr);

 VAR_16->source = FUNC_6(VAR_13->cur_udp_src);
 VAR_16->dest = FUNC_6(VAR_13->cur_udp_dst);
 VAR_16->len = FUNC_6(VAR_17 + 8);
 VAR_16->check = 0;

 VAR_19->ihl = 5;
 VAR_19->version = 4;
 VAR_19->ttl = 32;
 VAR_19->tos = VAR_13->tos;
 VAR_19->protocol = VAR_6;
 VAR_19->saddr = VAR_13->cur_saddr;
 VAR_19->daddr = VAR_13->cur_daddr;
 VAR_19->id = FUNC_6(VAR_13->ip_id);
 VAR_13->ip_id++;
 VAR_19->frag_off = 0;
 VAR_18 = 20 + 8 + VAR_17;
 VAR_19->tot_len = FUNC_6(VAR_18);
 VAR_19->check = 0;
 VAR_19->check = FUNC_7((void *)VAR_19, VAR_19->ihl);
 VAR_14->protocol = VAR_21;
 VAR_14->mac_header = (VAR_14->network_header - VAR_0 -
      VAR_13->pkt_overhead);
 VAR_14->dev = VAR_12;
 VAR_14->pkt_type = VAR_8;

 if (VAR_13->nfrags <= 0) {
  VAR_20 = (struct pktgen_hdr *)FUNC_15(VAR_14, VAR_17);
  FUNC_10(VAR_20 + 1, 0, VAR_17 - sizeof(struct pktgen_hdr));
 } else {
  int VAR_28 = VAR_13->nfrags;
  int VAR_29, VAR_30;

  VAR_20 = (struct pktgen_hdr *)(((char *)(VAR_16)) + 8);

  if (VAR_28 > VAR_7)
   VAR_28 = VAR_7;
  if (VAR_17 > VAR_28 * VAR_9) {
   VAR_30 = VAR_17 - VAR_28 * VAR_9;
   FUNC_10(FUNC_15(VAR_14, VAR_30), 0, VAR_30);
   VAR_17 = VAR_28 * VAR_9;
  }

  VAR_29 = 0;
  while (VAR_17 > 0) {
   struct page *VAR_31 = FUNC_1(VAR_4 | VAR_11, 0);
   FUNC_18(VAR_14)->frags[VAR_29].page = VAR_31;
   FUNC_18(VAR_14)->frags[VAR_29].page_offset = 0;
   FUNC_18(VAR_14)->frags[VAR_29].size =
       (VAR_17 < VAR_9 ? VAR_17 : VAR_9);
   VAR_17 -= FUNC_18(VAR_14)->frags[VAR_29].size;
   VAR_14->len += FUNC_18(VAR_14)->frags[VAR_29].size;
   VAR_14->data_len += FUNC_18(VAR_14)->frags[VAR_29].size;
   VAR_29++;
   FUNC_18(VAR_14)->nr_frags = VAR_29;
  }

  while (VAR_29 < VAR_28) {
   int VAR_32;

   if (VAR_29 == 0)
    break;

   VAR_32 = FUNC_18(VAR_14)->frags[VAR_29 - 1].size / 2;
   if (VAR_32 == 0)
    break;

   FUNC_18(VAR_14)->frags[VAR_29 - 1].size -= VAR_32;

   FUNC_18(VAR_14)->frags[VAR_29] =
       FUNC_18(VAR_14)->frags[VAR_29 - 1];
   FUNC_4(FUNC_18(VAR_14)->frags[VAR_29].page);
   FUNC_18(VAR_14)->frags[VAR_29].page =
       FUNC_18(VAR_14)->frags[VAR_29 - 1].page;
   FUNC_18(VAR_14)->frags[VAR_29].page_offset +=
       FUNC_18(VAR_14)->frags[VAR_29 - 1].size;
   FUNC_18(VAR_14)->frags[VAR_29].size = VAR_32;
   VAR_29++;
   FUNC_18(VAR_14)->nr_frags = VAR_29;
  }
 }




 if (VAR_20) {
  struct timeval VAR_33;

  VAR_20->pgh_magic = FUNC_5(VAR_10);
  VAR_20->seq_num = FUNC_5(VAR_13->seq_num);

  FUNC_3(&VAR_33);
  VAR_20->tv_sec = FUNC_5(VAR_33.tv_sec);
  VAR_20->tv_usec = FUNC_5(VAR_33.tv_usec);
 }






 return VAR_14;
}
