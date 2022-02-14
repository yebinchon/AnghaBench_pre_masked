
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int* s6_addr32; } ;
typedef int __be32 ;


 int FUNC_0 (int) ;

__attribute__((used)) static inline bool
FUNC_1(const struct in6_addr *VAR_0)
{
 __be32 VAR_1 = VAR_0->s6_addr32[0];
 return ((VAR_1 & FUNC_0(0xFF000000)) == FUNC_0(0xFF000000));
}
