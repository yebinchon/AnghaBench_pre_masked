
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct in6_addr {int* s6_addr; } ;
struct sockaddr_in6 {scalar_t__ sin6_family; int sin6_flowinfo; scalar_t__ sin6_scope_id; struct in6_addr sin6_addr; int sin6_port; } ;
struct sock {scalar_t__ sk_state; scalar_t__ sk_bound_dev_if; int sk_mark; } ;
struct rt6_info {int dummy; } ;
struct rt0_hdr {struct in6_addr* addr; } ;
struct raw6_sock {int dummy; } ;
struct msghdr {int msg_namelen; int msg_flags; int msg_iov; scalar_t__ msg_controllen; scalar_t__ msg_name; } ;
struct kiocb {int dummy; } ;
struct ipv6_txoptions {int fl6_flowlabel; scalar_t__ oif; int tot_len; int opt_nflen; int opt_flen; int proto; struct in6_addr fl6_dst; scalar_t__ srcrt; struct in6_addr fl6_src; int mark; } ;
struct ipv6_pinfo {int flow_label; scalar_t__ mcast_oif; int mcast_hops; int hop_limit; int tclass; struct in6_addr saddr; struct ipv6_txoptions* opt; struct in6_addr daddr; scalar_t__ sndflow; } ;
struct ip6_flowlabel {struct in6_addr dst; } ;
struct inet_sock {int num; scalar_t__ hdrincl; } ;
struct flowi {int fl6_flowlabel; scalar_t__ oif; int tot_len; int opt_nflen; int opt_flen; int proto; struct in6_addr fl6_dst; scalar_t__ srcrt; struct in6_addr fl6_src; int mark; } ;
struct dst_entry {int dummy; } ;
typedef int fl ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (int ,struct dst_entry**,struct ipv6_txoptions*,struct sock*,int ) ;
 int FUNC_1 (int ,struct msghdr*,struct ipv6_txoptions*,struct ipv6_txoptions*,int*,int*) ;
 int FUNC_2 (struct dst_entry*) ;
 int FUNC_3 (struct dst_entry*) ;
 struct ipv6_txoptions* FUNC_4 (struct ipv6_txoptions*,struct ip6_flowlabel*,struct ipv6_txoptions*) ;
 struct ip6_flowlabel* FUNC_5 (struct sock*,int) ;
 int FUNC_6 (struct ip6_flowlabel*) ;
 struct ipv6_pinfo* FUNC_7 (struct sock*) ;
 struct inet_sock* FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*,int ,int ,size_t,int ,int,int,struct ipv6_txoptions*,struct ipv6_txoptions*,struct rt6_info*,int) ;
 int FUNC_10 (struct sock*,struct dst_entry**,struct ipv6_txoptions*) ;
 int FUNC_11 (struct dst_entry*) ;
 int FUNC_12 (struct sock*,struct dst_entry**,struct ipv6_txoptions*) ;
 int FUNC_13 (struct sock*) ;
 int VAR_18 ;
 scalar_t__ FUNC_14 (struct in6_addr*) ;
 int FUNC_15 (struct in6_addr*,struct in6_addr*) ;
 scalar_t__ FUNC_16 (struct in6_addr*,struct in6_addr*) ;
 scalar_t__ FUNC_17 (struct in6_addr*) ;
 int FUNC_18 (struct in6_addr*) ;
 struct ipv6_txoptions* FUNC_19 (struct ipv6_txoptions*,struct ipv6_txoptions*) ;
 int FUNC_20 (struct sock*) ;
 int FUNC_21 (struct ipv6_txoptions*,int ,int) ;
 int FUNC_22 (int ) ;
 struct raw6_sock* FUNC_23 (struct sock*) ;
 int FUNC_24 (struct ipv6_txoptions*,struct msghdr*) ;
 int FUNC_25 (struct sock*,struct ipv6_txoptions*,struct raw6_sock*) ;
 int FUNC_26 (struct sock*,int ,size_t,struct ipv6_txoptions*,struct rt6_info*,int) ;
 int FUNC_27 (struct sock*) ;
 int FUNC_28 (struct sock*,struct ipv6_txoptions*) ;
 int FUNC_29 (struct sock*) ;

