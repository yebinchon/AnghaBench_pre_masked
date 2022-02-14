
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vlan_dev_info {int real_dev; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct vlan_dev_info* FUNC_1 (struct net_device*) ;

__attribute__((used)) static u32 FUNC_2(struct net_device *VAR_0)
{
 const struct vlan_dev_info *VAR_1 = FUNC_1(VAR_0);
 return FUNC_0(VAR_1->real_dev);
}
