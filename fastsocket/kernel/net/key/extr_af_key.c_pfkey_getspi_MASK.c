
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int xfrm_address_t ;
typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_4__ {int daddr; } ;
struct xfrm_state {TYPE_2__ id; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {unsigned short sa_family; } ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct sadb_x_sa2 {int sadb_x_sa2_reqid; int sadb_x_sa2_mode; } ;
struct sadb_spirange {int sadb_spirange_min; int sadb_spirange_max; } ;
struct sadb_msg {int sadb_msg_pid; scalar_t__ sadb_msg_seq; scalar_t__ sadb_msg_reserved; scalar_t__ sadb_msg_errno; int sadb_msg_satype; int sadb_msg_type; int sadb_msg_version; } ;
struct sadb_address {int dummy; } ;
struct net {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct sk_buff*,int ,int ,struct sock*,struct net*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 struct sk_buff* FUNC_7 (struct xfrm_state*) ;
 int FUNC_8 (void*,void*) ;
 struct net* FUNC_9 (struct sock*) ;
 scalar_t__ FUNC_10 (int *,int *,unsigned short) ;
 int FUNC_11 (struct xfrm_state*,int,int) ;
 struct xfrm_state* FUNC_12 (struct net*,int *,int,int,scalar_t__,int *,int *,int,unsigned short) ;
 struct xfrm_state* FUNC_13 (struct net*,int ,scalar_t__) ;
 int FUNC_14 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_15(struct sock *VAR_11, struct sk_buff *VAR_12, struct sadb_msg *VAR_13, void **VAR_14)
{
 struct net *VAR_15 = FUNC_9(VAR_11);
 struct sk_buff *VAR_16;
 struct sadb_x_sa2 *VAR_17;
 struct sadb_address *VAR_18, *VAR_19;
 struct sadb_msg *VAR_20;
 struct sadb_spirange *VAR_21;
 struct xfrm_state *VAR_22 = ((void*)0);
 int VAR_23;
 int VAR_24;
 u32 VAR_25, VAR_26;
 u32 VAR_27;
 u8 VAR_28;
 unsigned short VAR_29;
 xfrm_address_t *VAR_30 = ((void*)0), *VAR_31 = ((void*)0);

 if (!FUNC_8(VAR_14[VAR_6-1],
         VAR_14[VAR_5-1]))
  return -VAR_2;

 VAR_28 = FUNC_6(VAR_13->sadb_msg_satype);
 if (VAR_28 == 0)
  return -VAR_2;

 if ((VAR_17 = VAR_14[VAR_9-1]) != ((void*)0)) {
  VAR_23 = FUNC_4(VAR_17->sadb_x_sa2_mode);
  if (VAR_23 < 0)
   return -VAR_2;
  VAR_27 = VAR_17->sadb_x_sa2_reqid;
 } else {
  VAR_23 = 0;
  VAR_27 = 0;
 }

 VAR_18 = VAR_14[VAR_6-1];
 VAR_19 = VAR_14[VAR_5-1];

 VAR_29 = ((struct sockaddr *)(VAR_18 + 1))->sa_family;
 switch (VAR_29) {
 case 129:
  VAR_31 = (xfrm_address_t *)&((struct sockaddr_in *)(VAR_19 + 1))->sin_addr.s_addr;
  VAR_30 = (xfrm_address_t *)&((struct sockaddr_in *)(VAR_18 + 1))->sin_addr.s_addr;
  break;






 }

 if (VAR_13->sadb_msg_seq) {
  VAR_22 = FUNC_13(VAR_15, VAR_1, VAR_13->sadb_msg_seq);
  if (VAR_22 && FUNC_10(&VAR_22->id.daddr, VAR_31, VAR_29)) {
   FUNC_14(VAR_22);
   VAR_22 = ((void*)0);
  }
 }

 if (!VAR_22)
  VAR_22 = FUNC_12(VAR_15, &VAR_10, VAR_23, VAR_27, VAR_28, VAR_31, VAR_30, 1, VAR_29);

 if (VAR_22 == ((void*)0))
  return -VAR_3;

 VAR_25 = 0x100;
 VAR_26 = 0x0fffffff;

 VAR_21 = VAR_14[VAR_7-1];
 if (VAR_21) {
  VAR_25 = VAR_21->sadb_spirange_min;
  VAR_26 = VAR_21->sadb_spirange_max;
 }

 VAR_24 = FUNC_11(VAR_22, VAR_25, VAR_26);
 VAR_16 = VAR_24 ? FUNC_0(VAR_24) : FUNC_7(VAR_22);

 if (FUNC_1(VAR_16)) {
  FUNC_14(VAR_22);
  return FUNC_2(VAR_16);
 }

 VAR_20 = (struct sadb_msg *) VAR_16->data;
 VAR_20->sadb_msg_version = VAR_13->sadb_msg_version;
 VAR_20->sadb_msg_type = VAR_8;
 VAR_20->sadb_msg_satype = FUNC_5(VAR_28);
 VAR_20->sadb_msg_errno = 0;
 VAR_20->sadb_msg_reserved = 0;
 VAR_20->sadb_msg_seq = VAR_13->sadb_msg_seq;
 VAR_20->sadb_msg_pid = VAR_13->sadb_msg_pid;

 FUNC_14(VAR_22);

 FUNC_3(VAR_16, VAR_4, VAR_0, VAR_11, VAR_15);

 return 0;
}
