
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct vlan_priority_tci_mapping {int priority; struct vlan_priority_tci_mapping* next; int vlan_qos; } ;
struct sk_buff {int priority; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {struct vlan_priority_tci_mapping** egress_priority_map; } ;


 TYPE_1__* FUNC_0 (struct net_device*) ;

__attribute__((used)) static inline u16
FUNC_1(struct net_device *VAR_0, struct sk_buff *VAR_1)
{
 struct vlan_priority_tci_mapping *VAR_2;

 VAR_2 = FUNC_0(VAR_0)->egress_priority_map[(VAR_1->priority & 0xF)];
 while (VAR_2) {
  if (VAR_2->priority == VAR_1->priority) {
   return VAR_2->vlan_qos;


  }
  VAR_2 = VAR_2->next;
 }
 return 0;
}
