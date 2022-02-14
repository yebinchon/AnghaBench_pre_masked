
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sock {scalar_t__ sk_state; int sk_err; int (* sk_error_report ) (struct sock*) ;} ;
struct sk_buff {scalar_t__* data; } ;
struct ipv6_pinfo {scalar_t__ pmtudisc; scalar_t__ recverr; } ;
struct inet_sock {int hdrincl; } ;
struct inet6_skb_parm {int dummy; } ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,scalar_t__,int*) ;
 struct ipv6_pinfo* FUNC_1 (struct sock*) ;
 struct inet_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,struct sk_buff*,int,int ,int ,scalar_t__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sock*) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_3, struct sk_buff *VAR_4,
        struct inet6_skb_parm *VAR_5,
        u8 VAR_6, u8 VAR_7, int VAR_8, __be32 VAR_9)
{
 struct inet_sock *VAR_10 = FUNC_2(VAR_3);
 struct ipv6_pinfo *VAR_11 = FUNC_1(VAR_3);
 int VAR_12;
 int VAR_13;






 if (!VAR_11->recverr && VAR_3->sk_state != VAR_2)
  return;

 VAR_13 = FUNC_0(VAR_6, VAR_7, &VAR_12);
 if (VAR_6 == VAR_0)
  VAR_13 = (VAR_11->pmtudisc == VAR_1);

 if (VAR_11->recverr) {
  u8 *VAR_14 = VAR_4->data;
  if (!VAR_10->hdrincl)
   VAR_14 += VAR_8;
  FUNC_3(VAR_3, VAR_4, VAR_12, 0, FUNC_4(VAR_9), VAR_14);
 }

 if (VAR_11->recverr || VAR_13) {
  VAR_3->sk_err = VAR_12;
  VAR_3->sk_error_report(VAR_3);
 }
}
