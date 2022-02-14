
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ctl_softc {int ctl_lock; struct ctl_port** ctl_ports; int port_list; int ctl_port_mask; int num_ports; int port_max; int port_min; } ;
struct TYPE_3__ {int item; } ;
struct ctl_port {int targ_port; int max_initiators; TYPE_2__* frontend; int port_lock; TYPE_1__ stats; int * options; void* ctl_pool_ref; int * wwpn_iid; scalar_t__ num_requested_ctl_io; int port_name; struct ctl_softc* ctl_softc; } ;
struct TYPE_4__ {int port_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct ctl_port* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct ctl_port*,struct ctl_port*,int ) ;
 int FUNC_3 (int *,struct ctl_port*,int ) ;
 int FUNC_4 (int *,struct ctl_port*,int ) ;
 struct ctl_port* FUNC_5 (struct ctl_port*,int ) ;
 struct ctl_softc* VAR_6 ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (struct ctl_softc*,int ,scalar_t__,void**) ;
 scalar_t__ FUNC_9 (int ,int) ;
 int VAR_7 ;
 int FUNC_10 (int *,int ) ;
 int VAR_8 ;
 int * FUNC_11 (int,int ,int) ;
 int FUNC_12 (int *,char*,int *,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int * FUNC_15 (int ) ;

int
FUNC_16(struct ctl_port *VAR_9)
{
 struct ctl_softc *VAR_10 = VAR_6;
 struct ctl_port *VAR_11, *VAR_12;
 void *VAR_13;
 int VAR_14;
 int VAR_15;

 FUNC_0(VAR_10 != ((void*)0), ("CTL is not initialized"));
 VAR_9->ctl_softc = VAR_10;

 FUNC_13(&VAR_10->ctl_lock);
 if (VAR_9->targ_port >= 0)
  VAR_14 = VAR_9->targ_port;
 else
  VAR_14 = FUNC_7(VAR_10->ctl_port_mask,
      VAR_10->port_min, VAR_10->port_max);
 if ((VAR_14 < 0) ||
     (FUNC_9(VAR_10->ctl_port_mask, VAR_14) < 0)) {
  FUNC_14(&VAR_10->ctl_lock);
  return (1);
 }
 VAR_10->num_ports++;
 FUNC_14(&VAR_10->ctl_lock);




 VAR_9->max_initiators = VAR_0;
 VAR_9->wwpn_iid = FUNC_11(sizeof(*VAR_9->wwpn_iid) * VAR_9->max_initiators,
     VAR_3, VAR_4 | VAR_5);
 if (VAR_9->wwpn_iid == ((void*)0)) {
  VAR_15 = VAR_1;
  goto error;
 }
 VAR_15 = FUNC_8(VAR_10, VAR_9->port_name,
     VAR_9->num_requested_ctl_io + 20, &VAR_13);
 if (VAR_15 != 0) {
  FUNC_10(VAR_9->wwpn_iid, VAR_3);
error:
  VAR_9->targ_port = -1;
  FUNC_13(&VAR_10->ctl_lock);
  FUNC_6(VAR_10->ctl_port_mask, VAR_14);
  FUNC_14(&VAR_10->ctl_lock);
  return (VAR_15);
 }
 VAR_9->targ_port = VAR_14;
 VAR_9->ctl_pool_ref = VAR_13;
 if (VAR_9->options == ((void*)0))
  VAR_9->options = FUNC_15(0);
 VAR_9->stats.item = VAR_14;
 FUNC_12(&VAR_9->port_lock, "CTL port", ((void*)0), VAR_2);

 FUNC_13(&VAR_10->ctl_lock);
 FUNC_4(&VAR_9->frontend->port_list, VAR_9, VAR_7);
 for (VAR_11 = ((void*)0), VAR_12 = FUNC_1(&VAR_10->port_list);
     VAR_12 != ((void*)0) && VAR_12->targ_port < VAR_14;
     VAR_11 = VAR_12, VAR_12 = FUNC_5(VAR_11, VAR_8)) {
 }
 if (VAR_11)
  FUNC_2(&VAR_10->port_list, VAR_11, VAR_9, VAR_8);
 else
  FUNC_3(&VAR_10->port_list, VAR_9, VAR_8);
 VAR_10->ctl_ports[VAR_9->targ_port] = VAR_9;
 FUNC_14(&VAR_10->ctl_lock);

 return (VAR_15);
}
