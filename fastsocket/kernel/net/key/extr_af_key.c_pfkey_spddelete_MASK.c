
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_user_sec_ctx {int dummy; } ;
struct xfrm_selector {void* dport_mask; scalar_t__ dport; void* proto; int prefixlen_d; int daddr; void* sport_mask; scalar_t__ sport; int prefixlen_s; int saddr; int family; } ;
struct xfrm_sec_ctx {int dummy; } ;
struct xfrm_policy {int dummy; } ;
struct sockaddr_in {scalar_t__ sin_port; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct sadb_x_sec_ctx {int dummy; } ;
struct sadb_x_policy {scalar_t__ sadb_x_policy_dir; } ;
struct sadb_msg {int sadb_msg_pid; int sadb_msg_seq; } ;
struct sadb_address {int sadb_address_proto; int sadb_address_prefixlen; } ;
struct net {int dummy; } ;
struct TYPE_2__ {scalar_t__ byid; } ;
struct km_event {int event; TYPE_1__ data; int pid; int seq; } ;
typedef int sel ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_11 ;
 void* FUNC_2 (int) ;
 int FUNC_3 (struct xfrm_user_sec_ctx*) ;
 int FUNC_4 (struct xfrm_policy*,scalar_t__,struct km_event*) ;
 int FUNC_5 (struct xfrm_selector*,int ,int) ;
 void* FUNC_6 (int ) ;
 struct xfrm_user_sec_ctx* FUNC_7 (struct sadb_x_sec_ctx*) ;
 int FUNC_8 (struct sadb_address*,int *) ;
 int FUNC_9 (void*,void*) ;
 int FUNC_10 (struct xfrm_sec_ctx**,struct xfrm_user_sec_ctx*) ;
 int FUNC_11 (struct xfrm_sec_ctx*) ;
 struct net* FUNC_12 (struct sock*) ;
 int FUNC_13 (struct xfrm_policy*,int,int ,int ,int ) ;
 int FUNC_14 (struct xfrm_policy*) ;
 struct xfrm_policy* FUNC_15 (struct net*,int ,int ,scalar_t__,struct xfrm_selector*,struct xfrm_sec_ctx*,int,int*) ;

__attribute__((used)) static int FUNC_16(struct sock *VAR_12, struct sk_buff *VAR_13, struct sadb_msg *VAR_14, void **VAR_15)
{
 struct net *VAR_16 = FUNC_12(VAR_12);
 int VAR_17;
 struct sadb_address *VAR_18;
 struct sadb_x_policy *VAR_19;
 struct xfrm_policy *VAR_20;
 struct xfrm_selector VAR_21;
 struct km_event VAR_22;
 struct sadb_x_sec_ctx *VAR_23;
 struct xfrm_sec_ctx *VAR_24 = ((void*)0);

 if (!FUNC_9(VAR_15[VAR_6-1],
         VAR_15[VAR_5-1]) ||
     !VAR_15[VAR_7-1])
  return -VAR_1;

 VAR_19 = VAR_15[VAR_7-1];
 if (!VAR_19->sadb_x_policy_dir || VAR_19->sadb_x_policy_dir >= VAR_4)
  return -VAR_1;

 FUNC_5(&VAR_21, 0, sizeof(VAR_21));

 VAR_18 = VAR_15[VAR_6-1],
 VAR_21.family = FUNC_8(VAR_18, &VAR_21.saddr);
 VAR_21.prefixlen_s = VAR_18->sadb_address_prefixlen;
 VAR_21.proto = FUNC_6(VAR_18->sadb_address_proto);
 VAR_21.sport = ((struct sockaddr_in *)(VAR_18+1))->sin_port;
 if (VAR_21.sport)
  VAR_21.sport_mask = FUNC_2(0xffff);

 VAR_18 = VAR_15[VAR_5-1],
 FUNC_8(VAR_18, &VAR_21.daddr);
 VAR_21.prefixlen_d = VAR_18->sadb_address_prefixlen;
 VAR_21.proto = FUNC_6(VAR_18->sadb_address_proto);
 VAR_21.dport = ((struct sockaddr_in *)(VAR_18+1))->sin_port;
 if (VAR_21.dport)
  VAR_21.dport_mask = FUNC_2(0xffff);

 VAR_23 = (struct sadb_x_sec_ctx *) VAR_15[VAR_8-1];
 if (VAR_23 != ((void*)0)) {
  struct xfrm_user_sec_ctx *VAR_25 = FUNC_7(VAR_23);

  if (!VAR_25)
   return -VAR_3;

  VAR_17 = FUNC_10(&VAR_24, VAR_25);
  FUNC_3(VAR_25);
  if (VAR_17)
   return VAR_17;
 }

 VAR_20 = FUNC_15(VAR_16, VAR_0, VAR_10,
       VAR_19->sadb_x_policy_dir - 1, &VAR_21, VAR_24,
       1, &VAR_17);
 FUNC_11(VAR_24);
 if (VAR_20 == ((void*)0))
  return -VAR_2;

 FUNC_13(VAR_20, VAR_17 ? 0 : 1,
     FUNC_0(VAR_11),
     FUNC_1(VAR_11), 0);

 if (VAR_17)
  goto out;

 VAR_22.seq = VAR_14->sadb_msg_seq;
 VAR_22.pid = VAR_14->sadb_msg_pid;
 VAR_22.data.byid = 0;
 VAR_22.event = VAR_9;
 FUNC_4(VAR_20, VAR_19->sadb_x_policy_dir-1, &VAR_22);

out:
 FUNC_14(VAR_20);
 return VAR_17;
}
