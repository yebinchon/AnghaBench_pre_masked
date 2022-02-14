
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vlan_group {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net_lro_mgr {int features; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct net_lro_mgr*,struct sk_buff*,struct vlan_group*,int ,void*) ;
 int FUNC_1 (struct sk_buff*,struct vlan_group*,int ) ;
 int FUNC_2 (struct sk_buff*,struct vlan_group*,int ) ;

void FUNC_3(struct net_lro_mgr *VAR_1,
      struct sk_buff *VAR_2,
      struct vlan_group *VAR_3,
      u16 VAR_4,
      void *VAR_5)
{
 if (FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5)) {
  if (VAR_1->features & VAR_0)
   FUNC_1(VAR_2, VAR_3, VAR_4);
  else
   FUNC_2(VAR_2, VAR_3, VAR_4);
 }
}
