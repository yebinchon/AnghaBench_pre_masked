
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct atalk_addr {scalar_t__ s_net; scalar_t__ s_node; } ;
struct TYPE_2__ {scalar_t__ s_net; scalar_t__ s_node; } ;
struct aarp_entry {struct aarp_entry* next; struct net_device* dev; TYPE_1__ target_addr; } ;



__attribute__((used)) static struct aarp_entry *FUNC_0(struct aarp_entry *VAR_0,
         struct net_device *VAR_1,
         struct atalk_addr *VAR_2)
{
 while (VAR_0) {
  if (VAR_0->target_addr.s_net == VAR_2->s_net &&
      VAR_0->target_addr.s_node == VAR_2->s_node &&
      VAR_0->dev == VAR_1)
   break;
  VAR_0 = VAR_0->next;
 }

 return VAR_0;
}
