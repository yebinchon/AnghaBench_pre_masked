
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int a6; int a4; } ;
typedef TYPE_2__ xfrm_address_t ;
struct sockaddr_in6 {int sin6_addr; } ;
struct TYPE_4__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int sa_family; } ;
struct in6_addr {int dummy; } ;




 int FUNC_0 (int ,int *,int) ;

__attribute__((used)) static
int FUNC_1(const struct sockaddr *VAR_0, xfrm_address_t *VAR_1)
{
 switch (VAR_0->sa_family) {
 case 129:
  VAR_1->a4 =
   ((struct sockaddr_in *)VAR_0)->sin_addr.s_addr;
  return 129;







 }
 return 0;
}
