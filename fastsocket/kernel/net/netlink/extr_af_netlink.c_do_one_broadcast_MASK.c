
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct netlink_sock {scalar_t__ pid; int ngroups; int flags; int groups; } ;
struct netlink_broadcast_data {scalar_t__ pid; int group; int failure; int delivery_failure; int congested; int delivered; int * skb2; int skb; int allocation; int net; struct sock* exclude_sk; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct sock*,int *) ;
 int FUNC_3 (struct sock*) ;
 struct netlink_sock* FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (struct sock*,int *) ;
 int * FUNC_6 (int ,int ) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sock*) ;
 int FUNC_13 (int,int ) ;

__attribute__((used)) static inline int FUNC_14(struct sock *VAR_1,
       struct netlink_broadcast_data *VAR_2)
{
 struct netlink_sock *VAR_3 = FUNC_4(VAR_1);
 int VAR_4;

 if (VAR_2->exclude_sk == VAR_1)
  goto out;

 if (VAR_3->pid == VAR_2->pid || VAR_2->group - 1 >= VAR_3->ngroups ||
     !FUNC_13(VAR_2->group - 1, VAR_3->groups))
  goto out;

 if (!FUNC_1(FUNC_11(VAR_1), VAR_2->net))
  goto out;

 if (VAR_2->failure) {
  FUNC_3(VAR_1);
  goto out;
 }

 FUNC_10(VAR_1);
 if (VAR_2->skb2 == ((void*)0)) {
  if (FUNC_9(VAR_2->skb)) {
   VAR_2->skb2 = FUNC_6(VAR_2->skb, VAR_2->allocation);
  } else {
   VAR_2->skb2 = FUNC_7(VAR_2->skb);




   FUNC_8(VAR_2->skb2);
  }
 }
 if (VAR_2->skb2 == ((void*)0)) {
  FUNC_3(VAR_1);

  VAR_2->failure = 1;
  if (VAR_3->flags & VAR_0)
   VAR_2->delivery_failure = 1;
 } else if (FUNC_5(VAR_1, VAR_2->skb2)) {
  FUNC_0(VAR_2->skb2);
  VAR_2->skb2 = ((void*)0);
 } else if ((VAR_4 = FUNC_2(VAR_1, VAR_2->skb2)) < 0) {
  FUNC_3(VAR_1);
  if (VAR_3->flags & VAR_0)
   VAR_2->delivery_failure = 1;
 } else {
  VAR_2->congested |= VAR_4;
  VAR_2->delivered = 1;
  VAR_2->skb2 = ((void*)0);
 }
 FUNC_12(VAR_1);

out:
 return 0;
}
