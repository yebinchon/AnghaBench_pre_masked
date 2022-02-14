
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ s_addr; } ;
struct sockaddr_in {scalar_t__ sin_family; scalar_t__ sin_port; TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct sock {scalar_t__ sk_route_caps; int sk_bound_dev_if; } ;
struct TYPE_5__ {int dst; } ;
struct rtable {int rt_flags; scalar_t__ rt_dst; scalar_t__ rt_src; TYPE_2__ u; } ;
struct ip_options {scalar_t__ faddr; scalar_t__ optlen; scalar_t__ srr; } ;
struct inet_sock {scalar_t__ saddr; scalar_t__ rcv_saddr; int id; scalar_t__ dport; int sport; scalar_t__ daddr; int opt; } ;
struct dccp_sock {int dccps_iss; int dccps_role; } ;
typedef scalar_t__ __be32 ;
struct TYPE_6__ {scalar_t__ icsk_ext_hdr_len; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int VAR_10 ;
 int FUNC_2 (struct sock*,int ) ;
 struct dccp_sock* FUNC_3 (struct sock*) ;
 TYPE_3__* FUNC_4 (struct sock*) ;
 int FUNC_5 (int *,struct sock*) ;
 struct inet_sock* FUNC_6 (struct sock*) ;
 int FUNC_7 (struct rtable**,scalar_t__,scalar_t__,int ,int ,int ,int ,scalar_t__,struct sock*,int) ;
 int FUNC_8 (struct rtable**,int ,int ,scalar_t__,struct sock*) ;
 int FUNC_9 (struct rtable*) ;
 int VAR_11 ;
 struct ip_options* FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__,scalar_t__,int ,scalar_t__) ;
 int FUNC_12 (struct sock*,int *) ;

int FUNC_13(struct sock *VAR_12, struct sockaddr *VAR_13, int VAR_14)
{
 struct inet_sock *VAR_15 = FUNC_6(VAR_12);
 struct dccp_sock *VAR_16 = FUNC_3(VAR_12);
 const struct sockaddr_in *VAR_17 = (struct sockaddr_in *)VAR_13;
 struct rtable *VAR_18;
 __be32 VAR_19, VAR_20;
 int VAR_21;
 int VAR_22;
 struct ip_options *VAR_23;

 VAR_16->dccps_role = VAR_3;

 if (VAR_14 < sizeof(struct sockaddr_in))
  return -VAR_5;

 if (VAR_17->sin_family != VAR_0)
  return -VAR_4;

 VAR_20 = VAR_19 = VAR_17->sin_addr.s_addr;
 VAR_23 = FUNC_10(VAR_15->opt);
 if (VAR_23 != ((void*)0) && VAR_23->srr) {
  if (VAR_19 == 0)
   return -VAR_5;
  VAR_20 = VAR_23->faddr;
 }

 VAR_21 = FUNC_7(&VAR_18, VAR_20, VAR_15->saddr,
          FUNC_0(VAR_12), VAR_12->sk_bound_dev_if,
          VAR_7,
          VAR_15->sport, VAR_17->sin_port, VAR_12, 1);
 if (VAR_21 < 0)
  return VAR_21;

 if (VAR_18->rt_flags & (VAR_9 | VAR_8)) {
  FUNC_9(VAR_18);
  return -VAR_6;
 }

 if (VAR_23 == ((void*)0) || !VAR_23->srr)
  VAR_19 = VAR_18->rt_dst;

 if (VAR_15->saddr == 0)
  VAR_15->saddr = VAR_18->rt_src;
 VAR_15->rcv_saddr = VAR_15->saddr;

 VAR_15->dport = VAR_17->sin_port;
 VAR_15->daddr = VAR_19;

 FUNC_4(VAR_12)->icsk_ext_hdr_len = 0;
 if (VAR_23 != ((void*)0))
  FUNC_4(VAR_12)->icsk_ext_hdr_len = VAR_23->optlen;






 FUNC_2(VAR_12, VAR_2);
 VAR_22 = FUNC_5(&VAR_10, VAR_12);
 if (VAR_22 != 0)
  goto failure;

 VAR_22 = FUNC_8(&VAR_18, VAR_7, VAR_15->sport, VAR_15->dport,
    VAR_12);
 if (VAR_22 != 0)
  goto failure;


 FUNC_12(VAR_12, &VAR_18->u.dst);

 VAR_16->dccps_iss = FUNC_11(VAR_15->saddr, VAR_15->daddr,
          VAR_15->sport, VAR_15->dport);
 VAR_15->id = VAR_16->dccps_iss ^ VAR_11;

 VAR_22 = FUNC_1(VAR_12);
 VAR_18 = ((void*)0);
 if (VAR_22 != 0)
  goto failure;
out:
 return VAR_22;
failure:



 FUNC_2(VAR_12, VAR_1);
 FUNC_9(VAR_18);
 VAR_12->sk_route_caps = 0;
 VAR_15->dport = 0;
 goto out;
}
