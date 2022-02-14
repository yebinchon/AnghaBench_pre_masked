
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in6_addr {int s6_addr; } ;


 int FUNC_0 (int *,void const*,int) ;

struct in6_addr
FUNC_1(const void *VAR_0)
{
 struct in6_addr VAR_1;

 FUNC_0(&VAR_1.s6_addr, VAR_0, sizeof VAR_1.s6_addr);
 return VAR_1;
}
