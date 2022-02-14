
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vlan_group {int dummy; } ;
struct net_device {int dummy; } ;


 struct vlan_group* FUNC_0 (struct net_device*) ;
 struct net_device* FUNC_1 (struct vlan_group*,int ) ;

struct net_device *FUNC_2(struct net_device *VAR_0, u16 VAR_1)
{
 struct vlan_group *VAR_2 = FUNC_0(VAR_0);

 if (VAR_2)
  return FUNC_1(VAR_2, VAR_1);

 return ((void*)0);
}
