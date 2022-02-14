
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; scalar_t__ sin_family; } ;
typedef scalar_t__ socklen_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*,char*,int) ;

int FUNC_1(struct sockaddr_storage* VAR_2, socklen_t VAR_3)
{
 int VAR_4 = (int)((struct sockaddr_in*)VAR_2)->sin_family;
 void* VAR_5 = &((struct sockaddr_in*)VAR_2)->sin_addr;
 void* VAR_6 = &((struct sockaddr_in6*)VAR_2)->sin6_addr;
 if(VAR_4 == VAR_0 && VAR_3>=(socklen_t)sizeof(struct sockaddr_in)
  && FUNC_0(VAR_5, "\000\000\000\000", 4) == 0)
  return 1;
 else if(VAR_4==VAR_1 && VAR_3>=(socklen_t)sizeof(struct sockaddr_in6)
  && FUNC_0(VAR_6, "\000\000\000\000\000\000\000\000"
  "\000\000\000\000\000\000\000\000", 16) == 0)
  return 1;
 return 0;
}
