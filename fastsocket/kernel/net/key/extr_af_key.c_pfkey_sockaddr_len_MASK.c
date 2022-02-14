
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int dummy; } ;
struct sockaddr_in {int dummy; } ;
typedef int sa_family_t ;





__attribute__((used)) static inline int FUNC_0(sa_family_t VAR_0)
{
 switch (VAR_0) {
 case 129:
  return sizeof(struct sockaddr_in);




 }
 return 0;
}
