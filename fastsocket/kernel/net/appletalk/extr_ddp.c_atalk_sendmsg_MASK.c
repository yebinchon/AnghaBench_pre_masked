
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct atalk_addr {scalar_t__ s_node; scalar_t__ s_net; } ;
struct sockaddr_at {scalar_t__ sat_family; struct atalk_addr sat_addr; int sat_port; } ;
struct sock {scalar_t__ sk_state; int sk_no_check; } ;
struct sk_buff {struct net_device* dev; struct sock* sk; } ;
struct net_device {int hard_header_len; int flags; int dev_addr; int name; } ;
struct msghdr {int msg_flags; int msg_namelen; int msg_iov; scalar_t__ msg_name; } ;
struct kiocb {int dummy; } ;
struct ddpehdr {scalar_t__ deh_dnode; scalar_t__ deh_sum; int deh_sport; int deh_dport; int deh_snode; scalar_t__ deh_snet; scalar_t__ deh_dnet; int deh_len_hops; } ;
struct atalk_sock {scalar_t__ dest_node; int src_port; int src_node; scalar_t__ src_net; scalar_t__ dest_net; int dest_port; } ;
struct atalk_route {int flags; struct atalk_addr gateway; struct net_device* dev; } ;
struct TYPE_3__ {int header_length; int (* request ) (TYPE_1__*,struct sk_buff*,int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
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
 int FUNC_0 (struct sock*,char*,struct sock*,...) ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_1 (struct net_device*,struct sk_buff*,struct atalk_addr*,int *) ;
 struct atalk_sock* FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,size_t) ;
 struct atalk_route* FUNC_5 (struct atalk_addr*) ;
 TYPE_1__* VAR_19 ;
 int FUNC_6 (size_t) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (scalar_t__,int ,size_t) ;
 struct sk_buff* FUNC_9 (struct sk_buff*,int ) ;
 int FUNC_10 (struct sk_buff*) ;
 scalar_t__ FUNC_11 (struct sk_buff*,size_t) ;
 int FUNC_12 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_13 (struct sock*,int,int,int*) ;
 scalar_t__ FUNC_14 (struct sock*,int ) ;
 int FUNC_15 (TYPE_1__*,struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_16(struct kiocb *VAR_20, struct socket *VAR_21, struct msghdr *VAR_22,
    size_t VAR_23)
{
 struct sock *VAR_24 = VAR_21->sk;
 struct atalk_sock *VAR_25 = FUNC_2(VAR_24);
 struct sockaddr_at *VAR_26 = (struct sockaddr_at *)VAR_22->msg_name;
 int VAR_27 = VAR_22->msg_flags;
 int VAR_28 = 0;
 struct sockaddr_at VAR_29, VAR_30;
 struct sk_buff *VAR_31;
 struct net_device *VAR_32;
 struct ddpehdr *VAR_33;
 int VAR_34;
 struct atalk_route *VAR_35;
 int VAR_36;

 if (VAR_27 & ~(VAR_14|VAR_13))
  return -VAR_6;

 if (VAR_23 > VAR_3)
  return -VAR_7;

 if (VAR_26) {
  if (FUNC_14(VAR_24, VAR_17))
   if (FUNC_3(VAR_24) < 0)
    return -VAR_4;

  if (VAR_22->msg_namelen < sizeof(*VAR_26) ||
      VAR_26->sat_family != VAR_0)
   return -VAR_6;


  if (VAR_26->sat_addr.s_node == VAR_2 &&
      !FUNC_14(VAR_24, VAR_16)) {
   return -VAR_10;
  }
 } else {
  if (VAR_24->sk_state != VAR_18)
   return -VAR_9;
  VAR_26 = &VAR_29;
  VAR_26->sat_family = VAR_0;
  VAR_26->sat_port = VAR_25->dest_port;
  VAR_26->sat_addr.s_node = VAR_25->dest_node;
  VAR_26->sat_addr.s_net = VAR_25->dest_net;
 }


 FUNC_0(VAR_24, "SK %p: Got address.\n", VAR_24);


 VAR_34 = sizeof(struct ddpehdr) + VAR_23 + VAR_19->header_length;

 if (VAR_26->sat_addr.s_net || VAR_26->sat_addr.s_node == VAR_1) {
  VAR_35 = FUNC_5(&VAR_26->sat_addr);
 } else {
  struct atalk_addr VAR_37;

  VAR_37.s_node = 0;
  VAR_37.s_net = VAR_25->src_net;

  VAR_35 = FUNC_5(&VAR_37);
 }
 if (!VAR_35)
  return -VAR_8;

 VAR_32 = VAR_35->dev;

 FUNC_0(VAR_24, "SK %p: Size needed %d, device %s\n",
   VAR_24, VAR_34, VAR_32->name);

 VAR_34 += VAR_32->hard_header_len;
 VAR_31 = FUNC_13(VAR_24, VAR_34, (VAR_27 & VAR_14), &VAR_36);
 if (!VAR_31)
  return VAR_36;

 VAR_31->sk = VAR_24;
 FUNC_12(VAR_31, VAR_19->header_length);
 FUNC_12(VAR_31, VAR_32->hard_header_len);
 VAR_31->dev = VAR_32;

 FUNC_0(VAR_24, "SK %p: Begin build.\n", VAR_24);

 VAR_33 = (struct ddpehdr *)FUNC_11(VAR_31, sizeof(struct ddpehdr));
 VAR_33->deh_len_hops = FUNC_6(VAR_23 + sizeof(*VAR_33));
 VAR_33->deh_dnet = VAR_26->sat_addr.s_net;
 VAR_33->deh_snet = VAR_25->src_net;
 VAR_33->deh_dnode = VAR_26->sat_addr.s_node;
 VAR_33->deh_snode = VAR_25->src_node;
 VAR_33->deh_dport = VAR_26->sat_port;
 VAR_33->deh_sport = VAR_25->src_port;

 FUNC_0(VAR_24, "SK %p: Copy user data (%Zd bytes).\n", VAR_24, VAR_23);

 VAR_36 = FUNC_8(FUNC_11(VAR_31, VAR_23), VAR_22->msg_iov, VAR_23);
 if (VAR_36) {
  FUNC_7(VAR_31);
  return -VAR_5;
 }

 if (VAR_24->sk_no_check == 1)
  VAR_33->deh_sum = 0;
 else
  VAR_33->deh_sum = FUNC_4(VAR_31, VAR_23 + sizeof(*VAR_33));





 if (VAR_33->deh_dnode == VAR_2 &&
     !(VAR_35->flags & VAR_15) && !(VAR_32->flags & VAR_12)) {
  struct sk_buff *VAR_38 = FUNC_9(VAR_31, VAR_11);

  if (VAR_38) {
   VAR_28 = 1;
   FUNC_0(VAR_24, "SK %p: send out(copy).\n", VAR_24);



   FUNC_1(VAR_32, VAR_38, &VAR_26->sat_addr, ((void*)0));
  }
 }

 if (VAR_32->flags & VAR_12 || VAR_28) {
  FUNC_0(VAR_24, "SK %p: Loop back.\n", VAR_24);

  FUNC_10(VAR_31);
  if (VAR_33->deh_dnode == VAR_2) {
   struct atalk_addr VAR_39;

   VAR_39.s_node = 0;
   VAR_39.s_net = 0;

   VAR_35 = FUNC_5(&VAR_39);
   if (!VAR_35) {
    FUNC_7(VAR_31);
    return -VAR_8;
   }
   VAR_32 = VAR_35->dev;
   VAR_31->dev = VAR_32;
  }
  VAR_19->request(VAR_19, VAR_31, VAR_32->dev_addr);
 } else {
  FUNC_0(VAR_24, "SK %p: send out.\n", VAR_24);
  if (VAR_35->flags & VAR_15) {
      VAR_30.sat_addr = VAR_35->gateway;
      VAR_26 = &VAR_30;
  }




  FUNC_1(VAR_32, VAR_31, &VAR_26->sat_addr, ((void*)0));
 }
 FUNC_0(VAR_24, "SK %p: Done write (%Zd).\n", VAR_24, VAR_23);

 return VAR_23;
}
