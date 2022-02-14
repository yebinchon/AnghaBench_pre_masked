
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int dummy; } ;
struct ifla_cacheinfo {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (int) ;

__attribute__((used)) static inline size_t FUNC_1(void)
{
 return FUNC_0(4)
      + FUNC_0(sizeof(struct ifla_cacheinfo))
      + FUNC_0(VAR_0 * 4)
      + FUNC_0(VAR_2 * 8)
      + FUNC_0(VAR_1 * 8)
      + FUNC_0(sizeof(struct in6_addr));
}
