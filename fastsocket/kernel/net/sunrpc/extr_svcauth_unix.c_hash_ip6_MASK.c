
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int * s6_addr32; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline int FUNC_1(struct in6_addr VAR_0)
{
 return (FUNC_0(VAR_0.s6_addr32[0]) ^
  FUNC_0(VAR_0.s6_addr32[1]) ^
  FUNC_0(VAR_0.s6_addr32[2]) ^
  FUNC_0(VAR_0.s6_addr32[3]));
}
