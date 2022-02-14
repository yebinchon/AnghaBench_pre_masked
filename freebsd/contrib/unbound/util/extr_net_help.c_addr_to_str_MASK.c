
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {int sin_addr; scalar_t__ sin_family; } ;
typedef int socklen_t ;


 scalar_t__ FUNC_0 (struct sockaddr_storage*,int ) ;
 scalar_t__ FUNC_1 (int,void*,char*,int ) ;
 int FUNC_2 (char*,size_t,char*) ;

void
FUNC_3(struct sockaddr_storage* VAR_0, socklen_t VAR_1,
 char* VAR_2, size_t VAR_3)
{
 int VAR_4 = (int)((struct sockaddr_in*)VAR_0)->sin_family;
 void* VAR_5 = &((struct sockaddr_in*)VAR_0)->sin_addr;
 if(FUNC_0(VAR_0, VAR_1))
  VAR_5 = &((struct sockaddr_in6*)VAR_0)->sin6_addr;
 if(FUNC_1(VAR_4, VAR_5, VAR_2, (socklen_t)VAR_3) == 0) {
  FUNC_2(VAR_2, VAR_3, "(inet_ntop_error)");
 }
}
