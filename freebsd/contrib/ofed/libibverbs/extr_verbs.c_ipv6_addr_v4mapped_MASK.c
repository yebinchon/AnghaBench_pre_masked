
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {unsigned long* s6_addr32; } ;


 scalar_t__ FUNC_0 (struct in6_addr const*) ;
 unsigned long FUNC_1 (int) ;

__attribute__((used)) static inline int FUNC_2(const struct in6_addr *VAR_0)
{
 return FUNC_0(VAR_0) ||

  (VAR_0->s6_addr32[0] == FUNC_1(0xff0e0000) &&
  ((VAR_0->s6_addr32[1] |
   (VAR_0->s6_addr32[2] ^ FUNC_1(0x0000ffff))) == 0UL));
}
