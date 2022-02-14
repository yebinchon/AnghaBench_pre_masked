
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rad_handle {int dummy; } ;
struct in6_addr {int s6_addr; } ;


 int FUNC_0 (struct rad_handle*,int,int *,int) ;

int
FUNC_1(struct rad_handle *VAR_0, int VAR_1, struct in6_addr VAR_2)
{

 return FUNC_0(VAR_0, VAR_1, &VAR_2.s6_addr, sizeof VAR_2.s6_addr);
}
