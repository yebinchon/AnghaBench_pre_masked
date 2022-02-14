
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_port; } ;
struct sockaddr_in {int sin_port; } ;
struct sockaddr {int sa_family; } ;




 int VAR_0 ;
 int FUNC_0 (int ) ;

int FUNC_1(struct sockaddr *VAR_1)
{
 switch (VAR_1->sa_family) {
 case 129:
  return FUNC_0(((struct sockaddr_in *)VAR_1)->sin_port)
   < VAR_0;
 case 128:
  return FUNC_0(((struct sockaddr_in6 *)VAR_1)->sin6_port)
   < VAR_0;
 default:
  return 0;
 }
}
