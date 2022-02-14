
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcphdr {int dummy; } ;
struct TYPE_5__ {int mss_clamp; scalar_t__ ts_recent_stamp; scalar_t__ ts_recent; } ;
struct tcp_sock {scalar_t__ write_seq; TYPE_2__ rx_opt; int * af_specific; } ;
struct in6_addr {int* s6_addr; int * s6_addr32; } ;
struct sockaddr_in6 {scalar_t__ sin6_family; int sin6_flowinfo; scalar_t__ sin6_scope_id; scalar_t__ sin6_port; struct in6_addr sin6_addr; } ;
struct TYPE_6__ {int s_addr; } ;
struct sockaddr_in {TYPE_3__ sin_addr; scalar_t__ sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_bound_dev_if; scalar_t__ sk_route_caps; int sk_gso_type; int sk_backlog_rcv; } ;
struct rt0_hdr {struct in6_addr* addr; } ;
struct ipv6hdr {int dummy; } ;
struct ipv6_pinfo {int flow_label; struct in6_addr daddr; struct in6_addr saddr; TYPE_1__* opt; struct in6_addr rcv_saddr; scalar_t__ sndflow; } ;
struct ip6_flowlabel {struct in6_addr dst; } ;
struct inet_sock {scalar_t__ dport; int sport; int rcv_saddr; int saddr; } ;
struct inet_connection_sock {scalar_t__ icsk_ext_hdr_len; int * icsk_af_ops; } ;
struct flowi {int fl6_flowlabel; scalar_t__ oif; struct in6_addr fl6_src; struct in6_addr fl6_dst; int fl_ip_sport; scalar_t__ fl_ip_dport; int proto; } ;
struct dst_entry {int dummy; } ;
typedef int sin ;
typedef int fl ;
struct TYPE_4__ {scalar_t__ opt_nflen; scalar_t__ opt_flen; scalar_t__ srcrt; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
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
 int FUNC_1 (struct sock*,char*) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (struct sock*,struct dst_entry*,int *,int *) ;
 scalar_t__ FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (int ,struct dst_entry**,struct flowi*,struct sock*,int ) ;
 struct ip6_flowlabel* FUNC_6 (struct sock*,int) ;
 int FUNC_7 (struct ip6_flowlabel*) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,struct sock*) ;
 struct ipv6_pinfo* FUNC_10 (struct sock*) ;
 struct inet_connection_sock* FUNC_11 (struct sock*) ;
 struct inet_sock* FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sock*,struct dst_entry**,struct flowi*) ;
 int FUNC_14 (struct sock*,struct dst_entry**,struct flowi*) ;
 scalar_t__ FUNC_15 (struct in6_addr*) ;
 int FUNC_16 (struct in6_addr*,struct in6_addr*) ;
 int FUNC_17 (struct in6_addr*,struct in6_addr*) ;
 int FUNC_18 (struct in6_addr*,int ,int ,int ,int ) ;
 int FUNC_19 (struct in6_addr*) ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_20 (struct flowi*,int ,int) ;
 scalar_t__ FUNC_21 (int *,int *,int ,scalar_t__) ;
 int FUNC_22 (struct sock*,struct flowi*) ;
 int FUNC_23 (struct sock*) ;
 int FUNC_24 (struct sock*) ;
 int VAR_21 ;
 int FUNC_25 (struct sock*,int ) ;
 struct tcp_sock* FUNC_26 (struct sock*) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_27 (struct sock*,struct sockaddr*,int) ;
 int VAR_24 ;
 int VAR_25 ;

