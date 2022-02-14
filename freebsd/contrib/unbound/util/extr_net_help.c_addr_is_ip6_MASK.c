
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {scalar_t__ sin6_family; } ;
typedef scalar_t__ socklen_t ;


 scalar_t__ VAR_0 ;

int
FUNC_0(struct sockaddr_storage* VAR_1, socklen_t VAR_2)
{
 if(VAR_2 == (socklen_t)sizeof(struct sockaddr_in6) &&
  ((struct sockaddr_in6*)VAR_1)->sin6_family == VAR_0)
  return 1;
 else return 0;
}
