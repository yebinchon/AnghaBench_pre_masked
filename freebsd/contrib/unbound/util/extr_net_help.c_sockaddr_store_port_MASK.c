
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {void* sin6_port; } ;
struct sockaddr_in {void* sin_port; } ;
typedef int socklen_t ;
typedef void* in_port_t ;


 scalar_t__ FUNC_0 (struct sockaddr_storage*,int ) ;
 scalar_t__ FUNC_1 (int ) ;

void
FUNC_2(struct sockaddr_storage* VAR_0, socklen_t VAR_1, int VAR_2)
{
 if(FUNC_0(VAR_0, VAR_1)) {
  struct sockaddr_in6* VAR_3 = (struct sockaddr_in6*)VAR_0;
  VAR_3->sin6_port = (in_port_t)FUNC_1((uint16_t)VAR_2);
 } else {
  struct sockaddr_in* VAR_4 = (struct sockaddr_in*)VAR_0;
  VAR_4->sin_port = (in_port_t)FUNC_1((uint16_t)VAR_2);
 }
}
