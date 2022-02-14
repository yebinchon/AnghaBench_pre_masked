
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_list {int dummy; } ;
struct mac_list {int dummy; } ;
struct iavf_sc {void* vlan_filters; void* mac_filters; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*) ;
 void* FUNC_1 (int,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct iavf_sc *VAR_3)
{
 VAR_3->mac_filters = FUNC_1(sizeof(struct mac_list),
     VAR_0, VAR_1 | VAR_2);
 FUNC_0(VAR_3->mac_filters);
 VAR_3->vlan_filters = FUNC_1(sizeof(struct vlan_list),
     VAR_0, VAR_1 | VAR_2);
 FUNC_0(VAR_3->vlan_filters);
}
