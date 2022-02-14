
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct stp_proto {int dummy; } ;
struct sk_buff {unsigned char* data; } ;
struct net_device {int br_port; } ;
struct net_bridge_port {scalar_t__ state; struct net_bridge* br; } ;
struct net_bridge {scalar_t__ stp_enabled; int lock; int group_addr; TYPE_1__* dev; } ;
struct TYPE_7__ {unsigned char* prio; unsigned char* addr; } ;
struct TYPE_6__ {unsigned char* prio; unsigned char* addr; } ;
struct br_config_bpdu {int topology_change; int topology_change_ack; unsigned char root_path_cost; unsigned char port_id; void* forward_delay; void* hello_time; void* max_age; void* message_age; TYPE_3__ bridge_id; TYPE_2__ root; } ;
struct TYPE_8__ {unsigned char* h_dest; } ;
struct TYPE_5__ {int flags; } ;


 unsigned char const VAR_0 ;
 unsigned char const VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (unsigned char const*) ;
 int FUNC_1 (struct net_bridge_port*,struct br_config_bpdu*) ;
 int FUNC_2 (struct net_bridge_port*) ;
 scalar_t__ FUNC_3 (unsigned char const*,int ) ;
 TYPE_4__* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 struct net_bridge_port* FUNC_7 (int ) ;
 unsigned char* FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(const struct stp_proto *VAR_5, struct sk_buff *VAR_6,
  struct net_device *VAR_7)
{
 const unsigned char *VAR_8 = FUNC_4(VAR_6)->h_dest;
 struct net_bridge_port *VAR_9 = FUNC_7(VAR_7->br_port);
 struct net_bridge *VAR_10;
 const unsigned char *VAR_11;

 if (!VAR_9)
  goto err;

 if (!FUNC_6(VAR_6, 4))
  goto err;


 VAR_11 = VAR_6->data;
 if (VAR_11[0] != 0 || VAR_11[1] != 0 || VAR_11[2] != 0)
  goto err;

 VAR_10 = VAR_9->br;
 FUNC_9(&VAR_10->lock);

 if (VAR_10->stp_enabled != VAR_2)
  goto out;

 if (!(VAR_10->dev->flags & VAR_4))
  goto out;

 if (VAR_9->state == VAR_3)
  goto out;

 if (FUNC_3(VAR_8, VAR_10->group_addr) != 0)
  goto out;

 VAR_11 = FUNC_8(VAR_6, 3);

 if (VAR_11[0] == VAR_0) {
  struct br_config_bpdu VAR_12;

  if (!FUNC_6(VAR_6, 32))
   goto out;

  VAR_11 = VAR_6->data;
  VAR_12.topology_change = (VAR_11[1] & 0x01) ? 1 : 0;
  VAR_12.topology_change_ack = (VAR_11[1] & 0x80) ? 1 : 0;

  VAR_12.root.prio[0] = VAR_11[2];
  VAR_12.root.prio[1] = VAR_11[3];
  VAR_12.root.addr[0] = VAR_11[4];
  VAR_12.root.addr[1] = VAR_11[5];
  VAR_12.root.addr[2] = VAR_11[6];
  VAR_12.root.addr[3] = VAR_11[7];
  VAR_12.root.addr[4] = VAR_11[8];
  VAR_12.root.addr[5] = VAR_11[9];
  VAR_12.root_path_cost =
   (VAR_11[10] << 24) |
   (VAR_11[11] << 16) |
   (VAR_11[12] << 8) |
   VAR_11[13];
  VAR_12.bridge_id.prio[0] = VAR_11[14];
  VAR_12.bridge_id.prio[1] = VAR_11[15];
  VAR_12.bridge_id.addr[0] = VAR_11[16];
  VAR_12.bridge_id.addr[1] = VAR_11[17];
  VAR_12.bridge_id.addr[2] = VAR_11[18];
  VAR_12.bridge_id.addr[3] = VAR_11[19];
  VAR_12.bridge_id.addr[4] = VAR_11[20];
  VAR_12.bridge_id.addr[5] = VAR_11[21];
  VAR_12.port_id = (VAR_11[22] << 8) | VAR_11[23];

  VAR_12.message_age = FUNC_0(VAR_11+24);
  VAR_12.max_age = FUNC_0(VAR_11+26);
  VAR_12.hello_time = FUNC_0(VAR_11+28);
  VAR_12.forward_delay = FUNC_0(VAR_11+30);

  FUNC_1(VAR_9, &VAR_12);
 }

 else if (VAR_11[0] == VAR_1) {
  FUNC_2(VAR_9);
 }
 out:
 FUNC_10(&VAR_10->lock);
 err:
 FUNC_5(VAR_6);
}
