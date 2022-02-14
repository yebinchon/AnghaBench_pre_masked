
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct in6_addr {int* s6_addr; int * s6_addr32; } ;
struct sockaddr_in6 {scalar_t__ sin6_family; int sin6_flowinfo; scalar_t__ sin6_scope_id; scalar_t__ sin6_port; struct in6_addr sin6_addr; } ;
struct TYPE_4__ {int s_addr; } ;
struct sockaddr_in {TYPE_2__ sin_addr; scalar_t__ sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_bound_dev_if; scalar_t__ sk_route_caps; int sk_backlog_rcv; } ;
struct rt0_hdr {struct in6_addr* addr; } ;
struct ipv6_pinfo {int flow_label; struct in6_addr daddr; struct in6_addr saddr; TYPE_1__* opt; struct in6_addr rcv_saddr; scalar_t__ sndflow; } ;
struct ip6_flowlabel {struct in6_addr dst; } ;
struct inet_sock {scalar_t__ dport; int sport; int rcv_saddr; int saddr; } ;
struct inet_connection_sock {scalar_t__ icsk_ext_hdr_len; int * icsk_af_ops; } ;
struct flowi {int fl6_flowlabel; scalar_t__ oif; struct in6_addr fl6_src; struct in6_addr fl6_dst; int fl_ip_sport; scalar_t__ fl_ip_dport; int proto; } ;
struct dst_entry {int dummy; } ;
struct dccp_sock {int dccps_iss; int dccps_role; } ;
typedef int sin ;
typedef int fl ;
struct TYPE_3__ {scalar_t__ opt_nflen; scalar_t__ opt_flen; int * srcrt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (struct sock*,char*) ;
 int VAR_17 ;
 int FUNC_2 (struct sock*,struct dst_entry*,int *,int *) ;
 scalar_t__ FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (int ,struct dst_entry**,struct flowi*,struct sock*,int ) ;
 int FUNC_6 (struct sock*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_7 (struct sock*,int ) ;
 struct dccp_sock* FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*,struct sockaddr*,int) ;
 int VAR_21 ;
 int VAR_22 ;
 struct ip6_flowlabel* FUNC_10 (struct sock*,int) ;
 int FUNC_11 (struct ip6_flowlabel*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int *,struct sock*) ;
 struct ipv6_pinfo* FUNC_14 (struct sock*) ;
 struct inet_connection_sock* FUNC_15 (struct sock*) ;
 struct inet_sock* FUNC_16 (struct sock*) ;
 int FUNC_17 (struct sock*,struct dst_entry**,struct flowi*) ;
 int FUNC_18 (struct sock*,struct dst_entry**,struct flowi*) ;
 scalar_t__ FUNC_19 (struct in6_addr*) ;
 int FUNC_20 (struct in6_addr*,struct in6_addr*) ;
 int FUNC_21 (struct in6_addr*,int ,int ,int ,int ) ;
 int FUNC_22 (struct in6_addr*) ;
 int FUNC_23 (struct flowi*,int ,int) ;
 int FUNC_24 (int *,int *,int ,scalar_t__) ;
 int FUNC_25 (struct sock*,struct flowi*) ;
 int FUNC_26 (struct sock*) ;

__attribute__((used)) static int FUNC_27(struct sock *VAR_23, struct sockaddr *VAR_24,
      int VAR_25)
{
 struct sockaddr_in6 *VAR_26 = (struct sockaddr_in6 *)VAR_24;
 struct inet_connection_sock *VAR_27 = FUNC_15(VAR_23);
 struct inet_sock *VAR_28 = FUNC_16(VAR_23);
 struct ipv6_pinfo *VAR_29 = FUNC_14(VAR_23);
 struct dccp_sock *VAR_30 = FUNC_8(VAR_23);
 struct in6_addr *VAR_31 = ((void*)0), *VAR_32 = ((void*)0), VAR_33;
 struct flowi VAR_34;
 struct dst_entry *VAR_35;
 int VAR_36;
 int VAR_37;

 VAR_30->dccps_role = VAR_4;

 if (VAR_25 < VAR_16)
  return -VAR_6;

 if (VAR_26->sin6_family != VAR_1)
  return -VAR_5;

 FUNC_23(&VAR_34, 0, sizeof(VAR_34));

 if (VAR_29->sndflow) {
  VAR_34.fl6_flowlabel = VAR_26->sin6_flowinfo & VAR_13;
  FUNC_0(VAR_34.fl6_flowlabel);
  if (VAR_34.fl6_flowlabel & VAR_14) {
   struct ip6_flowlabel *VAR_38;
   VAR_38 = FUNC_10(VAR_23, VAR_34.fl6_flowlabel);
   if (VAR_38 == ((void*)0))
    return -VAR_6;
   FUNC_20(&VAR_26->sin6_addr, &VAR_38->dst);
   FUNC_11(VAR_38);
  }
 }



 if (FUNC_19(&VAR_26->sin6_addr))
  VAR_26->sin6_addr.s6_addr[15] = 1;

 VAR_36 = FUNC_22(&VAR_26->sin6_addr);

 if (VAR_36 & VAR_12)
  return -VAR_7;

 if (VAR_36 & VAR_10) {
  if (VAR_25 >= sizeof(struct sockaddr_in6) &&
      VAR_26->sin6_scope_id) {



   if (VAR_23->sk_bound_dev_if &&
       VAR_23->sk_bound_dev_if != VAR_26->sin6_scope_id)
    return -VAR_6;

   VAR_23->sk_bound_dev_if = VAR_26->sin6_scope_id;
  }


  if (!VAR_23->sk_bound_dev_if)
   return -VAR_6;
 }

 FUNC_20(&VAR_29->daddr, &VAR_26->sin6_addr);
 VAR_29->flow_label = VAR_34.fl6_flowlabel;




 if (VAR_36 == VAR_11) {
  u32 VAR_39 = VAR_27->icsk_ext_hdr_len;
  struct sockaddr_in VAR_40;

  FUNC_1(VAR_23, "connect: ipv4 mapped\n");

  if (FUNC_3(VAR_23))
   return -VAR_7;

  VAR_40.sin_family = VAR_0;
  VAR_40.sin_port = VAR_26->sin6_port;
  VAR_40.sin_addr.s_addr = VAR_26->sin6_addr.s6_addr32[3];

  VAR_27->icsk_af_ops = &VAR_20;
  VAR_23->sk_backlog_rcv = VAR_21;

  VAR_37 = FUNC_9(VAR_23, (struct sockaddr *)&VAR_40, sizeof(VAR_40));
  if (VAR_37) {
   VAR_27->icsk_ext_hdr_len = VAR_39;
   VAR_27->icsk_af_ops = &VAR_19;
   VAR_23->sk_backlog_rcv = VAR_22;
   goto failure;
  } else {
   FUNC_21(&VAR_29->saddr, 0, 0, FUNC_12(0x0000FFFF),
          VAR_28->saddr);
   FUNC_21(&VAR_29->rcv_saddr, 0, 0, FUNC_12(0x0000FFFF),
          VAR_28->rcv_saddr);
  }

  return VAR_37;
 }

 if (!FUNC_19(&VAR_29->rcv_saddr))
  VAR_31 = &VAR_29->rcv_saddr;

 VAR_34.proto = VAR_9;
 FUNC_20(&VAR_34.fl6_dst, &VAR_29->daddr);
 FUNC_20(&VAR_34.fl6_src, VAR_31 ? VAR_31 : &VAR_29->saddr);
 VAR_34.oif = VAR_23->sk_bound_dev_if;
 VAR_34.fl_ip_dport = VAR_26->sin6_port;
 VAR_34.fl_ip_sport = VAR_28->sport;
 FUNC_25(VAR_23, &VAR_34);

 if (VAR_29->opt != ((void*)0) && VAR_29->opt->srcrt != ((void*)0)) {
  const struct rt0_hdr *VAR_41 = (struct rt0_hdr *)VAR_29->opt->srcrt;

  FUNC_20(&VAR_33, &VAR_34.fl6_dst);
  FUNC_20(&VAR_34.fl6_dst, VAR_41->addr);
  VAR_32 = &VAR_33;
 }

 VAR_37 = FUNC_18(VAR_23, &VAR_35, &VAR_34);
 if (VAR_37)
  goto failure;

 if (VAR_32)
  FUNC_20(&VAR_34.fl6_dst, VAR_32);

 VAR_37 = FUNC_5(FUNC_26(VAR_23), &VAR_35, &VAR_34, VAR_23, VAR_17);
 if (VAR_37 < 0) {
  if (VAR_37 == -VAR_8)
   VAR_37 = FUNC_17(VAR_23, &VAR_35, &VAR_34);
  if (VAR_37 < 0)
   goto failure;
 }

 if (VAR_31 == ((void*)0)) {
  VAR_31 = &VAR_34.fl6_src;
  FUNC_20(&VAR_29->rcv_saddr, VAR_31);
 }


 FUNC_20(&VAR_29->saddr, VAR_31);
 VAR_28->rcv_saddr = VAR_15;

 FUNC_2(VAR_23, VAR_35, ((void*)0), ((void*)0));

 VAR_27->icsk_ext_hdr_len = 0;
 if (VAR_29->opt != ((void*)0))
  VAR_27->icsk_ext_hdr_len = (VAR_29->opt->opt_flen +
       VAR_29->opt->opt_nflen);

 VAR_28->dport = VAR_26->sin6_port;

 FUNC_7(VAR_23, VAR_3);
 VAR_37 = FUNC_13(&VAR_18, VAR_23);
 if (VAR_37)
  goto late_failure;

 VAR_30->dccps_iss = FUNC_24(VAR_29->saddr.s6_addr32,
            VAR_29->daddr.s6_addr32,
            VAR_28->sport, VAR_28->dport);
 VAR_37 = FUNC_6(VAR_23);
 if (VAR_37)
  goto late_failure;

 return 0;

late_failure:
 FUNC_7(VAR_23, VAR_2);
 FUNC_4(VAR_23);
failure:
 VAR_28->dport = 0;
 VAR_23->sk_route_caps = 0;
 return VAR_37;
}
