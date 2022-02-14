
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {size_t rxhash; } ;
struct rps_dev_flow_table {size_t mask; struct rps_dev_flow* flows; } ;
struct rps_dev_flow {int filter; scalar_t__ cpu; int last_qtail; } ;
struct netdev_rx_queue {int rps_flow_table; } ;
struct netdev_rps_info {struct netdev_rx_queue* _rx; } ;
struct netdev_rfs_info {int (* ndo_rx_flow_steer ) (struct net_device*,struct sk_buff*,scalar_t__,size_t) ;int rx_cpu_rmap; } ;
struct net_device {int features; } ;
struct TYPE_4__ {struct netdev_rfs_info rfs_data; struct netdev_rps_info rps_data; } ;
struct TYPE_3__ {int input_queue_head; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 TYPE_2__* FUNC_1 (struct net_device*) ;
 TYPE_1__ FUNC_2 (int ,scalar_t__) ;
 struct rps_dev_flow_table* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int VAR_3 ;
 int FUNC_6 (struct net_device*,struct sk_buff*,scalar_t__,size_t) ;

__attribute__((used)) static struct rps_dev_flow *
FUNC_7(struct net_device *VAR_4, struct sk_buff *VAR_5,
     struct rps_dev_flow *VAR_6, u16 VAR_7)
{
 if (VAR_7 != VAR_1) {
  VAR_6->last_qtail =
   FUNC_2(VAR_3, VAR_7).input_queue_head;
 }

 VAR_6->cpu = VAR_7;
 return VAR_6;
}
