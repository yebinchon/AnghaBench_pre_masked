
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef int u16 ;
typedef scalar_t__ tcph ;
struct vlan_group {int dummy; } ;
struct tcphdr {int seq; } ;
struct skb_frag_struct {int page_offset; int page; } ;
struct sk_buff {scalar_t__ protocol; scalar_t__ data; } ;
struct net_lro_mgr {int features; scalar_t__ max_aggr; int ip_summed; TYPE_1__* dev; int ip_summed_aggr; int lro_arr; scalar_t__ (* get_frag_header ) (struct skb_frag_struct*,void*,void*,void*,int*,void*) ;} ;
struct net_lro_desc {scalar_t__ tcp_next_seq; TYPE_3__* parent; int active; } ;
struct iphdr {int dummy; } ;
typedef scalar_t__ iph ;
typedef int __wsum ;
struct TYPE_6__ {int len; } ;
struct TYPE_5__ {scalar_t__ nr_frags; } ;
struct TYPE_4__ {int mtu; } ;


 int VAR_0 ;
 int FUNC_0 (struct iphdr*) ;
 int VAR_1 ;
 int FUNC_1 (struct net_lro_mgr*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (struct tcphdr*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct net_lro_desc*,int,int,int,struct skb_frag_struct*,struct iphdr*,struct tcphdr*) ;
 int FUNC_5 (struct net_lro_mgr*,struct net_lro_desc*) ;
 struct sk_buff* FUNC_6 (struct net_lro_mgr*,struct skb_frag_struct*,int,int,void*,int,int ,int ) ;
 struct net_lro_desc* FUNC_7 (struct net_lro_mgr*,int ,struct iphdr*,struct tcphdr*) ;
 int FUNC_8 (struct net_lro_desc*,struct sk_buff*,struct iphdr*,struct tcphdr*,int ,int *) ;
 scalar_t__ FUNC_9 (struct iphdr*,struct tcphdr*,int,struct net_lro_desc*) ;
 scalar_t__ FUNC_10 (int ) ;
 void* FUNC_11 (int ) ;
 TYPE_2__* FUNC_12 (TYPE_3__*) ;
 scalar_t__ FUNC_13 (struct skb_frag_struct*,void*,void*,void*,int*,void*) ;

__attribute__((used)) static struct sk_buff *FUNC_14(struct net_lro_mgr *VAR_7,
       struct skb_frag_struct *VAR_8,
       int VAR_9, int VAR_10,
       struct vlan_group *VAR_11,
       u16 VAR_12, void *VAR_13, __wsum VAR_14)
{
 struct net_lro_desc *VAR_15;
 struct iphdr *VAR_16;
 struct tcphdr *VAR_17;
 struct sk_buff *VAR_18;
 u64 VAR_19;
 void *VAR_20;
 int VAR_21;
 int VAR_22 = VAR_3;
 int VAR_23 = 0;

 if (!VAR_7->get_frag_header
     || VAR_7->get_frag_header(VAR_8, (void *)&VAR_20, (void *)&VAR_16,
     (void *)&VAR_17, &VAR_19, VAR_13)) {
  VAR_20 = FUNC_11(VAR_8->page) + VAR_8->page_offset;
  goto out1;
 }

 if (!(VAR_19 & VAR_2) || !(VAR_19 & VAR_4))
  goto out1;

 VAR_22 = (int)((void *)(VAR_17) + FUNC_2(VAR_17) - VAR_20);
 VAR_21 = (int)((void *)(VAR_16) - VAR_20);

 VAR_15 = FUNC_7(VAR_7, VAR_7->lro_arr, VAR_16, VAR_17);
 if (!VAR_15)
  goto out1;

 if (!VAR_15->active) {
  if (FUNC_9(VAR_16, VAR_17, VAR_9 - VAR_21, ((void*)0)))
   goto out1;

  VAR_18 = FUNC_6(VAR_7, VAR_8, VAR_9, VAR_10, VAR_20,
      VAR_22, 0, VAR_7->ip_summed_aggr);
  if (!VAR_18)
   goto out;

  if ((VAR_18->protocol == FUNC_3(VAR_0))
      && !(VAR_7->features & VAR_1))
   VAR_23 = VAR_5;

  VAR_16 = (void *)(VAR_18->data + VAR_23);
  VAR_17 = (void *)((u8 *)VAR_18->data + VAR_23
    + FUNC_0(VAR_16));

  FUNC_8(VAR_15, VAR_18, VAR_16, VAR_17, 0, ((void*)0));
  FUNC_1(VAR_7, VAR_6);
  return ((void*)0);
 }

 if (VAR_15->tcp_next_seq != FUNC_10(VAR_17->seq))
  goto out2;

 if (FUNC_9(VAR_16, VAR_17, VAR_9 - VAR_21, VAR_15))
  goto out2;

 FUNC_4(VAR_15, VAR_9, VAR_22, VAR_10, VAR_8, VAR_16, VAR_17);
 FUNC_1(VAR_7, VAR_6);

 if ((FUNC_12(VAR_15->parent)->nr_frags >= VAR_7->max_aggr) ||
     VAR_15->parent->len > (0xFFFF - VAR_7->dev->mtu))
  FUNC_5(VAR_7, VAR_15);

 return ((void*)0);

out2:
 FUNC_5(VAR_7, VAR_15);

out1:
 VAR_18 = FUNC_6(VAR_7, VAR_8, VAR_9, VAR_10, VAR_20,
     VAR_22, VAR_14, VAR_7->ip_summed);
out:
 return VAR_18;
}
