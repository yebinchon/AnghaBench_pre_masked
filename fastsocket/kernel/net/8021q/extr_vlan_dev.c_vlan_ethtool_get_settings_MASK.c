
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_dev_info {int real_dev; } ;
struct net_device {int dummy; } ;
struct ethtool_cmd {int dummy; } ;


 int FUNC_0 (int ,struct ethtool_cmd*) ;
 struct vlan_dev_info* FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
         struct ethtool_cmd *VAR_1)
{
 const struct vlan_dev_info *VAR_2 = FUNC_1(VAR_0);
 return FUNC_0(VAR_2->real_dev, VAR_1);
}
