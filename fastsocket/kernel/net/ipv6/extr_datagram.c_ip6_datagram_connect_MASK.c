
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct in6_addr {int* s6_addr; int * s6_addr32; } ;
struct sockaddr_in6 {scalar_t__ sin6_family; int sin6_flowinfo; scalar_t__ sin6_scope_id; int sin6_port; struct in6_addr sin6_addr; } ;
struct TYPE_6__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_3__ sin_addr; scalar_t__ sin_family; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_bound_dev_if; int sk_state; int sk_protocol; } ;
struct rt0_hdr {struct in6_addr* addr; } ;
struct ipv6_pinfo {scalar_t__ mcast_oif; int flow_label; struct in6_addr saddr; struct in6_addr daddr; struct in6_addr rcv_saddr; TYPE_2__* opt; scalar_t__ sndflow; } ;
struct ip6_flowlabel {TYPE_1__* opt; struct in6_addr dst; } ;
struct inet_sock {int rcv_saddr; int sport; int dport; int saddr; int daddr; } ;
struct flowi {int fl6_flowlabel; scalar_t__ oif; struct in6_addr fl6_src; struct in6_addr fl6_dst; int fl_ip_sport; int fl_ip_dport; int proto; } ;
struct dst_entry {int dummy; } ;
typedef int sin ;
typedef int fl ;
struct TYPE_5__ {scalar_t__ srcrt; } ;
struct TYPE_4__ {scalar_t__ srcrt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
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
 scalar_t__ FUNC_0 (struct sock*) ;
 int FUNC_1 (int ,struct dst_entry**,struct flowi*,struct sock*,int ) ;
 struct ip6_flowlabel* FUNC_2 (struct sock*,int) ;
 int FUNC_3 (struct ip6_flowlabel*) ;
 int FUNC_4 (int) ;
 struct ipv6_pinfo* FUNC_5 (struct sock*) ;
 struct inet_sock* FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*,struct sockaddr*,int) ;
 int FUNC_8 (struct sock*,struct dst_entry**,struct flowi*) ;
 int FUNC_9 (struct sock*,struct dst_entry**,struct flowi*) ;
 int FUNC_10 (struct sock*,struct dst_entry*,struct in6_addr*,struct in6_addr*) ;
 scalar_t__ FUNC_11 (struct in6_addr*) ;
 int FUNC_12 (struct in6_addr*,struct in6_addr*) ;
 scalar_t__ FUNC_13 (struct in6_addr*,struct in6_addr*) ;
 int FUNC_14 (struct in6_addr*,int ,int ,int ,int ) ;
 int FUNC_15 (struct in6_addr*) ;
 scalar_t__ FUNC_16 (struct in6_addr*) ;
 int FUNC_17 (struct flowi*,int ,int) ;
 int FUNC_18 (struct sock*,struct flowi*) ;
 int FUNC_19 (struct sock*) ;

