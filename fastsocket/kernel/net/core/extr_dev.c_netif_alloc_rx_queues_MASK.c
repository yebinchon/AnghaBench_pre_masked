
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct netdev_rx_queue {struct net_device* dev; } ;
struct net_device {int dummy; } ;
struct TYPE_3__ {unsigned int num_rx_queues; struct netdev_rx_queue* _rx; } ;
struct TYPE_4__ {TYPE_1__ rps_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct netdev_rx_queue* FUNC_1 (unsigned int,int,int ) ;
 TYPE_2__* FUNC_2 (struct net_device*) ;
 int FUNC_3 (char*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_2)
{
 unsigned int VAR_3, VAR_4 = FUNC_2(VAR_2)->rps_data.num_rx_queues;
 struct netdev_rx_queue *VAR_5;

 FUNC_0(VAR_4 < 1);

 VAR_5 = FUNC_1(VAR_4, sizeof(struct netdev_rx_queue), VAR_1);
 if (!VAR_5) {
  FUNC_3("netdev: Unable to allocate %u rx queues.\n", VAR_4);
  return -VAR_0;
 }
 FUNC_2(VAR_2)->rps_data._rx = VAR_5;

 for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++)
  VAR_5[VAR_3].dev = VAR_2;
 return 0;
}
