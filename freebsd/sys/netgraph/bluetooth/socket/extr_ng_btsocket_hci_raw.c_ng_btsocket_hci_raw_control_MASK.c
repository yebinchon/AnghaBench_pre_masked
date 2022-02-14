
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_long ;
struct thread {int dummy; } ;
struct socket {int dummy; } ;
struct nodeinfo {int type; } ;
struct TYPE_9__ {scalar_t__ token; int cmd; } ;
struct ng_mesg {scalar_t__ data; TYPE_2__ header; } ;
struct ng_btsocket_hci_raw_node_state {int state; } ;
struct ng_btsocket_hci_raw_node_stat {int stat; } ;
struct ng_btsocket_hci_raw_node_role_switch {int role_switch; } ;
struct ng_btsocket_hci_raw_node_packet_mask {int packet_mask; } ;
struct ng_btsocket_hci_raw_node_neighbor_cache {int num_entries; int * entries; } ;
struct ng_btsocket_hci_raw_node_list_names {struct nodeinfo* names; struct nodeinfo* num_names; } ;
struct ng_btsocket_hci_raw_node_link_policy_mask {int policy_mask; } ;
struct ng_btsocket_hci_raw_node_features {int features; } ;
struct ng_btsocket_hci_raw_node_debug {int debug; } ;
struct ng_btsocket_hci_raw_node_buffer {int buffer; } ;
struct ng_btsocket_hci_raw_node_bdaddr {int bdaddr; } ;
struct ng_btsocket_hci_raw_con_list {int num_connections; int * connections; } ;
struct namelist {int numnames; struct nodeinfo* nodeinfo; } ;
struct ifnet {int dummy; } ;
typedef int path ;
typedef int ng_hci_node_neighbor_cache_entry_ep ;
struct TYPE_10__ {int num_entries; } ;
typedef TYPE_3__ ng_hci_node_get_neighbor_cache_ep ;
struct TYPE_11__ {int num_connections; } ;
typedef TYPE_4__ ng_hci_node_con_list_ep ;
typedef int ng_hci_node_con_ep ;
typedef TYPE_5__* ng_btsocket_hci_raw_pcb_p ;
typedef scalar_t__ caddr_t ;
struct TYPE_8__ {scalar_t__* hci_node; } ;
struct TYPE_12__ {scalar_t__ token; int flags; int pcb_mtx; struct ng_mesg* msg; TYPE_1__ addr; } ;


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
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (struct ng_mesg*) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_1 (struct ng_mesg*,int ,int ,int ,int ) ;
 int VAR_31 ;
 int FUNC_2 (int,int *,struct ng_mesg*,char*,int ) ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_3 (scalar_t__,scalar_t__,int) ;
 int VAR_34 ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (struct ng_mesg**,int *,int,char*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__*) ;
 int VAR_35 ;
 int * VAR_36 ;
 int FUNC_9 (char*,int ,int *,int) ;
 int FUNC_10 (TYPE_5__*,char*,int ,int *,int) ;
 int FUNC_11 (char*,int,char*,scalar_t__*) ;
 TYPE_5__* FUNC_12 (struct socket*) ;
 int FUNC_13 (int ,int ) ;

int
FUNC_14(struct socket *VAR_37, u_long VAR_38, caddr_t VAR_39,
  struct ifnet *VAR_40, struct thread *VAR_41)
{
 ng_btsocket_hci_raw_pcb_p VAR_42 = FUNC_12(VAR_37);
 char VAR_43[VAR_31 + 1];
 struct ng_mesg *VAR_44 = ((void*)0);
 int VAR_45 = 0;

 if (VAR_42 == ((void*)0))
  return (VAR_2);
 if (VAR_36 == ((void*)0))
  return (VAR_2);

 FUNC_6(&VAR_42->pcb_mtx);


 if (VAR_42->addr.hci_node[0] == 0) {
  FUNC_7(&VAR_42->pcb_mtx);
  return (VAR_1);
 }


 if (VAR_42->token != 0) {
  FUNC_7(&VAR_42->pcb_mtx);
  return (VAR_0);
 }

 FUNC_11(VAR_43, sizeof(VAR_43), "%s:", VAR_42->addr.hci_node);

