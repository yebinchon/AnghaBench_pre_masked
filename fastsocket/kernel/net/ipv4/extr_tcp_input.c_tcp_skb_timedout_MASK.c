
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {scalar_t__ when; } ;
struct TYPE_3__ {scalar_t__ icsk_rto; } ;


 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 TYPE_1__* FUNC_1 (struct sock*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static inline int FUNC_2(struct sock *VAR_1, struct sk_buff *VAR_2)
{
 return (VAR_0 - FUNC_0(VAR_2)->when > FUNC_1(VAR_1)->icsk_rto);
}
