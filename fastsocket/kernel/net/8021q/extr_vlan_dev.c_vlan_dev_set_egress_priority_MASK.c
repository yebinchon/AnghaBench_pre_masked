
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct vlan_priority_tci_mapping {int priority; int vlan_qos; struct vlan_priority_tci_mapping* next; } ;
struct vlan_dev_info {int nr_egress_mappings; struct vlan_priority_tci_mapping** egress_priority_map; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct vlan_priority_tci_mapping* FUNC_0 (int,int ) ;
 struct vlan_dev_info* FUNC_1 (struct net_device const*) ;

int FUNC_2(const struct net_device *VAR_4,
     u32 VAR_5, u16 VAR_6)
{
 struct vlan_dev_info *VAR_7 = FUNC_1(VAR_4);
 struct vlan_priority_tci_mapping *VAR_8 = ((void*)0);
 struct vlan_priority_tci_mapping *VAR_9;
 u32 VAR_10 = (VAR_6 << VAR_3) & VAR_2;


 VAR_8 = VAR_7->egress_priority_map[VAR_5 & 0xF];
 while (VAR_8) {
  if (VAR_8->priority == VAR_5) {
   if (VAR_8->vlan_qos && !VAR_10)
    VAR_7->nr_egress_mappings--;
   else if (!VAR_8->vlan_qos && VAR_10)
    VAR_7->nr_egress_mappings++;
   VAR_8->vlan_qos = VAR_10;
   return 0;
  }
  VAR_8 = VAR_8->next;
 }


 VAR_8 = VAR_7->egress_priority_map[VAR_5 & 0xF];
 VAR_9 = FUNC_0(sizeof(struct vlan_priority_tci_mapping), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->next = VAR_8;
 VAR_9->priority = VAR_5;
 VAR_9->vlan_qos = VAR_10;
 VAR_7->egress_priority_map[VAR_5 & 0xF] = VAR_9;
 if (VAR_10)
  VAR_7->nr_egress_mappings++;
 return 0;
}
