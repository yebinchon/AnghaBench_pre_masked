
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int dummy; } ;
struct sockaddr_in {int sin_addr; scalar_t__ sin_family; } ;
typedef scalar_t__ socklen_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*,char*,int) ;

int FUNC_1(struct sockaddr_storage* VAR_1, socklen_t VAR_2)
{
 int VAR_3 = (int)((struct sockaddr_in*)VAR_1)->sin_family;
 void* VAR_4 = &((struct sockaddr_in*)VAR_1)->sin_addr;
 return VAR_3 == VAR_0 && VAR_2>=(socklen_t)sizeof(struct sockaddr_in)
  && FUNC_0(VAR_4, "\377\377\377\377", 4) == 0;
}
