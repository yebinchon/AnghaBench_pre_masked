
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_group {int hlist; struct net_device* real_dev; } ;
struct net_device {int ifindex; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 struct vlan_group* FUNC_1 (int,int ) ;
 int * VAR_1 ;
 size_t FUNC_2 (int ) ;

struct vlan_group *FUNC_3(struct net_device *VAR_2)
{
 struct vlan_group *VAR_3;

 VAR_3 = FUNC_1(sizeof(struct vlan_group), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->real_dev = VAR_2;
 FUNC_0(&VAR_3->hlist,
   &VAR_1[FUNC_2(VAR_2->ifindex)]);
 return VAR_3;
}
