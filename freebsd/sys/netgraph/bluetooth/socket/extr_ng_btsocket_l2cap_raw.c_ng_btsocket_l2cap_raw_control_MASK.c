
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


typedef int u_long ;
struct thread {int dummy; } ;
struct socket {int dummy; } ;
struct TYPE_18__ {scalar_t__ token; int cmd; } ;
struct ng_mesg {scalar_t__ data; TYPE_1__ header; } ;
struct ng_btsocket_l2cap_raw_ping {int echo_size; TYPE_5__* echo_data; int result; } ;
struct ng_btsocket_l2cap_raw_node_flags {int flags; } ;
struct ng_btsocket_l2cap_raw_node_debug {int debug; } ;
struct ng_btsocket_l2cap_raw_get_info {int info_size; TYPE_5__* info_data; int result; int info_type; } ;
struct ng_btsocket_l2cap_raw_con_list {int num_connections; int * connections; } ;
struct ng_btsocket_l2cap_raw_chan_list {int num_channels; int * channels; } ;
struct ng_btsocket_l2cap_raw_auto_discon_timo {int timeout; } ;
struct ifnet {int dummy; } ;
struct TYPE_20__ {int num_connections; } ;
typedef TYPE_3__ ng_l2cap_node_con_list_ep ;
typedef int ng_l2cap_node_con_ep ;
struct TYPE_21__ {int num_channels; } ;
typedef TYPE_4__ ng_l2cap_node_chan_list_ep ;
typedef int ng_l2cap_node_chan_ep ;
struct TYPE_22__ {int info_size; int result; int echo_size; } ;
typedef TYPE_5__ ng_l2cap_l2ca_ping_op ;
struct TYPE_23__ {int echo_size; int bdaddr; } ;
typedef TYPE_6__ ng_l2cap_l2ca_ping_ip ;
typedef TYPE_5__ ng_l2cap_l2ca_get_info_op ;
struct TYPE_24__ {int info_type; int bdaddr; } ;
typedef TYPE_8__ ng_l2cap_l2ca_get_info_ip ;
typedef TYPE_9__* ng_btsocket_l2cap_raw_pcb_p ;
typedef TYPE_5__* caddr_t ;
struct TYPE_25__ {scalar_t__ token; int flags; int pcb_mtx; TYPE_2__* rt; struct ng_mesg* msg; int dst; } ;
struct TYPE_19__ {int hook; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (struct ng_mesg*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (struct ng_mesg*,int ,int ,int ,int ) ;
 int FUNC_2 (int,int *,struct ng_mesg*,int ,int ) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_5__*,TYPE_6__*,int) ;
 int FUNC_6 (TYPE_5__*,TYPE_5__*,int) ;
 int VAR_22 ;
 void* FUNC_7 (int,int ) ;
 int FUNC_8 (struct ng_mesg**,int *,int,char*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (scalar_t__*) ;
 int VAR_23 ;
 int * VAR_24 ;
 int FUNC_12 (int ,int ,int *,int) ;
 int FUNC_13 (TYPE_9__*,int ,int *,int) ;
 TYPE_9__* FUNC_14 (struct socket*) ;

int
FUNC_15(struct socket *VAR_25, u_long VAR_26, caddr_t VAR_27,
  struct ifnet *VAR_28, struct thread *VAR_29)
{
 ng_btsocket_l2cap_raw_pcb_p VAR_30 = FUNC_14(VAR_25);
 struct ng_mesg *VAR_31 = ((void*)0);
 int VAR_32 = 0;

 if (VAR_30 == ((void*)0))
  return (VAR_2);
 if (VAR_24 == ((void*)0))
  return (VAR_2);

 FUNC_9(&VAR_30->pcb_mtx);


 if (VAR_30->rt == ((void*)0)) {
  FUNC_10(&VAR_30->pcb_mtx);
  return (VAR_1);
 }


 if (VAR_30->token != 0) {
  FUNC_10(&VAR_30->pcb_mtx);
  return (VAR_0);
 }

 switch (VAR_26) {
 case 130: {
  struct ng_btsocket_l2cap_raw_node_flags *VAR_33 =
   (struct ng_btsocket_l2cap_raw_node_flags *) VAR_27;

  VAR_32 = FUNC_13(VAR_30,
    VAR_13,
    &VAR_33->flags, sizeof(VAR_33->flags));
  } break;

 case 131: {
  struct ng_btsocket_l2cap_raw_node_debug *VAR_34 =
   (struct ng_btsocket_l2cap_raw_node_debug *) VAR_27;

  VAR_32 = FUNC_13(VAR_30,
    VAR_12,
    &VAR_34->debug, sizeof(VAR_34->debug));
  } break;

 case 128: {
  struct ng_btsocket_l2cap_raw_node_debug *VAR_35 =
   (struct ng_btsocket_l2cap_raw_node_debug *) VAR_27;

  if (VAR_30->flags & VAR_16)
   VAR_32 = FUNC_12(VAR_30->rt->hook,
     VAR_15,
     &VAR_35->debug, sizeof(VAR_35->debug));
  else
   VAR_32 = VAR_4;
  } break;

 case 132: {
  struct ng_btsocket_l2cap_raw_con_list *VAR_36 =
   (struct ng_btsocket_l2cap_raw_con_list *) VAR_27;
  ng_l2cap_node_con_list_ep *VAR_37 = ((void*)0);
                ng_l2cap_node_con_ep *VAR_38 = ((void*)0);

  if (VAR_36->num_connections == 0 ||
      VAR_36->num_connections > VAR_18 ||
      VAR_36->connections == ((void*)0)) {
   FUNC_10(&VAR_30->pcb_mtx);
   return (VAR_2);
  }

  FUNC_1(VAR_31, VAR_6, VAR_11,
   0, VAR_5);
  if (VAR_31 == ((void*)0)) {
   FUNC_10(&VAR_30->pcb_mtx);
   return (VAR_3);
  }
  FUNC_11(&VAR_31->header.token);
  VAR_30->token = VAR_31->header.token;
  VAR_30->msg = ((void*)0);

  FUNC_2(VAR_32, VAR_24, VAR_31,
   VAR_30->rt->hook, 0);
  if (VAR_32 != 0) {
   VAR_30->token = 0;
   FUNC_10(&VAR_30->pcb_mtx);
   return (VAR_32);
  }

  VAR_32 = FUNC_8(&VAR_30->msg, &VAR_30->pcb_mtx, VAR_21|VAR_20, "l2ctl",
    VAR_23 * VAR_22);
  VAR_30->token = 0;

  if (VAR_32 != 0) {
   FUNC_10(&VAR_30->pcb_mtx);
   return (VAR_32);
  }

  VAR_31 = VAR_30->msg;
  VAR_30->msg = ((void*)0);

  FUNC_10(&VAR_30->pcb_mtx);

  if (VAR_31 != ((void*)0) &&
      VAR_31->header.cmd == VAR_11) {

   VAR_37 = (ng_l2cap_node_con_list_ep *)(VAR_31->data);
   VAR_38 = (ng_l2cap_node_con_ep *)(VAR_37 + 1);

   VAR_36->num_connections = FUNC_7(VAR_36->num_connections,
      VAR_37->num_connections);
   if (VAR_36->num_connections > 0)
    VAR_32 = FUNC_6((caddr_t) VAR_38,
     (caddr_t) VAR_36->connections,
     VAR_36->num_connections * sizeof(*VAR_38));
  } else
   VAR_32 = VAR_2;

  FUNC_0(VAR_31);
  return (VAR_32);
  }

 case 133: {
  struct ng_btsocket_l2cap_raw_chan_list *VAR_39 =
   (struct ng_btsocket_l2cap_raw_chan_list *) VAR_27;
  ng_l2cap_node_chan_list_ep *VAR_40 = ((void*)0);
                ng_l2cap_node_chan_ep *VAR_41 = ((void*)0);

  if (VAR_39->num_channels == 0 ||
      VAR_39->num_channels > VAR_17 ||
      VAR_39->channels == ((void*)0)) {
   FUNC_10(&VAR_30->pcb_mtx);
   return (VAR_2);
  }

  FUNC_1(VAR_31, VAR_6,
   VAR_10, 0, VAR_5);
  if (VAR_31 == ((void*)0)) {
   FUNC_10(&VAR_30->pcb_mtx);
   return (VAR_3);
  }
  FUNC_11(&VAR_31->header.token);
  VAR_30->token = VAR_31->header.token;
  VAR_30->msg = ((void*)0);

  FUNC_2(VAR_32, VAR_24, VAR_31,
   VAR_30->rt->hook, 0);
  if (VAR_32 != 0) {
   VAR_30->token = 0;
   FUNC_10(&VAR_30->pcb_mtx);
   return (VAR_32);
  }

  VAR_32 = FUNC_8(&VAR_30->msg, &VAR_30->pcb_mtx, VAR_21|VAR_20, "l2ctl",
    VAR_23 * VAR_22);
  VAR_30->token = 0;

  if (VAR_32 != 0) {
   FUNC_10(&VAR_30->pcb_mtx);
   return (VAR_32);
  }

  VAR_31 = VAR_30->msg;
  VAR_30->msg = ((void*)0);

  FUNC_10(&VAR_30->pcb_mtx);

  if (VAR_31 != ((void*)0) &&
      VAR_31->header.cmd == VAR_10) {

   VAR_40 = (ng_l2cap_node_chan_list_ep *)(VAR_31->data);
   VAR_41 = (ng_l2cap_node_chan_ep *)(VAR_40 + 1);

   VAR_39->num_channels = FUNC_7(VAR_39->num_channels,
      VAR_40->num_channels);
   if (VAR_39->num_channels > 0)
    VAR_32 = FUNC_6((caddr_t) VAR_41,
      (caddr_t) VAR_39->channels,
      VAR_39->num_channels * sizeof(*VAR_41));
  } else
   VAR_32 = VAR_2;

  FUNC_0(VAR_31);
  return (VAR_32);
  }

 case 135: {
  struct ng_btsocket_l2cap_raw_ping *VAR_42 =
   (struct ng_btsocket_l2cap_raw_ping *) VAR_27;
  ng_l2cap_l2ca_ping_ip *VAR_43 = ((void*)0);
  ng_l2cap_l2ca_ping_op *VAR_44 = ((void*)0);

  if ((VAR_42->echo_size != 0 && VAR_42->echo_data == ((void*)0)) ||
       VAR_42->echo_size > VAR_19) {
   FUNC_10(&VAR_30->pcb_mtx);
   return (VAR_2);
  }

  FUNC_1(VAR_31, VAR_6,
   VAR_8, sizeof(*VAR_43) + VAR_42->echo_size,
   VAR_5);
  if (VAR_31 == ((void*)0)) {
   FUNC_10(&VAR_30->pcb_mtx);
   return (VAR_3);
  }
  FUNC_11(&VAR_31->header.token);
  VAR_30->token = VAR_31->header.token;
  VAR_30->msg = ((void*)0);

  VAR_43 = (ng_l2cap_l2ca_ping_ip *)(VAR_31->data);
  FUNC_3(&VAR_30->dst, &VAR_43->bdaddr, sizeof(VAR_43->bdaddr));
  VAR_43->echo_size = VAR_42->echo_size;

  if (VAR_43->echo_size > 0) {
   FUNC_10(&VAR_30->pcb_mtx);
   VAR_32 = FUNC_5(VAR_42->echo_data, VAR_43 + 1, VAR_42->echo_size);
   FUNC_9(&VAR_30->pcb_mtx);

   if (VAR_32 != 0) {
    FUNC_0(VAR_31);
    VAR_30->token = 0;
    FUNC_10(&VAR_30->pcb_mtx);
    return (VAR_32);
   }
  }

  FUNC_2(VAR_32, VAR_24, VAR_31,
   VAR_30->rt->hook, 0);
  if (VAR_32 != 0) {
   VAR_30->token = 0;
   FUNC_10(&VAR_30->pcb_mtx);
   return (VAR_32);
  }

  VAR_32 = FUNC_8(&VAR_30->msg, &VAR_30->pcb_mtx, VAR_21|VAR_20, "l2ctl",
    FUNC_4());
  VAR_30->token = 0;

  if (VAR_32 != 0) {
   FUNC_10(&VAR_30->pcb_mtx);
   return (VAR_32);
  }

  VAR_31 = VAR_30->msg;
  VAR_30->msg = ((void*)0);

  FUNC_10(&VAR_30->pcb_mtx);

  if (VAR_31 != ((void*)0) &&
      VAR_31->header.cmd == VAR_8) {

   VAR_44 = (ng_l2cap_l2ca_ping_op *)(VAR_31->data);
   VAR_42->result = VAR_44->result;
   VAR_42->echo_size = FUNC_7(VAR_42->echo_size, VAR_44->echo_size);

   if (VAR_42->echo_size > 0)
    VAR_32 = FUNC_6(VAR_44 + 1, VAR_42->echo_data,
      VAR_42->echo_size);
  } else
   VAR_32 = VAR_2;

  FUNC_0(VAR_31);
  return (VAR_32);
  }

 case 136: {
  struct ng_btsocket_l2cap_raw_get_info *VAR_45 =
   (struct ng_btsocket_l2cap_raw_get_info *) VAR_27;
  ng_l2cap_l2ca_get_info_ip *VAR_46 = ((void*)0);
  ng_l2cap_l2ca_get_info_op *VAR_47 = ((void*)0);

  if (!(VAR_30->flags & VAR_16)) {
   FUNC_10(&VAR_30->pcb_mtx);
   return (VAR_4);
  }

  if (VAR_45->info_size != 0 && VAR_45->info_data == ((void*)0)) {
   FUNC_10(&VAR_30->pcb_mtx);
   return (VAR_2);
  }

  FUNC_1(VAR_31, VAR_6,
   VAR_7, sizeof(*VAR_46) + VAR_45->info_size,
   VAR_5);
  if (VAR_31 == ((void*)0)) {
   FUNC_10(&VAR_30->pcb_mtx);
   return (VAR_3);
  }
  FUNC_11(&VAR_31->header.token);
  VAR_30->token = VAR_31->header.token;
  VAR_30->msg = ((void*)0);

  VAR_46 = (ng_l2cap_l2ca_get_info_ip *)(VAR_31->data);
  FUNC_3(&VAR_30->dst, &VAR_46->bdaddr, sizeof(VAR_46->bdaddr));
  VAR_46->info_type = VAR_45->info_type;

  FUNC_2(VAR_32, VAR_24, VAR_31,
   VAR_30->rt->hook, 0);
  if (VAR_32 != 0) {
   VAR_30->token = 0;
   FUNC_10(&VAR_30->pcb_mtx);
   return (VAR_32);
  }

  VAR_32 = FUNC_8(&VAR_30->msg, &VAR_30->pcb_mtx, VAR_21|VAR_20, "l2ctl",
    FUNC_4());
  VAR_30->token = 0;

  if (VAR_32 != 0) {
   FUNC_10(&VAR_30->pcb_mtx);
   return (VAR_32);
  }

  VAR_31 = VAR_30->msg;
  VAR_30->msg = ((void*)0);

  FUNC_10(&VAR_30->pcb_mtx);

  if (VAR_31 != ((void*)0) &&
      VAR_31->header.cmd == VAR_7) {

   VAR_47 = (ng_l2cap_l2ca_get_info_op *)(VAR_31->data);
   VAR_45->result = VAR_47->result;
   VAR_45->info_size = FUNC_7(VAR_45->info_size, VAR_47->info_size);

   if (VAR_45->info_size > 0)
    VAR_32 = FUNC_6(VAR_47 + 1, VAR_45->info_data,
      VAR_45->info_size);
  } else
   VAR_32 = VAR_2;

  FUNC_0(VAR_31);
  return (VAR_32);
  }

 case 134: {
  struct ng_btsocket_l2cap_raw_auto_discon_timo *VAR_48 =
   (struct ng_btsocket_l2cap_raw_auto_discon_timo *) VAR_27;

  VAR_32 = FUNC_13(VAR_30,
    VAR_9,
    &VAR_48->timeout, sizeof(VAR_48->timeout));
  } break;

 case 129: {
  struct ng_btsocket_l2cap_raw_auto_discon_timo *VAR_49 =
   (struct ng_btsocket_l2cap_raw_auto_discon_timo *) VAR_27;

  if (VAR_30->flags & VAR_16)
   VAR_32 = FUNC_12(VAR_30->rt->hook,
     VAR_14,
     &VAR_49->timeout, sizeof(VAR_49->timeout));
  else
   VAR_32 = VAR_4;
  } break;

 default:
  VAR_32 = VAR_2;
  break;
 }

 FUNC_10(&VAR_30->pcb_mtx);

 return (VAR_32);
}
