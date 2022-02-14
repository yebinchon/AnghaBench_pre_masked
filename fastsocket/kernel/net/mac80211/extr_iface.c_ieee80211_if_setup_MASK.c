
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int destructor; int * netdev_ops; } ;
struct TYPE_2__ {int ext_priv_flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (struct net_device*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_3)
{
 FUNC_0(VAR_3);
 FUNC_1(VAR_3)->ext_priv_flags &= ~VAR_0;
 VAR_3->netdev_ops = &VAR_2;
 VAR_3->destructor = VAR_1;
}
