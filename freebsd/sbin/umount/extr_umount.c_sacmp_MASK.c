
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_scope_id; int sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int sa_family; } ;




 int FUNC_0 (void*,void*,int) ;

int
FUNC_1(void *VAR_0, void *VAR_1)
{
 void *VAR_2, *VAR_3;
 int VAR_4;

 if (((struct sockaddr *)VAR_0)->sa_family !=
     ((struct sockaddr *)VAR_1)->sa_family)
  return (1);

 switch (((struct sockaddr *)VAR_0)->sa_family) {
 case 129:
  VAR_2 = &((struct sockaddr_in *)VAR_0)->sin_addr;
  VAR_3 = &((struct sockaddr_in *)VAR_1)->sin_addr;
  VAR_4 = 4;
  break;
 case 128:
  VAR_2 = &((struct sockaddr_in6 *)VAR_0)->sin6_addr;
  VAR_3 = &((struct sockaddr_in6 *)VAR_1)->sin6_addr;
  VAR_4 = 16;
  if (((struct sockaddr_in6 *)VAR_0)->sin6_scope_id !=
      ((struct sockaddr_in6 *)VAR_1)->sin6_scope_id)
   return (1);
  break;
 default:
  return (1);
 }

 return FUNC_0(VAR_2, VAR_3, VAR_4);
}
