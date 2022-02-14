
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_5__ {int* s6_addr; } ;
struct sockaddr_in6 {TYPE_1__ sin6_addr; } ;
struct sockaddr_in {int sin_addr; } ;
struct sockaddr {int sa_family; } ;




 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_4(struct sockaddr *VAR_2)
{



 struct sockaddr_in *VAR_3;

 switch(VAR_2->sa_family) {
 case 129:



  VAR_3 = (struct sockaddr_in *)VAR_2;

  if (((u_char *)&VAR_3->sin_addr)[0] == 169 &&
      ((u_char *)&VAR_3->sin_addr)[1] == 254)
   return(2);

  if (((u_char *)&VAR_3->sin_addr)[0] == 10 ||
      (((u_char *)&VAR_3->sin_addr)[0] == 172 &&
       (((u_char *)&VAR_3->sin_addr)[1] & 0xf0) == 16) ||
      (((u_char *)&VAR_3->sin_addr)[0] == 192 &&
       ((u_char *)&VAR_3->sin_addr)[1] == 168))
   return(14);

  if (((u_char *)&VAR_3->sin_addr)[0] == 127)
   return(2);
  return(14);
  break;
 default:
  VAR_1 = VAR_0;
  return(-1);
 }
}