__attribute__((used)) static int FUNC_30(struct kiocb *VAR_19, struct sock *VAR_20,
     struct msghdr *VAR_21, size_t VAR_22)
{
 struct ipv6_txoptions VAR_23;
 struct sockaddr_in6 * VAR_24 = (struct sockaddr_in6 *) VAR_21->msg_name;
 struct in6_addr *VAR_25, *VAR_26 = ((void*)0), VAR_27;
 struct inet_sock *VAR_28 = FUNC_8(VAR_20);
 struct ipv6_pinfo *VAR_29 = FUNC_7(VAR_20);
 struct raw6_sock *VAR_30 = FUNC_23(VAR_20);
 struct ipv6_txoptions *VAR_31 = ((void*)0);
 struct ip6_flowlabel *VAR_32 = ((void*)0);
 struct dst_entry *VAR_33 = ((void*)0);
 struct flowi VAR_34;
 int VAR_35 = VAR_21->msg_namelen;
 int VAR_36 = -1;
 int VAR_37 = -1;
 u16 VAR_38;
 int VAR_39;




 if (VAR_22 > VAR_7)
  return -VAR_4;


 if (VAR_21->msg_flags & VAR_13)
  return -VAR_5;




 FUNC_21(&VAR_34, 0, sizeof(VAR_34));

 VAR_34.mark = VAR_20->sk_mark;

 if (VAR_24) {
  if (VAR_35 < VAR_15)
   return -VAR_3;

  if (VAR_24->sin6_family && VAR_24->sin6_family != VAR_0)
   return(-VAR_1);


  VAR_38 = FUNC_22(VAR_24->sin6_port);

  if (!VAR_38)
   VAR_38 = VAR_28->num;
  else if (VAR_38 != VAR_28->num)
   return(-VAR_3);

  if (VAR_38 > 255)
   return(-VAR_3);

  VAR_25 = &VAR_24->sin6_addr;
  if (VAR_29->sndflow) {
   VAR_34.fl6_flowlabel = VAR_24->sin6_flowinfo&VAR_9;
   if (VAR_34.fl6_flowlabel&VAR_10) {
    VAR_32 = FUNC_5(VAR_20, VAR_34.fl6_flowlabel);
    if (VAR_32 == ((void*)0))
     return -VAR_3;
    VAR_25 = &VAR_32->dst;
   }
  }





  if (VAR_20->sk_state == VAR_16 &&
      FUNC_16(VAR_25, &VAR_29->daddr))
   VAR_25 = &VAR_29->daddr;

  if (VAR_35 >= sizeof(struct sockaddr_in6) &&
      VAR_24->sin6_scope_id &&
      FUNC_18(VAR_25)&VAR_8)
   VAR_34.oif = VAR_24->sin6_scope_id;
 } else {
  if (VAR_20->sk_state != VAR_16)
   return -VAR_2;

  VAR_38 = VAR_28->num;
  VAR_25 = &VAR_29->daddr;
  VAR_34.fl6_flowlabel = VAR_29->flow_label;
 }

 if (VAR_34.oif == 0)
  VAR_34.oif = VAR_20->sk_bound_dev_if;

 if (VAR_21->msg_controllen) {
  VAR_31 = &VAR_23;
  FUNC_21(VAR_31, 0, sizeof(struct ipv6_txoptions));
  VAR_31->tot_len = sizeof(struct ipv6_txoptions);

  VAR_39 = FUNC_1(FUNC_29(VAR_20), VAR_21, &VAR_34, VAR_31, &VAR_36, &VAR_37);
  if (VAR_39 < 0) {
   FUNC_6(VAR_32);
   return VAR_39;
  }
  if ((VAR_34.fl6_flowlabel&VAR_10) && !VAR_32) {
   VAR_32 = FUNC_5(VAR_20, VAR_34.fl6_flowlabel);
   if (VAR_32 == ((void*)0))
    return -VAR_3;
  }
  if (!(VAR_31->opt_nflen|VAR_31->opt_flen))
   VAR_31 = ((void*)0);
 }
 if (VAR_31 == ((void*)0))
  VAR_31 = VAR_29->opt;
 if (VAR_32)
  VAR_31 = FUNC_4(&VAR_23, VAR_32, VAR_31);
 VAR_31 = FUNC_19(&VAR_23, VAR_31);

