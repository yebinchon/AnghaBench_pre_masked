
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int features; } ;
struct TYPE_2__ {int* prio; } ;
struct net_bridge {int bridge_max_age; int max_age; int bridge_hello_time; int hello_time; int bridge_forward_delay; int forward_delay; int ageing_time; int age_list; scalar_t__ topology_change_detected; scalar_t__ topology_change; scalar_t__ root_port; scalar_t__ root_path_cost; TYPE_1__ bridge_id; TYPE_1__ designated_root; int stp_enabled; int feature_mask; int group_addr; int hash_lock; int port_list; int lock; struct net_device* dev; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 struct net_device* FUNC_1 (int,char const*,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct net_bridge*) ;
 int FUNC_3 (struct net_bridge*) ;
 int VAR_4 ;
 int FUNC_4 (struct net_bridge*) ;
 int FUNC_5 (struct net_device*,struct net*) ;
 int FUNC_6 (int ,int ,int ) ;
 struct net_bridge* FUNC_7 (struct net_device*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static struct net_device *FUNC_9(struct net *VAR_5, const char *VAR_6)
{
 struct net_bridge *VAR_7;
 struct net_device *VAR_8;

 VAR_8 = FUNC_1(sizeof(struct net_bridge), VAR_6,
      VAR_3);

 if (!VAR_8)
  return ((void*)0);
 FUNC_5(VAR_8, VAR_5);

 VAR_7 = FUNC_7(VAR_8);
 VAR_7->dev = VAR_8;

 FUNC_8(&VAR_7->lock);
 FUNC_0(&VAR_7->port_list);
 FUNC_8(&VAR_7->hash_lock);

 VAR_7->bridge_id.prio[0] = 0x80;
 VAR_7->bridge_id.prio[1] = 0x00;

 FUNC_6(VAR_7->group_addr, VAR_4, VAR_1);

 VAR_7->feature_mask = VAR_8->features;
 VAR_7->stp_enabled = VAR_0;
 VAR_7->designated_root = VAR_7->bridge_id;
 VAR_7->root_path_cost = 0;
 VAR_7->root_port = 0;
 VAR_7->bridge_max_age = VAR_7->max_age = 20 * VAR_2;
 VAR_7->bridge_hello_time = VAR_7->hello_time = 2 * VAR_2;
 VAR_7->bridge_forward_delay = VAR_7->forward_delay = 15 * VAR_2;
 VAR_7->topology_change = 0;
 VAR_7->topology_change_detected = 0;
 VAR_7->ageing_time = 300 * VAR_2;

 FUNC_3(VAR_7);

 FUNC_0(&VAR_7->age_list);

 FUNC_4(VAR_7);
 FUNC_2(VAR_7);

 return VAR_8;
}
