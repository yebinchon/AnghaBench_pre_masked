
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct vlan_group {struct net_device*** vlan_devices_arrays; } ;
struct net_device {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 struct net_device** FUNC_1 (unsigned int,int ) ;

int FUNC_2(struct vlan_group *VAR_3, u16 VAR_4)
{
 struct net_device **VAR_5;
 unsigned int VAR_6;

 FUNC_0();

 VAR_5 = VAR_3->vlan_devices_arrays[VAR_4 / VAR_2];
 if (VAR_5 != ((void*)0))
  return 0;

 VAR_6 = sizeof(struct net_device *) * VAR_2;
 VAR_5 = FUNC_1(VAR_6, VAR_1);
 if (VAR_5 == ((void*)0))
  return -VAR_0;

 VAR_3->vlan_devices_arrays[VAR_4 / VAR_2] = VAR_5;
 return 0;
}
