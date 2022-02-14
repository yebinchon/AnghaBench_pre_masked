
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
struct dccp_sock {int dccps_gsr; } ;
struct TYPE_4__ {scalar_t__ icsk_pmtu_cookie; } ;
struct TYPE_3__ {int (* update_pmtu ) (struct dst_entry*,scalar_t__) ;} ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct dst_entry* FUNC_0 (struct sock*,int ) ;
 int FUNC_1 (struct sock*,int ,int ) ;
 struct dccp_sock* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct dst_entry*) ;
 TYPE_2__* FUNC_5 (struct sock*) ;
 struct inet_sock* FUNC_6 (struct sock*) ;
 scalar_t__ FUNC_7 (struct sock*,struct dst_entry*) ;
 int FUNC_8 (struct dst_entry*,scalar_t__) ;

__attribute__((used)) static inline void FUNC_9(struct sock *VAR_4,
       const struct iphdr *VAR_5,
       u32 VAR_6)
{
 struct dst_entry *VAR_7;
 const struct inet_sock *VAR_8 = FUNC_6(VAR_4);
 const struct dccp_sock *VAR_9 = FUNC_2(VAR_4);





 if (VAR_4->sk_state == VAR_0)
  return;







 if ((VAR_7 = FUNC_0(VAR_4, 0)) == ((void*)0))
  return;

 VAR_7->ops->update_pmtu(VAR_7, VAR_6);




 if (VAR_6 < FUNC_4(VAR_7) && FUNC_7(VAR_4, VAR_7))
  VAR_4->sk_err_soft = VAR_2;

 VAR_6 = FUNC_4(VAR_7);

 if (VAR_8->pmtudisc != VAR_3 &&
     FUNC_5(VAR_4)->icsk_pmtu_cookie > VAR_6) {
  FUNC_3(VAR_4, VAR_6);
  FUNC_1(VAR_4, VAR_9->dccps_gsr, VAR_1);
 }
}
