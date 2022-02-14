
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vlan_group {int dummy; } ;
struct skb_frag_struct {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net_lro_mgr {int features; } ;
typedef int __wsum ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (struct net_lro_mgr*,struct skb_frag_struct*,int,int,struct vlan_group*,int ,void*,int ) ;
 int FUNC_1 (struct sk_buff*,struct vlan_group*,int ) ;
 int FUNC_2 (struct sk_buff*,struct vlan_group*,int ) ;

void FUNC_3(struct net_lro_mgr *VAR_1,
        struct skb_frag_struct *VAR_2,
        int VAR_3, int VAR_4,
        struct vlan_group *VAR_5,
        u16 VAR_6, void *VAR_7, __wsum VAR_8)
{
 struct sk_buff *VAR_9;

 VAR_9 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
     VAR_6, VAR_7, VAR_8);
 if (!VAR_9)
  return;

 if (VAR_1->features & VAR_0)
  FUNC_1(VAR_9, VAR_5, VAR_6);
 else
  FUNC_2(VAR_9, VAR_5, VAR_6);
}
