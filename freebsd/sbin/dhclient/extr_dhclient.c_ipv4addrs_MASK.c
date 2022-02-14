
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct in_addr {int dummy; } ;


 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char const*,struct in_addr*) ;
 scalar_t__ FUNC_2 (char const) ;

int
FUNC_3(const char * VAR_0)
{
 struct in_addr VAR_1;
 int VAR_2 = 0;

 while (FUNC_1(VAR_0, &VAR_1) == 1){
  VAR_2++;
  while (FUNC_2(*VAR_0) || FUNC_0(*VAR_0))
   VAR_0++;
  if (*VAR_0 == '\0')
   return (VAR_2);
  while (*VAR_0 == ' ')
   VAR_0++;
 }
 return (0);
}
