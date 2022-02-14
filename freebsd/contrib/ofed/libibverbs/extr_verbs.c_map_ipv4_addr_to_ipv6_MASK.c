
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {scalar_t__* s6_addr32; } ;
typedef scalar_t__ __be32 ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(__be32 VAR_0, struct in6_addr *VAR_1)
{
 VAR_1->s6_addr32[0] = 0;
 VAR_1->s6_addr32[1] = 0;
 VAR_1->s6_addr32[2] = FUNC_0(0x0000FFFF);
 VAR_1->s6_addr32[3] = VAR_0;
}
