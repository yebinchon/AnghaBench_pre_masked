
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sockaddr_un {int dummy; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;





 scalar_t__ VAR_0 ;

u_int
FUNC_0(int VAR_1)
{
 switch (VAR_1) {
 case 130:
  return sizeof (struct sockaddr_in);




 case 128:
  return sizeof (struct sockaddr_un);
 default:
  break;
 }
 return ((u_int)VAR_0);
}
