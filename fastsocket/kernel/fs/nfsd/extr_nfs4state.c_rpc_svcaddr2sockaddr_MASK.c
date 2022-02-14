
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union svc_addr_u {int addr6; int addr; } ;
struct sockaddr_in6 {int sin6_family; int sin6_addr; } ;
struct sockaddr_in {int sin_family; int sin_addr; } ;
struct sockaddr {int dummy; } ;





__attribute__((used)) static void FUNC_0(struct sockaddr *VAR_0, unsigned short VAR_1, union svc_addr_u *VAR_2)
{
 switch (VAR_1) {
 case 129:
  ((struct sockaddr_in *)VAR_0)->sin_family = 129;
  ((struct sockaddr_in *)VAR_0)->sin_addr = VAR_2->addr;
  return;
 case 128:
  ((struct sockaddr_in6 *)VAR_0)->sin6_family = 128;
  ((struct sockaddr_in6 *)VAR_0)->sin6_addr = VAR_2->addr6;
  return;
 }
}
