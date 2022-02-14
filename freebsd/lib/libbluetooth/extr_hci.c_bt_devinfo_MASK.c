
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_hci {int hci_node; } ;
struct sockaddr {int dummy; } ;
struct TYPE_4__ {int bytes_sent; int bytes_recv; int sco_sent; int sco_recv; int acl_sent; int acl_recv; int evnt_recv; int cmd_sent; } ;
struct TYPE_3__ {int acl_free; int acl_pkts; int acl_size; int sco_free; int sco_pkts; int sco_size; int cmd_free; } ;
struct ng_btsocket_hci_raw_node_state {int debug; int role_switch; int packet_mask; int policy_mask; TYPE_2__ stat; TYPE_1__ buffer; int features; int bdaddr; int state; } ;
struct ng_btsocket_hci_raw_node_stat {int debug; int role_switch; int packet_mask; int policy_mask; TYPE_2__ stat; TYPE_1__ buffer; int features; int bdaddr; int state; } ;
struct ng_btsocket_hci_raw_node_role_switch {int debug; int role_switch; int packet_mask; int policy_mask; TYPE_2__ stat; TYPE_1__ buffer; int features; int bdaddr; int state; } ;
struct ng_btsocket_hci_raw_node_packet_mask {int debug; int role_switch; int packet_mask; int policy_mask; TYPE_2__ stat; TYPE_1__ buffer; int features; int bdaddr; int state; } ;
struct ng_btsocket_hci_raw_node_link_policy_mask {int debug; int role_switch; int packet_mask; int policy_mask; TYPE_2__ stat; TYPE_1__ buffer; int features; int bdaddr; int state; } ;
struct ng_btsocket_hci_raw_node_features {int debug; int role_switch; int packet_mask; int policy_mask; TYPE_2__ stat; TYPE_1__ buffer; int features; int bdaddr; int state; } ;
struct ng_btsocket_hci_raw_node_debug {int debug; int role_switch; int packet_mask; int policy_mask; TYPE_2__ stat; TYPE_1__ buffer; int features; int bdaddr; int state; } ;
struct ng_btsocket_hci_raw_node_buffer {int debug; int role_switch; int packet_mask; int policy_mask; TYPE_2__ stat; TYPE_1__ buffer; int features; int bdaddr; int state; } ;
struct ng_btsocket_hci_raw_node_bdaddr {int debug; int role_switch; int packet_mask; int policy_mask; TYPE_2__ stat; TYPE_1__ buffer; int features; int bdaddr; int state; } ;
struct bt_devinfo {int debug; int role_switch_info; int packet_type_info; int link_policy_info; int bytes_sent; int bytes_recv; int sco_sent; int sco_recv; int acl_sent; int acl_recv; int evnt_recv; int cmd_sent; int acl_free; int acl_pkts; int acl_size; int sco_free; int sco_pkts; int sco_size; int cmd_free; int features; int bdaddr; int state; int devname; } ;
typedef int socklen_t ;
typedef int ha ;


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
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (int,struct sockaddr*,int*) ;
 scalar_t__ FUNC_4 (int,int ,struct ng_btsocket_hci_raw_node_state*,int) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,int) ;

