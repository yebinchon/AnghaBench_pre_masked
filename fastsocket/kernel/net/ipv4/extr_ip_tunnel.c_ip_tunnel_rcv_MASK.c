
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tnl_ptk_info {int flags; int seq; } ;
struct sk_buff {TYPE_4__* dev; int protocol; scalar_t__ len; int pkt_type; } ;
struct net_device_stats {int rx_bytes; int rx_packets; int rx_errors; int rx_fifo_errors; int rx_crc_errors; int multicast; } ;
struct iphdr {int daddr; } ;
struct TYPE_6__ {int i_flags; } ;
struct ip_tunnel {int gro_cells; TYPE_4__* dev; scalar_t__ i_seqno; TYPE_2__ parms; } ;
typedef scalar_t__ s32 ;
struct TYPE_8__ {scalar_t__ type; struct net_device_stats stats; } ;
struct TYPE_5__ {scalar_t__ iif; } ;
struct TYPE_7__ {TYPE_1__ fl; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,TYPE_4__*) ;
 int FUNC_2 (int *,struct sk_buff*) ;
 struct iphdr* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct iphdr const*,struct sk_buff*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (struct sk_buff*,int ,int ) ;
 TYPE_3__* FUNC_9 (struct sk_buff*) ;

int FUNC_10(struct ip_tunnel *VAR_5, struct sk_buff *VAR_6,
    const struct tnl_ptk_info *VAR_7, bool VAR_8)
{
 struct net_device_stats *VAR_9 = &VAR_5->dev->stats;
 const struct iphdr *VAR_10 = FUNC_3(VAR_6);
 if ((!(VAR_7->flags&VAR_3) && (VAR_5->parms.i_flags&VAR_3)) ||
      ((VAR_7->flags&VAR_3) && !(VAR_5->parms.i_flags&VAR_3))) {
  VAR_5->dev->stats.rx_crc_errors++;
  VAR_5->dev->stats.rx_errors++;
  goto drop;
 }

 if (VAR_5->parms.i_flags&VAR_4) {
  if (!(VAR_7->flags&VAR_4) ||
      (VAR_5->i_seqno && (s32)(FUNC_7(VAR_7->seq) - VAR_5->i_seqno) < 0)) {
   VAR_5->dev->stats.rx_fifo_errors++;
   VAR_5->dev->stats.rx_errors++;
   goto drop;
  }
  VAR_5->i_seqno = FUNC_7(VAR_7->seq) + 1;
 }

 FUNC_4(VAR_10, VAR_6);

 VAR_9->rx_packets++;
 VAR_9->rx_bytes += VAR_6->len;

 if (VAR_5->dev->type == VAR_0) {
  VAR_6->protocol = FUNC_1(VAR_6, VAR_5->dev);
  FUNC_8(VAR_6, FUNC_0(VAR_6), VAR_1);
 } else {
  VAR_6->dev = VAR_5->dev;
 }
 FUNC_2(&VAR_5->gro_cells, VAR_6);
 return 0;

drop:
 FUNC_6(VAR_6);
 return 0;
}
