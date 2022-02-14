
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int watchdog_timeo; int * netdev_ops; int addr_len; int broadcast; } ;
struct TYPE_2__ {int ext_priv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int,int ) ;
 TYPE_1__* FUNC_2 (struct net_device*) ;

void FUNC_3(struct net_device *VAR_4)
{

 FUNC_1(VAR_4->broadcast, 0xff, VAR_0);
 VAR_4->addr_len = VAR_0;

 FUNC_0(VAR_4);
 FUNC_2(VAR_4)->ext_priv_flags &= ~VAR_2;
 VAR_4->netdev_ops = &VAR_3;

 VAR_4->watchdog_timeo = VAR_1 * 2;
}
