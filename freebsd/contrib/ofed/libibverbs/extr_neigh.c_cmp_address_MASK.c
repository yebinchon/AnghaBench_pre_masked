
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int s6_addr; } ;
struct sockaddr_in6 {TYPE_2__ sin6_addr; } ;
struct TYPE_3__ {int s_addr; } ;
struct sockaddr_in {TYPE_1__ sin_addr; } ;
struct sockaddr {int sa_family; } ;




 int FUNC_0 (int ,int ,int) ;

__attribute__((used)) static bool FUNC_1(const struct sockaddr *VAR_0,
   const struct sockaddr *VAR_1)
{
 if (VAR_0->sa_family != VAR_1->sa_family)
  return 0;

 switch (VAR_0->sa_family) {
 case 129:
  return ((struct sockaddr_in *)VAR_0)->sin_addr.s_addr ==
         ((struct sockaddr_in *)VAR_1)->sin_addr.s_addr;
 case 128:
  return !FUNC_0(
   ((struct sockaddr_in6 *)VAR_0)->sin6_addr.s6_addr,
   ((struct sockaddr_in6 *)VAR_1)->sin6_addr.s6_addr,
   sizeof(((struct sockaddr_in6 *)VAR_0)->sin6_addr.s6_addr));
 default:
  return 0;
 }
}
