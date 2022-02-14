
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {TYPE_2__* netdev_ops; int name; } ;
struct TYPE_4__ {int ndo_start_xmit; } ;
struct mpoa_client {TYPE_2__ new_ops; TYPE_2__* old_ops; TYPE_1__* dev; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void FUNC_2(struct mpoa_client *VAR_1, struct net_device *VAR_2)
{

 FUNC_0("mpoa: (%s) start_mpc:\n", VAR_1->dev->name);
 if (!VAR_2->netdev_ops)
  FUNC_1("mpoa: (%s) start_mpc  not starting\n", VAR_2->name);
 else {
  VAR_1->old_ops = VAR_2->netdev_ops;
  VAR_1->new_ops = *VAR_1->old_ops;
  VAR_1->new_ops.ndo_start_xmit = VAR_0;
  VAR_2->netdev_ops = &VAR_1->new_ops;
 }
}
