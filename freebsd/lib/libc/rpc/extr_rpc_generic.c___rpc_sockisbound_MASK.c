
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {char* sun_path; } ;
struct sockaddr_storage {int ss_family; } ;
struct sockaddr_in6 {int sin6_port; } ;
struct sockaddr_in {int sin_port; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;





 scalar_t__ FUNC_0 (int,struct sockaddr*,int*) ;

int
FUNC_1(int VAR_0)
{
 struct sockaddr_storage VAR_1;
 socklen_t VAR_2;

 VAR_2 = sizeof (struct sockaddr_storage);
 if (FUNC_0(VAR_0, (struct sockaddr *)(void *)&VAR_1, &VAR_2) < 0)
  return 0;

 switch (VAR_1.ss_family) {
  case 130:
   return (((struct sockaddr_in *)
       (void *)&VAR_1)->sin_port != 0);





  case 128:

   return (((struct sockaddr_un *)
       (void *)&VAR_1)->sun_path[0] != '\0');
  default:
   break;
 }

 return 0;
}
