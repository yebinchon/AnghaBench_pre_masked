
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int8_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int
FUNC_0(u_int8_t *VAR_1, u_int8_t *VAR_2)
{
 int VAR_3;

 if (*VAR_1 == VAR_0)
  VAR_3 = 1;
 else {

  if (VAR_1 + 2 > VAR_2)
   return(0);
  VAR_3 = *(VAR_1 + 1) + 2;
 }
 if (VAR_1 + VAR_3 <= VAR_2)
  return(VAR_3);

 return(0);
}
