
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_addr; } ;
struct sockaddr_in {scalar_t__ sin_family; int sin_addr; } ;
struct ip_list {scalar_t__ len; int addr; } ;
typedef scalar_t__ socklen_t ;
typedef int out ;


 scalar_t__ FUNC_0 (int,void*,char*,scalar_t__) ;
 int FUNC_1 (char*,char const*,...) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_2(const char* VAR_1, struct ip_list* VAR_2)
{
 if(VAR_0) {
  char VAR_3[100];
  void* VAR_4 = &((struct sockaddr_in*)&VAR_2->addr)->sin_addr;
  if(VAR_2->len != (socklen_t)sizeof(struct sockaddr_in))
   VAR_4 = &((struct sockaddr_in6*)&VAR_2->addr)->sin6_addr;

  if(FUNC_0((int)((struct sockaddr_in*)&VAR_2->addr)->sin_family,
   VAR_4, VAR_3, (socklen_t)sizeof(VAR_3))==0)
   FUNC_1("%s (inet_ntop error)\n", VAR_1);
  else FUNC_1("%s %s\n", VAR_1, VAR_3);
 }
}
