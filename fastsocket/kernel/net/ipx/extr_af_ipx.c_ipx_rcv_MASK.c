
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {scalar_t__ pkt_type; } ;
struct packet_type {int type; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int net; } ;
struct TYPE_4__ {scalar_t__ net; } ;
struct ipxhdr {scalar_t__ ipx_checksum; TYPE_2__ ipx_source; TYPE_1__ ipx_dest; int ipx_tctrl; int ipx_pktsize; } ;
struct ipx_interface {int dummy; } ;
struct TYPE_6__ {scalar_t__ ipx_dest_net; int ipx_source_net; int ipx_tctrl; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct net_device*) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct ipxhdr*,int) ;
 struct ipxhdr* FUNC_3 (struct sk_buff*) ;
 scalar_t__ VAR_4 ;
 struct ipx_interface* FUNC_4 (struct net_device*,int ) ;
 struct ipx_interface* FUNC_5 (struct net_device*,int ) ;
 int FUNC_6 (struct ipx_interface*) ;
 int FUNC_7 (struct ipx_interface*) ;
 int FUNC_8 (struct ipx_interface*,struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_13 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_14(struct sk_buff *VAR_5, struct net_device *VAR_6, struct packet_type *VAR_7, struct net_device *VAR_8)
{

 struct ipx_interface *VAR_9;
 struct ipxhdr *VAR_10;
 u16 VAR_11;
 int VAR_12 = 0;

 if (!FUNC_10(FUNC_1(VAR_6), &VAR_3))
  goto drop;


 if (VAR_5->pkt_type == VAR_2)
  goto drop;

 if ((VAR_5 = FUNC_13(VAR_5, VAR_0)) == ((void*)0))
  goto out;

 if (!FUNC_12(VAR_5, sizeof(struct ipxhdr)))
  goto drop;

 VAR_11 = FUNC_11(FUNC_3(VAR_5)->ipx_pktsize);


 if (VAR_11 < sizeof(struct ipxhdr) ||
     !FUNC_12(VAR_5, VAR_11))
  goto drop;

 VAR_10 = FUNC_3(VAR_5);
 if (VAR_10->ipx_checksum != VAR_1 &&
    VAR_10->ipx_checksum != FUNC_2(VAR_10, VAR_11))
  goto drop;

 FUNC_0(VAR_5)->ipx_tctrl = VAR_10->ipx_tctrl;
 FUNC_0(VAR_5)->ipx_dest_net = VAR_10->ipx_dest.net;
 FUNC_0(VAR_5)->ipx_source_net = VAR_10->ipx_source.net;


 VAR_9 = FUNC_5(VAR_6, VAR_7->type);
 if (!VAR_9) {
  if (VAR_4 &&
     FUNC_0(VAR_5)->ipx_dest_net) {
   VAR_9 = FUNC_4(VAR_6, VAR_7->type);
   if (VAR_9)
    FUNC_6(VAR_9);
  }

  if (!VAR_9)

   goto drop;
 }

 VAR_12 = FUNC_8(VAR_9, VAR_5);
 FUNC_7(VAR_9);
 goto out;
drop:
 FUNC_9(VAR_5);
out:
 return VAR_12;
}
