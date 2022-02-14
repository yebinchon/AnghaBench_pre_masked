
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int sin6_addr; } ;
typedef int socklen_t ;


 int FUNC_0 (struct sockaddr_storage*,int ) ;
 scalar_t__ FUNC_1 (int*,int const*,int) ;

int
FUNC_2(struct sockaddr_storage* VAR_0, socklen_t VAR_1)
{

 const uint8_t VAR_2[16] =
  {0,0,0,0, 0,0,0,0, 0,0,0xff,0xff, 0,0,0,0};
 uint8_t* VAR_3;
 if(!FUNC_0(VAR_0, VAR_1))
  return 0;

 VAR_3 = (uint8_t*)&((struct sockaddr_in6*)VAR_0)->sin6_addr;
 return (FUNC_1(VAR_3, VAR_2, 12) == 0);
}
