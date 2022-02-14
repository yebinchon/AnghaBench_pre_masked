
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u16 ;
struct vlan_group {int dummy; } ;
struct tcphdr {int seq; } ;
struct sk_buff {scalar_t__ protocol; scalar_t__ len; int ip_summed; } ;
struct net_lro_mgr {int features; scalar_t__ max_aggr; TYPE_2__* dev; int ip_summed_aggr; int lro_arr; scalar_t__ (* get_skb_header ) (struct sk_buff*,void*,void*,int*,void*) ;} ;
struct net_lro_desc {scalar_t__ tcp_next_seq; scalar_t__ pkt_aggr_cnt; TYPE_1__* parent; int active; } ;
struct iphdr {int dummy; } ;
struct TYPE_4__ {int mtu; } ;
struct TYPE_3__ {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_lro_mgr*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct net_lro_desc*,struct sk_buff*,struct iphdr*,struct tcphdr*) ;
 int FUNC_3 (struct net_lro_mgr*,struct net_lro_desc*) ;
 struct net_lro_desc* FUNC_4 (struct net_lro_mgr*,int ,struct iphdr*,struct tcphdr*) ;
 int FUNC_5 (struct net_lro_desc*,struct sk_buff*,struct iphdr*,struct tcphdr*,int ,struct vlan_group*) ;
 scalar_t__ FUNC_6 (struct iphdr*,struct tcphdr*,scalar_t__,struct net_lro_desc*) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct sk_buff*,void*,void*,int*,void*) ;

__attribute__((used)) static int FUNC_9(struct net_lro_mgr *VAR_6, struct sk_buff *VAR_7,
     struct vlan_group *VAR_8, u16 VAR_9, void *VAR_10)
{
 struct net_lro_desc *VAR_11;
 struct iphdr *VAR_12;
 struct tcphdr *VAR_13;
 u64 VAR_14;
 int VAR_15 = 0;

 if (!VAR_6->get_skb_header
     || VAR_6->get_skb_header(VAR_7, (void *)&VAR_12, (void *)&VAR_13,
           &VAR_14, VAR_10))
  goto out;

 if (!(VAR_14 & VAR_2) || !(VAR_14 & VAR_3))
  goto out;

 VAR_11 = FUNC_4(VAR_6, VAR_6->lro_arr, VAR_12, VAR_13);
 if (!VAR_11)
  goto out;

 if ((VAR_7->protocol == FUNC_1(VAR_0))
     && !(VAR_6->features & VAR_1))
  VAR_15 = VAR_4;

 if (!VAR_11->active) {
  if (FUNC_6(VAR_12, VAR_13, VAR_7->len - VAR_15, ((void*)0)))
   goto out;

  VAR_7->ip_summed = VAR_6->ip_summed_aggr;
  FUNC_5(VAR_11, VAR_7, VAR_12, VAR_13, VAR_9, VAR_8);
  FUNC_0(VAR_6, VAR_5);
  return 0;
 }

 if (VAR_11->tcp_next_seq != FUNC_7(VAR_13->seq))
  goto out2;

 if (FUNC_6(VAR_12, VAR_13, VAR_7->len, VAR_11))
  goto out2;

 FUNC_2(VAR_11, VAR_7, VAR_12, VAR_13);
 FUNC_0(VAR_6, VAR_5);

 if ((VAR_11->pkt_aggr_cnt >= VAR_6->max_aggr) ||
     VAR_11->parent->len > (0xFFFF - VAR_6->dev->mtu))
  FUNC_3(VAR_6, VAR_11);

 return 0;

out2:
 FUNC_3(VAR_6, VAR_11);

out:
 return 1;
}
