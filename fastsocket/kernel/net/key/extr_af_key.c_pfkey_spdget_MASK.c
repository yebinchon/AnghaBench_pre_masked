
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_policy {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct sadb_x_policy {int sadb_x_policy_id; } ;
struct sadb_msg {scalar_t__ sadb_msg_type; int sadb_msg_pid; int sadb_msg_seq; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int byid; } ;
struct km_event {int event; TYPE_1__ data; int pid; int seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 int FUNC_2 (struct sock*,struct xfrm_policy*,struct sadb_msg*,unsigned int) ;
 int FUNC_3 (struct xfrm_policy*,unsigned int,struct km_event*) ;
 struct net* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct xfrm_policy*,int,int ,int ,int ) ;
 int FUNC_6 (struct xfrm_policy*) ;
 struct xfrm_policy* FUNC_7 (struct net*,int ,int ,unsigned int,int ,int,int*) ;
 unsigned int FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(struct sock *VAR_9, struct sk_buff *VAR_10, struct sadb_msg *VAR_11, void **VAR_12)
{
 struct net *VAR_13 = FUNC_4(VAR_9);
 unsigned int VAR_14;
 int VAR_15 = 0, VAR_16;
 struct sadb_x_policy *VAR_17;
 struct xfrm_policy *VAR_18;
 struct km_event VAR_19;

 if ((VAR_17 = VAR_12[VAR_3-1]) == ((void*)0))
  return -VAR_1;

 VAR_14 = FUNC_8(VAR_17->sadb_x_policy_id);
 if (VAR_14 >= VAR_6)
  return -VAR_1;

 VAR_16 = (VAR_11->sadb_msg_type == VAR_4);
 VAR_18 = FUNC_7(VAR_13, VAR_0, VAR_7,
         VAR_14, VAR_17->sadb_x_policy_id, VAR_16, &VAR_15);
 if (VAR_18 == ((void*)0))
  return -VAR_2;

 if (VAR_16) {
  FUNC_5(VAR_18, VAR_15 ? 0 : 1,
    FUNC_0(VAR_8),
    FUNC_1(VAR_8), 0);

  if (VAR_15)
   goto out;
  VAR_19.seq = VAR_11->sadb_msg_seq;
  VAR_19.pid = VAR_11->sadb_msg_pid;
  VAR_19.data.byid = 1;
  VAR_19.event = VAR_5;
  FUNC_3(VAR_18, VAR_14, &VAR_19);
 } else {
  VAR_15 = FUNC_2(VAR_9, VAR_18, VAR_11, VAR_14);
 }

out:
 FUNC_6(VAR_18);
 return VAR_15;
}
