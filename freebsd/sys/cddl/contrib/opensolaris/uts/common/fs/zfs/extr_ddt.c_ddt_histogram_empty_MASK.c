
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int ddt_histogram_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;

boolean_t
FUNC_0(const ddt_histogram_t *VAR_2)
{
 const uint64_t *VAR_3 = (const uint64_t *)VAR_2;
 const uint64_t *VAR_4 = (const uint64_t *)(VAR_2 + 1);

 while (VAR_3 < VAR_4)
  if (*VAR_3++ != 0)
   return (VAR_0);

 return (VAR_1);
}
