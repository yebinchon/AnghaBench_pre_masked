
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int features; int vlan_features; int dev_addr; scalar_t__ tx_queue_len; int destructor; int * netdev_ops; } ;
struct TYPE_2__ {int ext_priv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct net_device*,int *) ;
 int FUNC_1 (struct net_device*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_1__* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_12)
{
 FUNC_1(VAR_12);

 VAR_12->netdev_ops = &VAR_11;

 FUNC_2(VAR_12)->ext_priv_flags &= ~VAR_1;
 FUNC_2(VAR_12)->ext_priv_flags |= VAR_0;
 VAR_12->destructor = VAR_9;
 FUNC_0(VAR_12, &VAR_10);
 VAR_12->tx_queue_len = 0;

 VAR_12->features = VAR_6 | VAR_7 | VAR_2 |
      VAR_3 | VAR_4 | VAR_8;

 VAR_12->vlan_features = VAR_12->features;
 VAR_12->features |= VAR_5;
 VAR_12->features &= ~VAR_6;
 FUNC_3(VAR_12->dev_addr);
}
