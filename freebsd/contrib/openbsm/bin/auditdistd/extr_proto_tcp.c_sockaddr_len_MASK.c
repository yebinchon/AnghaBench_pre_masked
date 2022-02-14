
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_storage {int ss_len; int ss_family; } ;
struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
typedef int socklen_t ;




 int FUNC_0 (char*,int) ;

__attribute__((used)) static socklen_t
FUNC_1(const struct sockaddr_storage *VAR_0)
{




 switch (VAR_0->ss_family) {
 case 129:
  return (sizeof(struct sockaddr_in));
 case 128:
  return (sizeof(struct sockaddr_in6));
 default:
  FUNC_0("Unexpected family %hhu.", VAR_0->ss_family);
 }

}
