
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcp_sock {int write_seq; int pushed_seq; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_1(struct tcp_sock *VAR_1, struct sk_buff *VAR_2)
{
 FUNC_0(VAR_2)->flags |= VAR_0;
 VAR_1->pushed_seq = VAR_1->write_seq;
}
