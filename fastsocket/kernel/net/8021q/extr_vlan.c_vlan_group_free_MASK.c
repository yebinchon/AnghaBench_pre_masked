
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_group {struct vlan_group** vlan_devices_arrays; } ;


 int VAR_0 ;
 int FUNC_0 (struct vlan_group*) ;

void FUNC_1(struct vlan_group *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_0(VAR_1->vlan_devices_arrays[VAR_2]);
 FUNC_0(VAR_1);
}
