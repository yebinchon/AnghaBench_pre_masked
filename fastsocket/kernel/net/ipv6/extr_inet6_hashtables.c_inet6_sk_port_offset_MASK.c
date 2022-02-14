
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct sock {int dummy; } ;
struct TYPE_4__ {int s6_addr32; } ;
struct TYPE_3__ {int s6_addr32; } ;
struct ipv6_pinfo {TYPE_2__ daddr; TYPE_1__ rcv_saddr; } ;
struct inet_sock {int dport; } ;


 struct ipv6_pinfo* FUNC_0 (struct sock const*) ;
 struct inet_sock* FUNC_1 (struct sock const*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static inline u32 FUNC_3(const struct sock *VAR_0)
{
 const struct inet_sock *VAR_1 = FUNC_1(VAR_0);
 const struct ipv6_pinfo *VAR_2 = FUNC_0(VAR_0);
 return FUNC_2(VAR_2->rcv_saddr.s6_addr32,
       VAR_2->daddr.s6_addr32,
       VAR_1->dport);
}
