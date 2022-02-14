
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcphdr {scalar_t__ ack; int syn; int rst; int dest; int source; } ;
struct sock {scalar_t__ sk_state; } ;
struct sk_buff {int dummy; } ;
struct request_sock {int dummy; } ;
struct TYPE_2__ {int daddr; int saddr; } ;


 scalar_t__ VAR_0 ;
 struct sock* FUNC_0 (int ,int *,int *,int ,int *,int ,int ) ;
 int FUNC_1 (struct sock*) ;
 struct sock* FUNC_2 (struct sock*,struct sk_buff*) ;
 struct request_sock* FUNC_3 (struct sock*,struct request_sock***,int ,int *,int *,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct sock*) ;
 struct sock* FUNC_10 (struct sock*,struct sk_buff*,struct request_sock*,struct request_sock**) ;
 int VAR_1 ;
 struct tcphdr* FUNC_11 (struct sk_buff*) ;

__attribute__((used)) static struct sock *FUNC_12(struct sock *VAR_2,struct sk_buff *VAR_3)
{
 struct request_sock *VAR_4, **VAR_5;
 const struct tcphdr *VAR_6 = FUNC_11(VAR_3);
 struct sock *VAR_7;


 VAR_4 = FUNC_3(VAR_2, &VAR_5, VAR_6->source,
       &FUNC_7(VAR_3)->saddr,
       &FUNC_7(VAR_3)->daddr, FUNC_4(VAR_3));
 if (VAR_4)
  return FUNC_10(VAR_2, VAR_3, VAR_4, VAR_5);

 VAR_7 = FUNC_0(FUNC_9(VAR_2), &VAR_1,
   &FUNC_7(VAR_3)->saddr, VAR_6->source,
   &FUNC_7(VAR_3)->daddr, FUNC_8(VAR_6->dest), FUNC_4(VAR_3));

 if (VAR_7) {
  if (VAR_7->sk_state != VAR_0) {
   FUNC_1(VAR_7);
   return VAR_7;
  }
  FUNC_6(FUNC_5(VAR_7));
  return ((void*)0);
 }





 return VAR_2;
}
