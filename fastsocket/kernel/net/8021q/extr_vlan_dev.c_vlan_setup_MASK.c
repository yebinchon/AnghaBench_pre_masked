
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int broadcast; int * ethtool_ops; int destructor; int * netdev_ops; scalar_t__ tx_queue_len; int priv_flags; } ;
struct TYPE_2__ {int ext_priv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;
 TYPE_1__* FUNC_2 (struct net_device*) ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_3(struct net_device *VAR_7)
{
 FUNC_0(VAR_7);

 VAR_7->priv_flags |= VAR_1;
 VAR_7->priv_flags &= ~VAR_3;
 FUNC_2(VAR_7)->ext_priv_flags &= ~VAR_2;
 VAR_7->tx_queue_len = 0;

 VAR_7->netdev_ops = &VAR_6;
 VAR_7->destructor = VAR_4;
 VAR_7->ethtool_ops = &VAR_5;

 FUNC_1(VAR_7->broadcast, 0, VAR_0);
}
