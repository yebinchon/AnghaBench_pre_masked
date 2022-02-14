
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_2__ {struct sock** icmp_sk; } ;
struct net {TYPE_1__ ipv6; } ;


 size_t FUNC_0 () ;

__attribute__((used)) static inline struct sock *FUNC_1(struct net *VAR_0)
{
 return VAR_0->ipv6.icmp_sk[FUNC_0()];
}
