
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifaddrmsg {int dummy; } ;
struct ifa_cacheinfo {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline int FUNC_2(void)
{
 return FUNC_0(sizeof(struct ifaddrmsg))
        + FUNC_1(16)
        + FUNC_1(sizeof(struct ifa_cacheinfo));
}
