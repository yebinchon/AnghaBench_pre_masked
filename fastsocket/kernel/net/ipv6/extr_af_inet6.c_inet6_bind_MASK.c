
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct socket {scalar_t__ type; struct sock* sk; } ;
struct TYPE_6__ {scalar_t__* s6_addr32; } ;
struct sockaddr_in6 {TYPE_2__ sin6_addr; scalar_t__ sin6_scope_id; int sin6_port; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_state; int sk_userlocks; TYPE_1__* sk_prot; scalar_t__ sk_bound_dev_if; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct ipv6_pinfo {int ipv6only; int saddr; int rcv_saddr; } ;
struct inet_sock {scalar_t__ daddr; scalar_t__ dport; scalar_t__ num; int sport; scalar_t__ saddr; scalar_t__ rcv_saddr; scalar_t__ transparent; scalar_t__ freebind; } ;
typedef scalar_t__ __be32 ;
struct TYPE_5__ {int (* bind ) (struct sock*,struct sockaddr*,int) ;scalar_t__ (* get_port ) (struct sock*,unsigned short) ;} ;


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
 scalar_t__ VAR_11 ;
 unsigned short VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_0 (int ) ;
 struct net_device* FUNC_1 (struct net*,scalar_t__) ;
 int FUNC_2 (struct net_device*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 struct ipv6_pinfo* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct net*,scalar_t__) ;
 int FUNC_7 (struct sock*) ;
 struct inet_sock* FUNC_8 (struct sock*) ;
 int FUNC_9 (int *,TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (struct net*,TYPE_2__*,struct net_device*,int ) ;
 int FUNC_12 (struct sock*) ;
 unsigned short FUNC_13 (int ) ;
 int FUNC_14 (struct sock*) ;
 struct net* FUNC_15 (struct sock*) ;
 int FUNC_16 (struct sock*,struct sockaddr*,int) ;
 scalar_t__ FUNC_17 (struct sock*,unsigned short) ;
 int VAR_21 ;

int FUNC_18(struct socket *VAR_22, struct sockaddr *VAR_23, int VAR_24)
{
 struct sockaddr_in6 *VAR_25=(struct sockaddr_in6 *)VAR_23;
 struct sock *VAR_26 = VAR_22->sk;
 struct inet_sock *VAR_27 = FUNC_8(VAR_26);
 struct ipv6_pinfo *VAR_28 = FUNC_5(VAR_26);
 struct net *VAR_29 = FUNC_15(VAR_26);
 __be32 VAR_30 = 0;
 unsigned short VAR_31;
 int VAR_32 = 0;
 int VAR_33 = 0;


 if (VAR_26->sk_prot->bind)
  return VAR_26->sk_prot->bind(VAR_26, VAR_23, VAR_24);

 if (VAR_24 < VAR_16)
  return -VAR_4;
 VAR_32 = FUNC_10(&VAR_25->sin6_addr);
 if ((VAR_32 & VAR_10) && VAR_22->type == VAR_19)
  return -VAR_4;

 VAR_31 = FUNC_13(VAR_25->sin6_port);
 if (VAR_31 && VAR_31 < VAR_12 && !FUNC_0(VAR_0))
  return -VAR_1;

 FUNC_12(VAR_26);


 if (VAR_26->sk_state != VAR_20 || VAR_27->num) {
  VAR_33 = -VAR_4;
  goto out;
 }


 if (VAR_32 == VAR_9) {
  int VAR_34;




  if (VAR_28->ipv6only) {
   VAR_33 = -VAR_4;
   goto out;
  }


  VAR_30 = VAR_25->sin6_addr.s6_addr32[3];
  VAR_34 = FUNC_6(VAR_29, VAR_30);
  if (!VAR_21 &&
      !(VAR_27->freebind || VAR_27->transparent) &&
      VAR_30 != FUNC_3(VAR_6) &&
      VAR_34 != VAR_14 &&
      VAR_34 != VAR_15 &&
      VAR_34 != VAR_13) {
   VAR_33 = -VAR_3;
   goto out;
  }
 } else {
  if (VAR_32 != VAR_7) {
   struct net_device *VAR_35 = ((void*)0);

   if (VAR_32 & VAR_8) {
    if (VAR_24 >= sizeof(struct sockaddr_in6) &&
        VAR_25->sin6_scope_id) {



     VAR_26->sk_bound_dev_if = VAR_25->sin6_scope_id;
    }


    if (!VAR_26->sk_bound_dev_if) {
     VAR_33 = -VAR_4;
     goto out;
    }
    VAR_35 = FUNC_1(VAR_29, VAR_26->sk_bound_dev_if);
    if (!VAR_35) {
     VAR_33 = -VAR_5;
     goto out;
    }
   }




   VAR_30 = VAR_11;
   if (!(VAR_32 & VAR_10)) {
    if (!VAR_27->transparent &&
        !FUNC_11(VAR_29, &VAR_25->sin6_addr,
         VAR_35, 0)) {
     if (VAR_35)
      FUNC_2(VAR_35);
     VAR_33 = -VAR_3;
     goto out;
    }
   }
   if (VAR_35)
    FUNC_2(VAR_35);
  }
 }

 VAR_27->rcv_saddr = VAR_30;
 VAR_27->saddr = VAR_30;

 FUNC_9(&VAR_28->rcv_saddr, &VAR_25->sin6_addr);

 if (!(VAR_32 & VAR_10))
  FUNC_9(&VAR_28->saddr, &VAR_25->sin6_addr);


 if (VAR_26->sk_prot->get_port(VAR_26, VAR_31)) {
  FUNC_7(VAR_26);
  VAR_33 = -VAR_2;
  goto out;
 }

 if (VAR_32 != VAR_7) {
  VAR_26->sk_userlocks |= VAR_17;
  if (VAR_32 != VAR_9)
   VAR_28->ipv6only = 1;
 }
 if (VAR_31)
  VAR_26->sk_userlocks |= VAR_18;
 VAR_27->sport = FUNC_4(VAR_27->num);
 VAR_27->dport = 0;
 VAR_27->daddr = 0;
out:
 FUNC_14(VAR_26);
 return VAR_33;
}
