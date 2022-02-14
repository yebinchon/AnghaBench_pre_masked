
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union nf_inet_addr {int * ip6; } ;
typedef int u8 ;


 int * FUNC_0 (int ) ;

__attribute__((used)) static inline void
FUNC_1(union nf_inet_addr *VAR_0, u8 VAR_1)
{
 VAR_0->ip6[0] &= FUNC_0(VAR_1)[0];
 VAR_0->ip6[1] &= FUNC_0(VAR_1)[1];
 VAR_0->ip6[2] &= FUNC_0(VAR_1)[2];
 VAR_0->ip6[3] &= FUNC_0(VAR_1)[3];
}
