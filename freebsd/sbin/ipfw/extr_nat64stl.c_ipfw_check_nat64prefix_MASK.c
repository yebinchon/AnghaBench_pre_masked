
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * __u6_addr8; } ;
struct in6_addr {TYPE_1__ __u6_addr; } ;


 int VAR_0 ;
 int FUNC_0 (struct in6_addr const*) ;
 int FUNC_1 (struct in6_addr const*) ;
 int FUNC_2 (struct in6_addr const*) ;
 int FUNC_3 (struct in6_addr const*) ;

int
FUNC_4(const struct in6_addr *VAR_1, int VAR_2)
{

 switch (VAR_2) {
 case 32:
 case 40:
 case 48:
 case 56:
 case 64:

  if (FUNC_3(VAR_1))
   return (VAR_0);

 case 96:

  if (VAR_1->__u6_addr.__u6_addr8[8] != 0)
   return (VAR_0);

  if (FUNC_1(VAR_1) ||
      FUNC_2(VAR_1) ||
      FUNC_0(VAR_1))
   return (VAR_0);
  return (0);
 }
 return (VAR_0);
}
