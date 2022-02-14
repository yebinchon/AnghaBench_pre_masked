
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {int ecn_flags; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int flags; } ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_0 (struct sk_buff const*) ;
 int FUNC_1 (struct sock*) ;

__attribute__((used)) static inline void FUNC_2(struct tcp_sock *VAR_4, const struct sk_buff *VAR_5)
{
 if (!(VAR_4->ecn_flags & VAR_2))
  return;

 switch (FUNC_0(VAR_5)->flags & VAR_0) {
 case 128:




  if (VAR_4->ecn_flags & VAR_3)
   FUNC_1((struct sock *)VAR_4);
  break;
 case 129:
  VAR_4->ecn_flags |= VAR_1;

 default:
  VAR_4->ecn_flags |= VAR_3;
 }
}