int FUNC_20(struct sock *VAR_16, struct sockaddr *VAR_17, int VAR_18)
{
 struct sockaddr_in6 *VAR_19 = (struct sockaddr_in6 *) VAR_17;
 struct inet_sock *VAR_20 = FUNC_6(VAR_16);
 struct ipv6_pinfo *VAR_21 = FUNC_5(VAR_16);
 struct in6_addr *VAR_22, *VAR_23 = ((void*)0), VAR_24;
 struct dst_entry *VAR_25;
 struct flowi VAR_26;
 struct ip6_flowlabel *VAR_27 = ((void*)0);
 int VAR_28;
 int VAR_29;

 if (VAR_19->sin6_family == VAR_0) {
  if (FUNC_0(VAR_16))
   return -VAR_2;
  VAR_29 = FUNC_7(VAR_16, VAR_17, VAR_18);
  goto ipv4_connected;
 }

 if (VAR_18 < VAR_13)
  return -VAR_3;

 if (VAR_19->sin6_family != VAR_1)
  return -VAR_2;

 FUNC_17(&VAR_26, 0, sizeof(VAR_26));
 if (VAR_21->sndflow) {
  VAR_26.fl6_flowlabel = VAR_19->sin6_flowinfo&VAR_10;
  if (VAR_26.fl6_flowlabel&VAR_11) {
   VAR_27 = FUNC_2(VAR_16, VAR_26.fl6_flowlabel);
   if (VAR_27 == ((void*)0))
    return -VAR_3;
   FUNC_12(&VAR_19->sin6_addr, &VAR_27->dst);
  }
 }

 VAR_28 = FUNC_15(&VAR_19->sin6_addr);

 if (VAR_28 == VAR_6) {



  VAR_19->sin6_addr.s6_addr[15] = 0x01;
 }

 VAR_22 = &VAR_19->sin6_addr;

 if (VAR_28 == VAR_8) {
  struct sockaddr_in VAR_30;

  if (FUNC_0(VAR_16)) {
   VAR_29 = -VAR_4;
   goto out;
  }
  VAR_30.sin_family = VAR_0;
  VAR_30.sin_addr.s_addr = VAR_22->s6_addr32[3];
  VAR_30.sin_port = VAR_19->sin6_port;

  VAR_29 = FUNC_7(VAR_16,
        (struct sockaddr*) &VAR_30,
        sizeof(VAR_30));

ipv4_connected:
  if (VAR_29)
   goto out;

  FUNC_14(&VAR_21->daddr, 0, 0, FUNC_4(0x0000ffff), VAR_20->daddr);

  if (FUNC_11(&VAR_21->saddr) ||
      FUNC_16(&VAR_21->saddr)) {
   FUNC_14(&VAR_21->saddr, 0, 0, FUNC_4(0x0000ffff),
          VAR_20->saddr);
  }

  if (FUNC_11(&VAR_21->rcv_saddr) ||
      FUNC_16(&VAR_21->rcv_saddr)) {
   FUNC_14(&VAR_21->rcv_saddr, 0, 0, FUNC_4(0x0000ffff),
          VAR_20->rcv_saddr);
  }
  goto out;
 }

 if (VAR_28&VAR_7) {
  if (VAR_18 >= sizeof(struct sockaddr_in6) &&
      VAR_19->sin6_scope_id) {
   if (VAR_16->sk_bound_dev_if &&
       VAR_16->sk_bound_dev_if != VAR_19->sin6_scope_id) {
    VAR_29 = -VAR_3;
    goto out;
   }
   VAR_16->sk_bound_dev_if = VAR_19->sin6_scope_id;
  }

  if (!VAR_16->sk_bound_dev_if && (VAR_28 & VAR_9))
   VAR_16->sk_bound_dev_if = VAR_21->mcast_oif;


  if (!VAR_16->sk_bound_dev_if) {
   VAR_29 = -VAR_3;
   goto out;
  }
 }

 FUNC_12(&VAR_21->daddr, VAR_22);
 VAR_21->flow_label = VAR_26.fl6_flowlabel;

 VAR_20->dport = VAR_19->sin6_port;






 VAR_26.proto = VAR_16->sk_protocol;
 FUNC_12(&VAR_26.fl6_dst, &VAR_21->daddr);
 FUNC_12(&VAR_26.fl6_src, &VAR_21->saddr);
 VAR_26.oif = VAR_16->sk_bound_dev_if;
 VAR_26.fl_ip_dport = VAR_20->dport;
 VAR_26.fl_ip_sport = VAR_20->sport;

 if (!VAR_26.oif && (VAR_28&VAR_9))
  VAR_26.oif = VAR_21->mcast_oif;

 FUNC_18(VAR_16, &VAR_26);

 if (VAR_27) {
  if (VAR_27->opt && VAR_27->opt->srcrt) {
   struct rt0_hdr *VAR_31 = (struct rt0_hdr *) VAR_27->opt->srcrt;
   FUNC_12(&VAR_24, &VAR_26.fl6_dst);
   FUNC_12(&VAR_26.fl6_dst, VAR_31->addr);
   VAR_23 = &VAR_24;
  }
 } else if (VAR_21->opt && VAR_21->opt->srcrt) {
  struct rt0_hdr *VAR_32 = (struct rt0_hdr *)VAR_21->opt->srcrt;
  FUNC_12(&VAR_24, &VAR_26.fl6_dst);
  FUNC_12(&VAR_26.fl6_dst, VAR_32->addr);
  VAR_23 = &VAR_24;
 }

 VAR_29 = FUNC_9(VAR_16, &VAR_25, &VAR_26);
 if (VAR_29)
  goto out;
 if (VAR_23)
  FUNC_12(&VAR_26.fl6_dst, VAR_23);

 VAR_29 = FUNC_1(FUNC_19(VAR_16), &VAR_25, &VAR_26, VAR_16, VAR_15);
 if (VAR_29 < 0) {
  if (VAR_29 == -VAR_5)
   VAR_29 = FUNC_8(VAR_16, &VAR_25, &VAR_26);
  if (VAR_29 < 0)
   goto out;
 }



 if (FUNC_11(&VAR_21->saddr))
  FUNC_12(&VAR_21->saddr, &VAR_26.fl6_src);

 if (FUNC_11(&VAR_21->rcv_saddr)) {
  FUNC_12(&VAR_21->rcv_saddr, &VAR_26.fl6_src);
  VAR_20->rcv_saddr = VAR_12;
 }

 FUNC_10(VAR_16, VAR_25,
        FUNC_13(&VAR_26.fl6_dst, &VAR_21->daddr) ?
        &VAR_21->daddr : ((void*)0),




        ((void*)0));

 VAR_16->sk_state = VAR_14;
out:
 FUNC_3(VAR_27);
 return VAR_29;
}
