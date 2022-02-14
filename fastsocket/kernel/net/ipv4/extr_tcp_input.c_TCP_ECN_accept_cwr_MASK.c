
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {int ecn_flags; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ cwr; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_1(struct tcp_sock *VAR_1, struct sk_buff *VAR_2)
{
 if (FUNC_0(VAR_2)->cwr)
  VAR_1->ecn_flags &= ~VAR_0;
}
