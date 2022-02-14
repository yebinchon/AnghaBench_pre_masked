
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr_ipx {scalar_t__ sipx_zero; int sipx_type; scalar_t__ sipx_network; int sipx_node; scalar_t__ sipx_port; int sipx_family; } ;
struct sockaddr {int dummy; } ;
struct TYPE_6__ {scalar_t__ tv64; } ;
struct sock {TYPE_2__ sk_stamp; } ;
struct sk_buff {TYPE_2__ tstamp; } ;
struct msghdr {int msg_namelen; int msg_iov; int msg_flags; scalar_t__ msg_name; } ;
struct kiocb {int dummy; } ;
struct TYPE_7__ {int node; scalar_t__ sock; } ;
struct ipxhdr {int ipx_type; TYPE_3__ ipx_source; int ipx_pktsize; } ;
struct ipx_sock {TYPE_1__* intrfc; int port; } ;
struct TYPE_8__ {scalar_t__ ipx_source_net; } ;
struct TYPE_5__ {int if_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__* FUNC_0 (struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct socket*,struct sockaddr*,int) ;
 struct ipxhdr* FUNC_2 (struct sk_buff*) ;
 struct ipx_sock* FUNC_3 (struct sock*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*,int,int ,int) ;
 int FUNC_7 (struct sock*,struct sk_buff*) ;
 struct sk_buff* FUNC_8 (struct sock*,int,int,int*) ;
 scalar_t__ FUNC_9 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_10(struct kiocb *VAR_7, struct socket *VAR_8,
  struct msghdr *VAR_9, size_t VAR_10, int VAR_11)
{
 struct sock *VAR_12 = VAR_8->sk;
 struct ipx_sock *VAR_13 = FUNC_3(VAR_12);
 struct sockaddr_ipx *VAR_14 = (struct sockaddr_ipx *)VAR_9->msg_name;
 struct ipxhdr *VAR_15 = ((void*)0);
 struct sk_buff *VAR_16;
 int VAR_17, VAR_18;

 VAR_9->msg_namelen = 0;


 if (!VAR_13->port) {
  struct sockaddr_ipx VAR_19;

  VAR_19.sipx_port = 0;
  VAR_19.sipx_network = 0;
  VAR_18 = FUNC_1(VAR_8, (struct sockaddr *)&VAR_19,
         sizeof(struct sockaddr_ipx));
  if (VAR_18)
   goto out;
 }

 VAR_18 = -VAR_2;
 if (FUNC_9(VAR_12, VAR_6))
  goto out;

 VAR_16 = FUNC_8(VAR_12, VAR_11 & ~VAR_4,
    VAR_11 & VAR_4, &VAR_18);
 if (!VAR_16)
  goto out;

 VAR_15 = FUNC_2(VAR_16);
 VAR_17 = FUNC_5(VAR_15->ipx_pktsize) - sizeof(struct ipxhdr);
 if (VAR_17 > VAR_10) {
  VAR_17 = VAR_10;
  VAR_9->msg_flags |= VAR_5;
 }

 VAR_18 = FUNC_6(VAR_16, sizeof(struct ipxhdr), VAR_9->msg_iov,
         VAR_17);
 if (VAR_18)
  goto out_free;
 if (VAR_16->tstamp.tv64)
  VAR_12->sk_stamp = VAR_16->tstamp;

 if (VAR_14) {
  VAR_14->sipx_family = VAR_0;
  VAR_14->sipx_port = VAR_15->ipx_source.sock;
  FUNC_4(VAR_14->sipx_node, VAR_15->ipx_source.node, VAR_3);
  VAR_14->sipx_network = FUNC_0(VAR_16)->ipx_source_net;
  VAR_14->sipx_type = VAR_15->ipx_type;
  VAR_14->sipx_zero = 0;
  VAR_9->msg_namelen = sizeof(*VAR_14);
 }
 VAR_18 = VAR_17;

out_free:
 FUNC_7(VAR_12, VAR_16);
out:
 return VAR_18;
}
