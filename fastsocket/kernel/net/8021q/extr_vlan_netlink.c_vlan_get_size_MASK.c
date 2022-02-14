
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_dev_info {int nr_egress_mappings; int nr_ingress_mappings; } ;
struct net_device {int dummy; } ;
struct ifla_vlan_flags {int dummy; } ;


 size_t FUNC_0 (int) ;
 struct vlan_dev_info* FUNC_1 (struct net_device const*) ;
 size_t FUNC_2 (int ) ;

__attribute__((used)) static size_t FUNC_3(const struct net_device *VAR_0)
{
 struct vlan_dev_info *VAR_1 = FUNC_1(VAR_0);

 return FUNC_0(2) +
        sizeof(struct ifla_vlan_flags) +
        FUNC_2(VAR_1->nr_ingress_mappings) +
        FUNC_2(VAR_1->nr_egress_mappings);
}
