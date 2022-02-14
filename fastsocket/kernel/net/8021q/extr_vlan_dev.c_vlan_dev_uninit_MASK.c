
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_priority_tci_mapping {struct vlan_priority_tci_mapping* next; } ;
struct vlan_dev_info {struct vlan_priority_tci_mapping** egress_priority_map; int * vlan_rx_stats; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct vlan_priority_tci_mapping**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct vlan_priority_tci_mapping*) ;
 struct vlan_dev_info* FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct vlan_priority_tci_mapping *VAR_1;
 struct vlan_dev_info *VAR_2 = FUNC_3(VAR_0);
 int VAR_3;

 FUNC_1(VAR_2->vlan_rx_stats);
 VAR_2->vlan_rx_stats = ((void*)0);
 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_2->egress_priority_map); VAR_3++) {
  while ((VAR_1 = VAR_2->egress_priority_map[VAR_3]) != ((void*)0)) {
   VAR_2->egress_priority_map[VAR_3] = VAR_1->next;
   FUNC_2(VAR_1);
  }
 }
}
