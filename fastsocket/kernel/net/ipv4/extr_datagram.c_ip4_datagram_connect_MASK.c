
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {scalar_t__ sin_family; int sin_port; TYPE_1__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct sock {int sk_bound_dev_if; int sk_state; int sk_protocol; } ;
struct TYPE_4__ {int dst; } ;
struct rtable {int rt_flags; TYPE_2__ u; int rt_dst; scalar_t__ rt_src; } ;
struct inet_sock {int mc_index; int id; int dport; int daddr; scalar_t__ rcv_saddr; scalar_t__ saddr; int sport; scalar_t__ mc_addr; } ;
typedef scalar_t__ __be32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ) ;
 int VAR_6 ;
 int FUNC_1 (struct sock*) ;
 int VAR_7 ;
 int VAR_8 ;
 struct inet_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct rtable**,int ,scalar_t__,int ,int,int ,int ,int ,struct sock*,int) ;
 int FUNC_4 (struct rtable*) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_9 ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*,int *) ;
 int FUNC_8 (struct sock*,int ) ;
 int FUNC_9 (struct sock*) ;

int FUNC_10(struct sock *VAR_10, struct sockaddr *VAR_11, int VAR_12)
{
 struct inet_sock *VAR_13 = FUNC_2(VAR_10);
 struct sockaddr_in *VAR_14 = (struct sockaddr_in *) VAR_11;
 struct rtable *VAR_15;
 __be32 VAR_16;
 int VAR_17;
 int VAR_18;


 if (VAR_12 < sizeof(*VAR_14))
  return -VAR_3;

 if (VAR_14->sin_family != VAR_0)
  return -VAR_2;

 FUNC_6(VAR_10);

 VAR_17 = VAR_10->sk_bound_dev_if;
 VAR_16 = VAR_13->saddr;
 if (FUNC_5(VAR_14->sin_addr.s_addr)) {
  if (!VAR_17)
   VAR_17 = VAR_13->mc_index;
  if (!VAR_16)
   VAR_16 = VAR_13->mc_addr;
 }
 VAR_18 = FUNC_3(&VAR_15, VAR_14->sin_addr.s_addr, VAR_16,
          FUNC_1(VAR_10), VAR_17,
          VAR_10->sk_protocol,
          VAR_13->sport, VAR_14->sin_port, VAR_10, 1);
 if (VAR_18) {
  if (VAR_18 == -VAR_4)
   FUNC_0(FUNC_9(VAR_10), VAR_5);
  return VAR_18;
 }

 if ((VAR_15->rt_flags & VAR_6) && !FUNC_8(VAR_10, VAR_7)) {
  FUNC_4(VAR_15);
  return -VAR_1;
 }
 if (!VAR_13->saddr)
  VAR_13->saddr = VAR_15->rt_src;
 if (!VAR_13->rcv_saddr)
  VAR_13->rcv_saddr = VAR_15->rt_src;
 VAR_13->daddr = VAR_15->rt_dst;
 VAR_13->dport = VAR_14->sin_port;
 VAR_10->sk_state = VAR_8;
 VAR_13->id = VAR_9;

 FUNC_7(VAR_10, &VAR_15->u.dst);
 return(0);
}
