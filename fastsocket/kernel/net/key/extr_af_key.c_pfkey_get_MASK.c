
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int proto; } ;
struct xfrm_state {TYPE_1__ id; } ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct sadb_msg {int sadb_msg_pid; int sadb_msg_seq; scalar_t__ sadb_msg_reserved; scalar_t__ sadb_msg_errno; int sadb_msg_satype; int sadb_msg_type; int sadb_msg_version; } ;
struct net {int dummy; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct sk_buff*,int ,int ,struct sock*,struct net*) ;
 int FUNC_3 (int ) ;
 struct sk_buff* FUNC_4 (struct xfrm_state*) ;
 struct xfrm_state* FUNC_5 (struct net*,struct sadb_msg*,void**) ;
 int FUNC_6 (void*,void*) ;
 struct net* FUNC_7 (struct sock*) ;
 int FUNC_8 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_9(struct sock *VAR_8, struct sk_buff *VAR_9, struct sadb_msg *VAR_10, void **VAR_11)
{
 struct net *VAR_12 = FUNC_7(VAR_8);
 __u8 VAR_13;
 struct sk_buff *VAR_14;
 struct sadb_msg *VAR_15;
 struct xfrm_state *VAR_16;

 if (!VAR_11[VAR_6-1] ||
     !FUNC_6(VAR_11[VAR_5-1],
         VAR_11[VAR_4-1]))
  return -VAR_1;

 VAR_16 = FUNC_5(VAR_12, VAR_10, VAR_11);
 if (VAR_16 == ((void*)0))
  return -VAR_2;

 VAR_14 = FUNC_4(VAR_16);
 VAR_13 = VAR_16->id.proto;
 FUNC_8(VAR_16);
 if (FUNC_0(VAR_14))
  return FUNC_1(VAR_14);

 VAR_15 = (struct sadb_msg *) VAR_14->data;
 VAR_15->sadb_msg_version = VAR_10->sadb_msg_version;
 VAR_15->sadb_msg_type = VAR_7;
 VAR_15->sadb_msg_satype = FUNC_3(VAR_13);
 VAR_15->sadb_msg_errno = 0;
 VAR_15->sadb_msg_reserved = 0;
 VAR_15->sadb_msg_seq = VAR_10->sadb_msg_seq;
 VAR_15->sadb_msg_pid = VAR_10->sadb_msg_pid;
 FUNC_2(VAR_14, VAR_3, VAR_0, VAR_8, FUNC_7(VAR_8));

 return 0;
}