int
FUNC_7(struct bt_devinfo *VAR_11)
{
 union {
  struct ng_btsocket_hci_raw_node_state r0;
  struct ng_btsocket_hci_raw_node_bdaddr r1;
  struct ng_btsocket_hci_raw_node_features r2;
  struct ng_btsocket_hci_raw_node_buffer r3;
  struct ng_btsocket_hci_raw_node_stat r4;
  struct ng_btsocket_hci_raw_node_link_policy_mask r5;
  struct ng_btsocket_hci_raw_node_packet_mask r6;
  struct ng_btsocket_hci_raw_node_role_switch r7;
  struct ng_btsocket_hci_raw_node_debug r8;
 } VAR_12;
 struct sockaddr_hci VAR_13;
 socklen_t VAR_14;
 int VAR_15, VAR_16;

 if (VAR_11 == ((void*)0)) {
  VAR_10 = VAR_0;
  return (-1);
 }

 VAR_15 = FUNC_2(VAR_11->devname);
 if (VAR_15 < 0)
  return (-1);

 VAR_16 = -1;

 VAR_14 = sizeof(VAR_13);
 if (FUNC_3(VAR_15, (struct sockaddr *) &VAR_13, &VAR_14) < 0)
  goto bad;
 FUNC_6(VAR_11->devname, VAR_13.hci_node, sizeof(VAR_11->devname));

 if (FUNC_4(VAR_15, VAR_9, &VAR_12.r0, sizeof(VAR_12.r0)) < 0)
  goto bad;
 VAR_11->state = VAR_12.r0.state;

 if (FUNC_4(VAR_15, VAR_1, &VAR_12.r1, sizeof(VAR_12.r1)) < 0)
  goto bad;
 FUNC_0(&VAR_11->bdaddr, &VAR_12.r1.bdaddr);

 if (FUNC_4(VAR_15, VAR_4, &VAR_12.r2, sizeof(VAR_12.r2)) < 0)
  goto bad;
 FUNC_5(VAR_11->features, VAR_12.r2.features, sizeof(VAR_11->features));

 if (FUNC_4(VAR_15, VAR_2, &VAR_12.r3, sizeof(VAR_12.r3)) < 0)
  goto bad;
 VAR_11->cmd_free = VAR_12.r3.buffer.cmd_free;
 VAR_11->sco_size = VAR_12.r3.buffer.sco_size;
 VAR_11->sco_pkts = VAR_12.r3.buffer.sco_pkts;
 VAR_11->sco_free = VAR_12.r3.buffer.sco_free;
 VAR_11->acl_size = VAR_12.r3.buffer.acl_size;
 VAR_11->acl_pkts = VAR_12.r3.buffer.acl_pkts;
 VAR_11->acl_free = VAR_12.r3.buffer.acl_free;

 if (FUNC_4(VAR_15, VAR_8, &VAR_12.r4, sizeof(VAR_12.r4)) < 0)
  goto bad;
 VAR_11->cmd_sent = VAR_12.r4.stat.cmd_sent;
 VAR_11->evnt_recv = VAR_12.r4.stat.evnt_recv;
 VAR_11->acl_recv = VAR_12.r4.stat.acl_recv;
 VAR_11->acl_sent = VAR_12.r4.stat.acl_sent;
 VAR_11->sco_recv = VAR_12.r4.stat.sco_recv;
 VAR_11->sco_sent = VAR_12.r4.stat.sco_sent;
 VAR_11->bytes_recv = VAR_12.r4.stat.bytes_recv;
 VAR_11->bytes_sent = VAR_12.r4.stat.bytes_sent;

 if (FUNC_4(VAR_15, VAR_5,
   &VAR_12.r5, sizeof(VAR_12.r5)) < 0)
  goto bad;
 VAR_11->link_policy_info = VAR_12.r5.policy_mask;

 if (FUNC_4(VAR_15, VAR_6,
   &VAR_12.r6, sizeof(VAR_12.r6)) < 0)
  goto bad;
 VAR_11->packet_type_info = VAR_12.r6.packet_mask;

  if (FUNC_4(VAR_15, VAR_7,
   &VAR_12.r7, sizeof(VAR_12.r7)) < 0)
  goto bad;
 VAR_11->role_switch_info = VAR_12.r7.role_switch;

 if (FUNC_4(VAR_15, VAR_3, &VAR_12.r8, sizeof(VAR_12.r8)) < 0)
  goto bad;
 VAR_11->debug = VAR_12.r8.debug;

 VAR_16 = 0;
bad:
 FUNC_1(VAR_15);

 return (VAR_16);
}
