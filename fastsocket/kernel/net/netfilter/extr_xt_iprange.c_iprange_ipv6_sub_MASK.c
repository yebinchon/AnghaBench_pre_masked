
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int * s6_addr32; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static inline int
FUNC_1(const struct in6_addr *VAR_0, const struct in6_addr *VAR_1)
{
 unsigned int VAR_2;
 int VAR_3;

 for (VAR_2 = 0; VAR_2 < 4; ++VAR_2) {
  VAR_3 = FUNC_0(VAR_0->s6_addr32[VAR_2]) - FUNC_0(VAR_1->s6_addr32[VAR_2]);
  if (VAR_3 != 0)
   return VAR_3;
 }

 return 0;
}
