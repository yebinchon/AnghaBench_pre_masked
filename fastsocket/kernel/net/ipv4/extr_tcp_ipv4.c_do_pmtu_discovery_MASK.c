
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sock {scalar_t__ sk_state; int sk_err_soft; } ;
struct iphdr {int dummy; } ;
struct inet_sock {scalar_t__ pmtudisc; } ;
struct dst_entry {TYPE_1__* ops; } ;
struct TYPE_4__ {scalar_t__ icsk_pmtu_cookie; } ;
struct TYPE_3__ {int (* update_pmtu ) (struct dst_entry*,scalar_t__) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct dst_entry* FUNC_0 (struct sock*,int ) ;
 scalar_t__ FUNC_1 (struct dst_entry*) ;
 TYPE_2__* FUNC_2 (struct sock*) ;
 struct inet_sock* FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (struct sock*,struct dst_entry*) ;
 int FUNC_5 (struct dst_entry*,scalar_t__) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*,scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct sock *VAR_3, struct iphdr *VAR_4, u32 VAR_5)
{
 struct dst_entry *VAR_6;
 struct inet_sock *VAR_7 = FUNC_3(VAR_3);





 if (VAR_3->sk_state == VAR_2)
  return;







 if ((VAR_6 = FUNC_0(VAR_3, 0)) == ((void*)0))
  return;

 VAR_6->ops->update_pmtu(VAR_6, VAR_5);




 if (VAR_5 < FUNC_1(VAR_6) && FUNC_4(VAR_3, VAR_6))
  VAR_3->sk_err_soft = VAR_0;

 VAR_5 = FUNC_1(VAR_6);

 if (VAR_7->pmtudisc != VAR_1 &&
     FUNC_2(VAR_3)->icsk_pmtu_cookie > VAR_5) {
  FUNC_7(VAR_3, VAR_5);






  FUNC_6(VAR_3);
 }
}
