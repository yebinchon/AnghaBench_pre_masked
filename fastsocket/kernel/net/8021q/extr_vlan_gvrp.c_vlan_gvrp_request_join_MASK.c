
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vlan_id ;
struct vlan_dev_info {int real_dev; int vlan_id; } ;
struct net_device {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *,int,int ) ;
 int FUNC_1 (int ) ;
 struct vlan_dev_info* FUNC_2 (struct net_device const*) ;
 int VAR_1 ;

int FUNC_3(const struct net_device *VAR_2)
{
 const struct vlan_dev_info *VAR_3 = FUNC_2(VAR_2);
 __be16 VAR_4 = FUNC_1(VAR_3->vlan_id);

 return FUNC_0(VAR_3->real_dev, &VAR_1,
     &VAR_4, sizeof(VAR_4), VAR_0);
}
