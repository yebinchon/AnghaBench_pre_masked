
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_ext {int ip6e_len; } ;
typedef int socklen_t ;



int
FUNC_0(void *VAR_0, socklen_t VAR_1)
{
 struct ip6_ext *VAR_2 = (struct ip6_ext *)VAR_0;

 if (VAR_2) {
  if (VAR_1 <= 0 || (VAR_1 % 8))
   return(-1);
  VAR_2->ip6e_len = (VAR_1 >> 3) - 1;
 }

 return(2);
}
