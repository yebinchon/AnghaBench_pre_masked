
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int attr; } ;
struct TYPE_4__ {int attr; } ;
struct mlx4_port {scalar_t__ slave; TYPE_2__ enable_smi_admin; int kobj; TYPE_1__ smi_enabled; TYPE_3__* dev; int port_num; } ;
struct TYPE_6__ {int dev; int ib_dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct mlx4_port *VAR_1)
{
 int VAR_2 = FUNC_1(&VAR_1->dev->ib_dev, VAR_1->port_num) ==
   VAR_0;

 if (VAR_2 || VAR_1->slave == FUNC_0(VAR_1->dev->dev))
  return;

 FUNC_2(&VAR_1->kobj, &VAR_1->smi_enabled.attr);
 FUNC_2(&VAR_1->kobj, &VAR_1->enable_smi_admin.attr);
}
