
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr_ipx {int sipx_port; int sipx_node; scalar_t__ sipx_network; int sipx_type; } ;
struct sock {scalar_t__ sk_no_check; } ;
struct sk_buff {struct sock* sk; } ;
struct TYPE_9__ {int node; int sock; } ;
struct TYPE_8__ {int sock; int node; } ;
struct ipxhdr {TYPE_4__ ipx_dest; void* ipx_checksum; TYPE_3__ ipx_source; int ipx_type; void* ipx_pktsize; } ;
struct ipx_sock {int port; TYPE_2__* intrfc; int node; } ;
struct ipx_route {int ir_router_node; scalar_t__ ir_routed; struct ipx_interface* ir_intrfc; } ;
struct ipx_interface {int if_ipx_offset; void* if_dlink_type; int if_node; scalar_t__ if_netnum; } ;
struct iovec {int dummy; } ;
struct TYPE_6__ {int index; } ;
struct TYPE_10__ {scalar_t__ ipx_dest_net; scalar_t__ ipx_source_net; TYPE_1__ last_hop; scalar_t__ ipx_tctrl; } ;
struct TYPE_7__ {int if_node; scalar_t__ if_netnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__* FUNC_0 (struct sk_buff*) ;
 void* FUNC_1 (int) ;
 void* FUNC_2 (struct ipxhdr*,size_t) ;
 struct ipxhdr* FUNC_3 (struct sk_buff*) ;
 struct ipx_interface* VAR_3 ;
 struct ipx_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct ipx_interface*) ;
 int FUNC_6 (struct ipx_interface*) ;
 int FUNC_7 (struct ipx_interface*,struct sk_buff*,int ) ;
 struct ipx_route* FUNC_8 (scalar_t__) ;
 int FUNC_9 (struct ipx_route*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,struct iovec*,size_t) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct sk_buff*,size_t) ;
 int FUNC_15 (struct sk_buff*,int) ;
 int FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*) ;
 struct sk_buff* FUNC_18 (struct sock*,size_t,int,int*) ;

int FUNC_19(struct sock *VAR_4, struct sockaddr_ipx *VAR_5,
   struct iovec *VAR_6, size_t VAR_7, int VAR_8)
{
 struct sk_buff *VAR_9;
 struct ipx_sock *VAR_10 = FUNC_4(VAR_4);
 struct ipx_interface *VAR_11;
 struct ipxhdr *VAR_12;
 size_t VAR_13;
 int VAR_14;
 struct ipx_route *VAR_15 = ((void*)0);
 int VAR_16;


 if (!VAR_5->sipx_network && VAR_3) {
  VAR_5->sipx_network = VAR_3->if_netnum;
  VAR_11 = VAR_3;
 } else {
  VAR_15 = FUNC_8(VAR_5->sipx_network);
  VAR_16 = -VAR_0;
  if (!VAR_15)
   goto out;
  VAR_11 = VAR_15->ir_intrfc;
 }

 FUNC_5(VAR_11);
 VAR_14 = VAR_11->if_ipx_offset;
 VAR_13 = sizeof(struct ipxhdr) + VAR_7 + VAR_14;

 VAR_9 = FUNC_18(VAR_4, VAR_13, VAR_8, &VAR_16);
 if (!VAR_9)
  goto out_put;

 FUNC_15(VAR_9, VAR_14);
 VAR_9->sk = VAR_4;


 FUNC_16(VAR_9);
 FUNC_17(VAR_9);
 FUNC_14(VAR_9, sizeof(struct ipxhdr));
 VAR_12 = FUNC_3(VAR_9);
 VAR_12->ipx_pktsize = FUNC_1(VAR_7 + sizeof(struct ipxhdr));
 FUNC_0(VAR_9)->ipx_tctrl = 0;
 VAR_12->ipx_type = VAR_5->sipx_type;

 FUNC_0(VAR_9)->last_hop.index = -1;




 VAR_16 = FUNC_13(VAR_10->port);
 if (VAR_16 == 0x453 || VAR_16 == 0x452) {

  FUNC_0(VAR_9)->ipx_source_net = VAR_11->if_netnum;
  FUNC_11(VAR_12->ipx_source.node, VAR_11->if_node, VAR_2);
 } else {
  FUNC_0(VAR_9)->ipx_source_net = VAR_10->intrfc->if_netnum;
  FUNC_11(VAR_12->ipx_source.node, VAR_10->intrfc->if_node,
   VAR_2);
 }

 VAR_12->ipx_source.sock = VAR_10->port;
 FUNC_0(VAR_9)->ipx_dest_net = VAR_5->sipx_network;
 FUNC_11(VAR_12->ipx_dest.node, VAR_5->sipx_node, VAR_2);
 VAR_12->ipx_dest.sock = VAR_5->sipx_port;

 VAR_16 = FUNC_12(FUNC_14(VAR_9, VAR_7), VAR_6, VAR_7);
 if (VAR_16) {
  FUNC_10(VAR_9);
  goto out_put;
 }


 if (VAR_4->sk_no_check || VAR_11->if_dlink_type == FUNC_1(VAR_1))
  VAR_12->ipx_checksum = FUNC_1(0xFFFF);
 else
  VAR_12->ipx_checksum = FUNC_2(VAR_12, VAR_7 + sizeof(struct ipxhdr));

 VAR_16 = FUNC_7(VAR_11, VAR_9, (VAR_15 && VAR_15->ir_routed) ?
    VAR_15->ir_router_node : VAR_12->ipx_dest.node);
out_put:
 FUNC_6(VAR_11);
 if (VAR_15)
  FUNC_9(VAR_15);
out:
 return VAR_16;
}
