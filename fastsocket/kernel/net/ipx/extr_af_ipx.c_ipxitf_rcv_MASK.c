
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {scalar_t__ pkt_type; } ;
struct TYPE_5__ {int node; } ;
struct ipxhdr {scalar_t__ ipx_type; TYPE_2__ ipx_dest; } ;
struct ipx_interface {scalar_t__ if_netnum; int if_node; } ;
struct TYPE_4__ {int index; } ;
struct TYPE_6__ {scalar_t__ ipx_dest_net; scalar_t__ ipx_source_net; TYPE_1__ last_hop; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct ipxhdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct ipx_interface*,struct sk_buff*,int ) ;
 int FUNC_3 (struct ipx_interface*,struct sk_buff*) ;
 int FUNC_4 (struct ipx_interface*) ;
 int FUNC_5 (struct ipx_interface*,struct sk_buff*) ;
 int FUNC_6 (struct ipx_interface*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int ,int ,int ) ;
 struct sk_buff* FUNC_10 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_11(struct ipx_interface *VAR_5, struct sk_buff *VAR_6)
{
 struct ipxhdr *VAR_7 = FUNC_1(VAR_6);
 int VAR_8 = 0;

 FUNC_4(VAR_5);


 if (!VAR_5->if_netnum)
  FUNC_3(VAR_5, VAR_6);

 FUNC_0(VAR_6)->last_hop.index = -1;
 if (VAR_7->ipx_type == VAR_2) {
  VAR_8 = FUNC_5(VAR_5, VAR_6);
  if (VAR_8)
   goto out_free_skb;
 }


 if (!FUNC_0(VAR_6)->ipx_dest_net)
  FUNC_0(VAR_6)->ipx_dest_net = VAR_5->if_netnum;
 if (!FUNC_0(VAR_6)->ipx_source_net)
  FUNC_0(VAR_6)->ipx_source_net = VAR_5->if_netnum;



 if (VAR_7->ipx_type != VAR_2 &&
     VAR_5->if_netnum != FUNC_0(VAR_6)->ipx_dest_net) {

  if (VAR_6->pkt_type == VAR_3) {
   VAR_6 = FUNC_10(VAR_6, VAR_0);
   if (VAR_6)
    VAR_8 = FUNC_7(VAR_6);
   goto out_intrfc;
  }

  goto out_free_skb;
 }


 if (!FUNC_9(VAR_4, VAR_7->ipx_dest.node, VAR_1) ||
     !FUNC_9(VAR_5->if_node, VAR_7->ipx_dest.node, VAR_1)) {
  VAR_8 = FUNC_2(VAR_5, VAR_6, 0);
  goto out_intrfc;
 }


out_free_skb:
 FUNC_8(VAR_6);
out_intrfc:
 FUNC_6(VAR_5);
 return VAR_8;
}
