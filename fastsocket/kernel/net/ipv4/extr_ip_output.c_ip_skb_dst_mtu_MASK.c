
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {scalar_t__ sk; } ;
struct inet_sock {scalar_t__ pmtudisc; } ;
struct TYPE_5__ {TYPE_1__* dev; } ;
struct TYPE_4__ {int mtu; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 struct inet_sock* FUNC_1 (scalar_t__) ;
 TYPE_2__* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_3(struct sk_buff *VAR_1)
{
 struct inet_sock *VAR_2 = VAR_1->sk ? FUNC_1(VAR_1->sk) : ((void*)0);

 return (VAR_2 && VAR_2->pmtudisc == VAR_0) ?
        FUNC_2(VAR_1)->dev->mtu : FUNC_0(FUNC_2(VAR_1));
}
