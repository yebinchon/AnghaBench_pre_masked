
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ a6; int a4; } ;
typedef TYPE_2__ xfrm_address_t ;
struct sockaddr_in6 {int sin6_family; int sin6_scope_id; int sin6_addr; int sin6_flowinfo; void* sin6_port; } ;
struct TYPE_4__ {int s_addr; } ;
struct sockaddr_in {int sin_family; int sin_zero; TYPE_1__ sin_addr; void* sin_port; } ;
struct sockaddr {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef void* __be16 ;




 int FUNC_0 (int *,struct in6_addr*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static unsigned int FUNC_2(xfrm_address_t *VAR_0, __be16 VAR_1,
           struct sockaddr *VAR_2,
           unsigned short VAR_3)
{
 switch (VAR_3) {
 case 129:
     {
  struct sockaddr_in *VAR_4 = (struct sockaddr_in *)VAR_2;
  VAR_4->sin_family = 129;
  VAR_4->sin_port = VAR_1;
  VAR_4->sin_addr.s_addr = VAR_0->a4;
  FUNC_1(VAR_4->sin_zero, 0, sizeof(VAR_4->sin_zero));
  return 32;
     }
 }
 return 0;
}
