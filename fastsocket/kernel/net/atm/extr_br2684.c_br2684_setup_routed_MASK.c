
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mtu; int flags; int tx_queue_len; int type; scalar_t__ addr_len; int * netdev_ops; scalar_t__ hard_header_len; } ;
struct br2684_dev {int brvccs; struct net_device* net_dev; } ;


 int VAR_0 ;
 struct br2684_dev* FUNC_0 (struct net_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_5)
{
 struct br2684_dev *VAR_6 = FUNC_0(VAR_5);
 VAR_6->net_dev = VAR_5;

 VAR_5->hard_header_len = 0;

 VAR_5->netdev_ops = &VAR_4;
 VAR_5->addr_len = 0;
 VAR_5->mtu = 1500;
 VAR_5->type = VAR_0;
 VAR_5->flags = VAR_3 | VAR_2 | VAR_1;
 VAR_5->tx_queue_len = 100;
 FUNC_1(&VAR_6->brvccs);
}