__attribute__((used)) static int FUNC_28(struct sock *VAR_26, struct sockaddr *VAR_27,
     int VAR_28)
{
 struct sockaddr_in6 *VAR_29 = (struct sockaddr_in6 *) VAR_27;
 struct inet_sock *VAR_30 = FUNC_12(VAR_26);
 struct inet_connection_sock *VAR_31 = FUNC_11(VAR_26);
 struct ipv6_pinfo *VAR_32 = FUNC_10(VAR_26);
 struct tcp_sock *VAR_33 = FUNC_26(VAR_26);
 struct in6_addr *VAR_34 = ((void*)0), *VAR_35 = ((void*)0), VAR_36;
 struct flowi VAR_37;
 struct dst_entry *VAR_38;
 int VAR_39;
 int VAR_40;

 if (VAR_28 < VAR_14)
  return -VAR_3;

 if (VAR_29->sin6_family != VAR_1)
  return(-VAR_2);

 FUNC_20(&VAR_37, 0, sizeof(VAR_37));

 if (VAR_32->sndflow) {
  VAR_37.fl6_flowlabel = VAR_29->sin6_flowinfo&VAR_10;
  FUNC_0(VAR_37.fl6_flowlabel);
  if (VAR_37.fl6_flowlabel&VAR_11) {
   struct ip6_flowlabel *VAR_41;
   VAR_41 = FUNC_6(VAR_26, VAR_37.fl6_flowlabel);
   if (VAR_41 == ((void*)0))
    return -VAR_3;
   FUNC_16(&VAR_29->sin6_addr, &VAR_41->dst);
   FUNC_7(VAR_41);
  }
 }





 if(FUNC_15(&VAR_29->sin6_addr))
  VAR_29->sin6_addr.s6_addr[15] = 0x1;

 VAR_39 = FUNC_19(&VAR_29->sin6_addr);

 if(VAR_39 & VAR_9)
  return -VAR_4;

 if (VAR_39&VAR_7) {
  if (VAR_28 >= sizeof(struct sockaddr_in6) &&
      VAR_29->sin6_scope_id) {



   if (VAR_26->sk_bound_dev_if &&
       VAR_26->sk_bound_dev_if != VAR_29->sin6_scope_id)
    return -VAR_3;

   VAR_26->sk_bound_dev_if = VAR_29->sin6_scope_id;
  }


  if (!VAR_26->sk_bound_dev_if)
   return -VAR_3;
 }

 if (VAR_33->rx_opt.ts_recent_stamp &&
     !FUNC_17(&VAR_32->daddr, &VAR_29->sin6_addr)) {
  VAR_33->rx_opt.ts_recent = 0;
  VAR_33->rx_opt.ts_recent_stamp = 0;
  VAR_33->write_seq = 0;
 }

 FUNC_16(&VAR_32->daddr, &VAR_29->sin6_addr);
 VAR_32->flow_label = VAR_37.fl6_flowlabel;





 if (VAR_39 == VAR_8) {
  u32 VAR_42 = VAR_31->icsk_ext_hdr_len;
  struct sockaddr_in VAR_43;

  FUNC_1(VAR_26, "connect: ipv4 mapped\n");

  if (FUNC_3(VAR_26))
   return -VAR_4;

  VAR_43.sin_family = VAR_0;
  VAR_43.sin_port = VAR_29->sin6_port;
  VAR_43.sin_addr.s_addr = VAR_29->sin6_addr.s6_addr32[3];

  VAR_31->icsk_af_ops = &VAR_19;
  VAR_26->sk_backlog_rcv = VAR_24;




  VAR_40 = FUNC_27(VAR_26, (struct sockaddr *)&VAR_43, sizeof(VAR_43));

  if (VAR_40) {
   VAR_31->icsk_ext_hdr_len = VAR_42;
   VAR_31->icsk_af_ops = &VAR_20;
   VAR_26->sk_backlog_rcv = VAR_25;



   goto failure;
  } else {
   FUNC_18(&VAR_32->saddr, 0, 0, FUNC_8(0x0000FFFF),
          VAR_30->saddr);
   FUNC_18(&VAR_32->rcv_saddr, 0, 0, FUNC_8(0x0000FFFF),
          VAR_30->rcv_saddr);
  }

  return VAR_40;
 }

 if (!FUNC_15(&VAR_32->rcv_saddr))
  VAR_34 = &VAR_32->rcv_saddr;

 VAR_37.proto = VAR_6;
 FUNC_16(&VAR_37.fl6_dst, &VAR_32->daddr);
 FUNC_16(&VAR_37.fl6_src,
         (VAR_34 ? VAR_34 : &VAR_32->saddr));
 VAR_37.oif = VAR_26->sk_bound_dev_if;
 VAR_37.fl_ip_dport = VAR_29->sin6_port;
 VAR_37.fl_ip_sport = VAR_30->sport;

 if (VAR_32->opt && VAR_32->opt->srcrt) {
  struct rt0_hdr *VAR_44 = (struct rt0_hdr *)VAR_32->opt->srcrt;
  FUNC_16(&VAR_36, &VAR_37.fl6_dst);
  FUNC_16(&VAR_37.fl6_dst, VAR_44->addr);
  VAR_35 = &VAR_36;
 }

 FUNC_22(VAR_26, &VAR_37);

 VAR_40 = FUNC_14(VAR_26, &VAR_38, &VAR_37);
 if (VAR_40)
  goto failure;
 if (VAR_35)
  FUNC_16(&VAR_37.fl6_dst, VAR_35);

 VAR_40 = FUNC_5(FUNC_23(VAR_26), &VAR_38, &VAR_37, VAR_26, VAR_18);
 if (VAR_40 < 0) {
  if (VAR_40 == -VAR_5)
   VAR_40 = FUNC_13(VAR_26, &VAR_38, &VAR_37);
  if (VAR_40 < 0)
   goto failure;
 }

 if (VAR_34 == ((void*)0)) {
  VAR_34 = &VAR_37.fl6_src;
  FUNC_16(&VAR_32->rcv_saddr, VAR_34);
 }


 FUNC_16(&VAR_32->saddr, VAR_34);
 VAR_30->rcv_saddr = VAR_13;

 VAR_26->sk_gso_type = VAR_15;
 FUNC_2(VAR_26, VAR_38, ((void*)0), ((void*)0));

 VAR_31->icsk_ext_hdr_len = 0;
 if (VAR_32->opt)
  VAR_31->icsk_ext_hdr_len = (VAR_32->opt->opt_flen +
       VAR_32->opt->opt_nflen);

 VAR_33->rx_opt.mss_clamp = VAR_12 - sizeof(struct tcphdr) - sizeof(struct ipv6hdr);

 VAR_30->dport = VAR_29->sin6_port;

 FUNC_25(VAR_26, VAR_17);
 VAR_40 = FUNC_9(&VAR_21, VAR_26);
 if (VAR_40)
  goto late_failure;

 if (!VAR_33->write_seq)
  VAR_33->write_seq = FUNC_21(VAR_32->saddr.s6_addr32,
            VAR_32->daddr.s6_addr32,
            VAR_30->sport,
            VAR_30->dport);

 VAR_40 = FUNC_24(VAR_26);
 if (VAR_40)
  goto late_failure;

 return 0;

late_failure:
 FUNC_25(VAR_26, VAR_16);
 FUNC_4(VAR_26);
failure:
 VAR_30->dport = 0;
 VAR_26->sk_route_caps = 0;
 return VAR_40;
}