 switch (VAR_38) {
 case 135: {
  struct ng_btsocket_hci_raw_node_state *VAR_46 =
   (struct ng_btsocket_hci_raw_node_state *) VAR_39;

  VAR_45 = FUNC_10(VAR_42, VAR_43,
    VAR_19,
    &VAR_46->state, sizeof(VAR_46->state));
  } break;

 case 134:
  if (VAR_42->flags & VAR_27)
   VAR_45 = FUNC_9(VAR_43,
     VAR_20, ((void*)0), 0);
  else
   VAR_45 = VAR_4;
  break;

 case 142: {
  struct ng_btsocket_hci_raw_node_debug *VAR_47 =
   (struct ng_btsocket_hci_raw_node_debug *) VAR_39;

  VAR_45 = FUNC_10(VAR_42, VAR_43,
    VAR_12,
    &VAR_47->debug, sizeof(VAR_47->debug));
  } break;

 case 131: {
  struct ng_btsocket_hci_raw_node_debug *VAR_48 =
   (struct ng_btsocket_hci_raw_node_debug *) VAR_39;

  if (VAR_42->flags & VAR_27)
   VAR_45 = FUNC_9(VAR_43,
     VAR_22, &VAR_48->debug,
     sizeof(VAR_48->debug));
  else
   VAR_45 = VAR_4;
  } break;

 case 144: {
  struct ng_btsocket_hci_raw_node_buffer *VAR_49 =
   (struct ng_btsocket_hci_raw_node_buffer *) VAR_39;

  VAR_45 = FUNC_10(VAR_42, VAR_43,
    VAR_10,
    &VAR_49->buffer, sizeof(VAR_49->buffer));
  } break;

 case 145: {
  struct ng_btsocket_hci_raw_node_bdaddr *VAR_50 =
   (struct ng_btsocket_hci_raw_node_bdaddr *) VAR_39;

  VAR_45 = FUNC_10(VAR_42, VAR_43,
    VAR_9,
    &VAR_50->bdaddr, sizeof(VAR_50->bdaddr));
  } break;

 case 141: {
  struct ng_btsocket_hci_raw_node_features *VAR_51 =
   (struct ng_btsocket_hci_raw_node_features *) VAR_39;

  VAR_45 = FUNC_10(VAR_42, VAR_43,
    VAR_13,
    &VAR_51->features, sizeof(VAR_51->features));
  } break;

 case 136: {
  struct ng_btsocket_hci_raw_node_stat *VAR_52 =
   (struct ng_btsocket_hci_raw_node_stat *) VAR_39;

  VAR_45 = FUNC_10(VAR_42, VAR_43,
    VAR_18,
    &VAR_52->stat, sizeof(VAR_52->stat));
  } break;

 case 132:
  if (VAR_42->flags & VAR_27)
   VAR_45 = FUNC_9(VAR_43,
     VAR_21, ((void*)0), 0);
  else
   VAR_45 = VAR_4;
  break;

 case 146:
  if (VAR_42->flags & VAR_27)
   VAR_45 = FUNC_9(VAR_43,
     VAR_8,
     ((void*)0), 0);
  else
   VAR_45 = VAR_4;
  break;

 case 139: {
  struct ng_btsocket_hci_raw_node_neighbor_cache *VAR_53 =
   (struct ng_btsocket_hci_raw_node_neighbor_cache *) VAR_39;
  ng_hci_node_get_neighbor_cache_ep *VAR_54 = ((void*)0);
  ng_hci_node_neighbor_cache_entry_ep *VAR_55 = ((void*)0);

  if (VAR_53->num_entries <= 0 ||
      VAR_53->num_entries > VAR_29 ||
      VAR_53->entries == ((void*)0)) {
   FUNC_7(&VAR_42->pcb_mtx);
   return (VAR_2);
  }

  FUNC_1(VAR_44, VAR_7,
   VAR_15, 0, VAR_5);
  if (VAR_44 == ((void*)0)) {
   FUNC_7(&VAR_42->pcb_mtx);
   return (VAR_3);
  }
  FUNC_8(&VAR_44->header.token);
  VAR_42->token = VAR_44->header.token;
  VAR_42->msg = ((void*)0);

  FUNC_2(VAR_45, VAR_36, VAR_44, VAR_43, 0);
  if (VAR_45 != 0) {
   VAR_42->token = 0;
   FUNC_7(&VAR_42->pcb_mtx);
   return (VAR_45);
  }

  VAR_45 = FUNC_5(&VAR_42->msg, &VAR_42->pcb_mtx,
    VAR_33|VAR_32, "hcictl",
    VAR_35 * VAR_34);
  VAR_42->token = 0;

  if (VAR_45 != 0) {
   FUNC_7(&VAR_42->pcb_mtx);
   return (VAR_45);
  }

  VAR_44 = VAR_42->msg;
  VAR_42->msg = ((void*)0);

  FUNC_7(&VAR_42->pcb_mtx);

  if (VAR_44 != ((void*)0) &&
      VAR_44->header.cmd == VAR_15) {

   VAR_54 = (ng_hci_node_get_neighbor_cache_ep *)(VAR_44->data);
   VAR_55 = (ng_hci_node_neighbor_cache_entry_ep *)(VAR_54 + 1);

   VAR_53->num_entries = FUNC_4(VAR_53->num_entries, VAR_54->num_entries);
   if (VAR_53->num_entries > 0)
    VAR_45 = FUNC_3((caddr_t) VAR_55,
      (caddr_t) VAR_53->entries,
      VAR_53->num_entries * sizeof(*VAR_55));
  } else
   VAR_45 = VAR_2;

  FUNC_0(VAR_44);
  return (VAR_45);
  }

 case 143: {
  struct ng_btsocket_hci_raw_con_list *VAR_56 =
   (struct ng_btsocket_hci_raw_con_list *) VAR_39;
  ng_hci_node_con_list_ep *VAR_57 = ((void*)0);
  ng_hci_node_con_ep *VAR_58 = ((void*)0);

  if (VAR_56->num_connections == 0 ||
      VAR_56->num_connections > VAR_28 ||
      VAR_56->connections == ((void*)0)) {
   FUNC_7(&VAR_42->pcb_mtx);
   return (VAR_2);
  }

  FUNC_1(VAR_44, VAR_7, VAR_11,
   0, VAR_5);
  if (VAR_44 == ((void*)0)) {
   FUNC_7(&VAR_42->pcb_mtx);
   return (VAR_3);
  }
  FUNC_8(&VAR_44->header.token);
  VAR_42->token = VAR_44->header.token;
  VAR_42->msg = ((void*)0);

  FUNC_2(VAR_45, VAR_36, VAR_44, VAR_43, 0);
  if (VAR_45 != 0) {
   VAR_42->token = 0;
   FUNC_7(&VAR_42->pcb_mtx);
   return (VAR_45);
  }

  VAR_45 = FUNC_5(&VAR_42->msg, &VAR_42->pcb_mtx,
    VAR_33|VAR_32, "hcictl",
    VAR_35 * VAR_34);
  VAR_42->token = 0;

  if (VAR_45 != 0) {
   FUNC_7(&VAR_42->pcb_mtx);
   return (VAR_45);
  }

  VAR_44 = VAR_42->msg;
  VAR_42->msg = ((void*)0);

  FUNC_7(&VAR_42->pcb_mtx);

  if (VAR_44 != ((void*)0) &&
      VAR_44->header.cmd == VAR_11) {

   VAR_57 = (ng_hci_node_con_list_ep *)(VAR_44->data);
   VAR_58 = (ng_hci_node_con_ep *)(VAR_57 + 1);

   VAR_56->num_connections = FUNC_4(VAR_56->num_connections,
      VAR_57->num_connections);
   if (VAR_56->num_connections > 0)
    VAR_45 = FUNC_3((caddr_t) VAR_58,
     (caddr_t) VAR_56->connections,
     VAR_56->num_connections * sizeof(*VAR_58));
  } else
   VAR_45 = VAR_2;

  FUNC_0(VAR_44);
  return (VAR_45);
  }

 case 140: {
  struct ng_btsocket_hci_raw_node_link_policy_mask *VAR_59 =
   (struct ng_btsocket_hci_raw_node_link_policy_mask *)
    VAR_39;

  VAR_45 = FUNC_10(VAR_42, VAR_43,
    VAR_14,
    &VAR_59->policy_mask, sizeof(VAR_59->policy_mask));
  } break;

 case 130: {
  struct ng_btsocket_hci_raw_node_link_policy_mask *VAR_60 =
   (struct ng_btsocket_hci_raw_node_link_policy_mask *)
    VAR_39;

  if (VAR_42->flags & VAR_27)
   VAR_45 = FUNC_9(VAR_43,
     VAR_23,
     &VAR_60->policy_mask,
     sizeof(VAR_60->policy_mask));
  else
   VAR_45 = VAR_4;
  } break;

 case 138: {
  struct ng_btsocket_hci_raw_node_packet_mask *VAR_61 =
   (struct ng_btsocket_hci_raw_node_packet_mask *) VAR_39;

  VAR_45 = FUNC_10(VAR_42, VAR_43,
    VAR_16,
    &VAR_61->packet_mask, sizeof(VAR_61->packet_mask));
  } break;

 case 129: {
  struct ng_btsocket_hci_raw_node_packet_mask *VAR_62 =
   (struct ng_btsocket_hci_raw_node_packet_mask *) VAR_39;

  if (VAR_42->flags & VAR_27)
   VAR_45 = FUNC_9(VAR_43,
     VAR_24,
     &VAR_62->packet_mask,
     sizeof(VAR_62->packet_mask));
  else
   VAR_45 = VAR_4;
  } break;

 case 137: {
  struct ng_btsocket_hci_raw_node_role_switch *VAR_63 =
   (struct ng_btsocket_hci_raw_node_role_switch *) VAR_39;

  VAR_45 = FUNC_10(VAR_42, VAR_43,
    VAR_17,
    &VAR_63->role_switch, sizeof(VAR_63->role_switch));
  } break;

 case 128: {
  struct ng_btsocket_hci_raw_node_role_switch *VAR_64 =
   (struct ng_btsocket_hci_raw_node_role_switch *) VAR_39;

  if (VAR_42->flags & VAR_27)
   VAR_45 = FUNC_9(VAR_43,
     VAR_25,
     &VAR_64->role_switch,
     sizeof(VAR_64->role_switch));
  else
   VAR_45 = VAR_4;
  } break;

 case 133: {
  struct ng_btsocket_hci_raw_node_list_names *VAR_65 =
   (struct ng_btsocket_hci_raw_node_list_names *) VAR_39;
  struct nodeinfo *VAR_66 = VAR_65->names;

  if (VAR_65->num_names == 0) {
   FUNC_7(&VAR_42->pcb_mtx);
   return (VAR_2);
  }

  FUNC_1(VAR_44, VAR_6, VAR_26,
   0, VAR_5);
  if (VAR_44 == ((void*)0)) {
   FUNC_7(&VAR_42->pcb_mtx);
   return (VAR_3);
  }
  FUNC_8(&VAR_44->header.token);
  VAR_42->token = VAR_44->header.token;
  VAR_42->msg = ((void*)0);

  FUNC_2(VAR_45, VAR_36, VAR_44, ".:", 0);
  if (VAR_45 != 0) {
   VAR_42->token = 0;
   FUNC_7(&VAR_42->pcb_mtx);
   return (VAR_45);
  }

  VAR_45 = FUNC_5(&VAR_42->msg, &VAR_42->pcb_mtx,
    VAR_33|VAR_32, "hcictl",
    VAR_35 * VAR_34);
  VAR_42->token = 0;

  if (VAR_45 != 0) {
   FUNC_7(&VAR_42->pcb_mtx);
   return (VAR_45);
  }

  VAR_44 = VAR_42->msg;
  VAR_42->msg = ((void*)0);

  FUNC_7(&VAR_42->pcb_mtx);

  if (VAR_44 != ((void*)0) && VAR_44->header.cmd == VAR_26) {

   struct namelist *VAR_67 = (struct namelist *) VAR_44->data;
   struct nodeinfo *VAR_68 = &VAR_67->nodeinfo[0];

   while (VAR_65->num_names > 0 && VAR_67->numnames > 0) {
    if (FUNC_13(VAR_68->type, VAR_30) == 0) {
     VAR_45 = FUNC_3((caddr_t) VAR_68,
       (caddr_t) VAR_66,
       sizeof(*VAR_66));
     if (VAR_45 != 0)
      break;

     VAR_65->num_names --;
     VAR_66 ++;
    }

    VAR_67->numnames --;
    VAR_68 ++;
   }

   VAR_65->num_names = VAR_66 - VAR_65->names;
  } else
   VAR_45 = VAR_2;

  FUNC_0(VAR_44);
  return (VAR_45);
  }

 default:
  VAR_45 = VAR_2;
  break;
 }

 FUNC_7(&VAR_42->pcb_mtx);

 return (VAR_45);
}
