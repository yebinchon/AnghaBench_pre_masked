
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {int ecn_flags; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_1(struct tcp_sock *VAR_3, struct sk_buff *VAR_4)
{
 FUNC_0(VAR_4)->flags &= ~VAR_0;
 if (!(VAR_3->ecn_flags & VAR_2))
  FUNC_0(VAR_4)->flags &= ~VAR_1;
}
