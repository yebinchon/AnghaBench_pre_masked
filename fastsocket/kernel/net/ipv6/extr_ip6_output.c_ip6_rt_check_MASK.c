
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int dummy; } ;
struct rt6key {int plen; struct in6_addr addr; } ;


 int FUNC_0 (struct in6_addr*,struct in6_addr*) ;

__attribute__((used)) static inline int FUNC_1(struct rt6key *VAR_0,
          struct in6_addr *VAR_1,
          struct in6_addr *VAR_2)
{
 return ((VAR_0->plen != 128 || !FUNC_0(VAR_1, &VAR_0->addr)) &&
  (VAR_2 == ((void*)0) || !FUNC_0(VAR_1, VAR_2)));
}
