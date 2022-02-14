
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {void* sin6_port; } ;
struct sockaddr_in {void* sin_port; } ;
struct sockaddr {int dummy; } ;




 void* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(int VAR_0, int VAR_1, struct sockaddr *VAR_2)
{
 switch (VAR_0) {
 case 129:
  ((struct sockaddr_in *)VAR_2)->sin_port = FUNC_0(VAR_1);
  break;





 }
}
