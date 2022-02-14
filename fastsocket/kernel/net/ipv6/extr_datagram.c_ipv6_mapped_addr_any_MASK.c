
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {scalar_t__* s6_addr32; } ;


 scalar_t__ FUNC_0 (struct in6_addr const*) ;

__attribute__((used)) static inline int FUNC_1(const struct in6_addr *VAR_0)
{
 return (FUNC_0(VAR_0) && (VAR_0->s6_addr32[3] == 0));
}
