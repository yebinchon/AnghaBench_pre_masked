
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ctl_softc {int ctl_lock; int ** ctl_ports; int ctl_port_mask; int num_ports; int port_list; } ;
struct ctl_port {int targ_port; int max_initiators; int port_lock; TYPE_2__* wwpn_iid; TYPE_2__* init_devid; TYPE_2__* target_devid; TYPE_2__* port_devid; int options; TYPE_1__* frontend; scalar_t__ ctl_pool_ref; struct ctl_softc* ctl_softc; } ;
struct ctl_io_pool {int dummy; } ;
struct TYPE_4__ {struct TYPE_4__* name; } ;
struct TYPE_3__ {int port_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct ctl_port*,int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct ctl_port*) ;
 int FUNC_3 (struct ctl_io_pool*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

int
FUNC_9(struct ctl_port *VAR_4)
{
 struct ctl_softc *VAR_5 = VAR_4->ctl_softc;
 struct ctl_io_pool *VAR_6 = (struct ctl_io_pool *)VAR_4->ctl_pool_ref;
 int VAR_7;

 if (VAR_4->targ_port == -1)
  return (1);

 FUNC_6(&VAR_5->ctl_lock);
 FUNC_0(&VAR_5->port_list, VAR_4, VAR_1, VAR_3);
 FUNC_0(&VAR_4->frontend->port_list, VAR_4, VAR_1, VAR_2);
 VAR_5->num_ports--;
 FUNC_1(VAR_5->ctl_port_mask, VAR_4->targ_port);
 VAR_5->ctl_ports[VAR_4->targ_port] = ((void*)0);
 FUNC_7(&VAR_5->ctl_lock);

 FUNC_3(VAR_6);
 FUNC_8(VAR_4->options);

 FUNC_2(VAR_4);
 FUNC_4(VAR_4->port_devid, VAR_0);
 VAR_4->port_devid = ((void*)0);
 FUNC_4(VAR_4->target_devid, VAR_0);
 VAR_4->target_devid = ((void*)0);
 FUNC_4(VAR_4->init_devid, VAR_0);
 VAR_4->init_devid = ((void*)0);
 for (VAR_7 = 0; VAR_7 < VAR_4->max_initiators; VAR_7++)
  FUNC_4(VAR_4->wwpn_iid[VAR_7].name, VAR_0);
 FUNC_4(VAR_4->wwpn_iid, VAR_0);
 FUNC_5(&VAR_4->port_lock);

 return (0);
}