 VAR_34.proto = VAR_38;
 VAR_39 = FUNC_24(&VAR_34, VAR_21);
 if (VAR_39)
  goto out;

 if (!FUNC_14(VAR_25))
  FUNC_15(&VAR_34.fl6_dst, VAR_25);
 else
  VAR_34.fl6_dst.s6_addr[15] = 0x1;
 if (FUNC_14(&VAR_34.fl6_src) && !FUNC_14(&VAR_29->saddr))
  FUNC_15(&VAR_34.fl6_src, &VAR_29->saddr);


 if (VAR_31 && VAR_31->srcrt) {
  struct rt0_hdr *VAR_40 = (struct rt0_hdr *) VAR_31->srcrt;
  FUNC_15(&VAR_27, &VAR_34.fl6_dst);
  FUNC_15(&VAR_34.fl6_dst, VAR_40->addr);
  VAR_26 = &VAR_27;
 }

 if (!VAR_34.oif && FUNC_17(&VAR_34.fl6_dst))
  VAR_34.oif = VAR_29->mcast_oif;
 FUNC_28(VAR_20, &VAR_34);

 VAR_39 = FUNC_12(VAR_20, &VAR_33, &VAR_34);
 if (VAR_39)
  goto out;
 if (VAR_26)
  FUNC_15(&VAR_34.fl6_dst, VAR_26);

 VAR_39 = FUNC_0(FUNC_29(VAR_20), &VAR_33, &VAR_34, VAR_20, VAR_17);
 if (VAR_39 < 0) {
  if (VAR_39 == -VAR_6)
   VAR_39 = FUNC_10(VAR_20, &VAR_33, &VAR_34);
  if (VAR_39 < 0)
   goto out;
 }

 if (VAR_36 < 0) {
  if (FUNC_17(&VAR_34.fl6_dst))
   VAR_36 = VAR_29->mcast_hops;
  else
   VAR_36 = VAR_29->hop_limit;
  if (VAR_36 < 0)
   VAR_36 = FUNC_11(VAR_33);
 }

 if (VAR_37 < 0)
  VAR_37 = VAR_29->tclass;

 if (VAR_21->msg_flags&VAR_11)
  goto do_confirm;

back_from_confirm:
 if (VAR_28->hdrincl) {
  VAR_39 = FUNC_26(VAR_20, VAR_21->msg_iov, VAR_22, &VAR_34, (struct rt6_info*)VAR_33, VAR_21->msg_flags);
 } else {
  FUNC_20(VAR_20);
  VAR_39 = FUNC_9(VAR_20, VAR_18, VAR_21->msg_iov,
   VAR_22, 0, VAR_36, VAR_37, VAR_31, &VAR_34, (struct rt6_info*)VAR_33,
   VAR_21->msg_flags);

  if (VAR_39)
   FUNC_13(VAR_20);
  else if (!(VAR_21->msg_flags & VAR_12))
   VAR_39 = FUNC_25(VAR_20, &VAR_34, VAR_30);
  FUNC_27(VAR_20);
 }
done:
 FUNC_3(VAR_33);
out:
 FUNC_6(VAR_32);
 return VAR_39<0?VAR_39:VAR_22;
do_confirm:
 FUNC_2(VAR_33);
 if (!(VAR_21->msg_flags & VAR_14) || VAR_22)
  goto back_from_confirm;
 VAR_39 = 0;
 goto done;
}
