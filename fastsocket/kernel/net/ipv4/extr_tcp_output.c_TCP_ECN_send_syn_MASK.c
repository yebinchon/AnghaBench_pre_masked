
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {scalar_t__ ecn_flags; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 struct tcp_sock* FUNC_1 (struct sock*) ;

__attribute__((used)) static inline void FUNC_2(struct sock *VAR_4, struct sk_buff *VAR_5)
{
 struct tcp_sock *VAR_6 = FUNC_1(VAR_4);

 VAR_6->ecn_flags = 0;
 if (VAR_3 == 1) {
  FUNC_0(VAR_5)->flags |= VAR_1 | VAR_0;
  VAR_6->ecn_flags = VAR_2;
 }
}
