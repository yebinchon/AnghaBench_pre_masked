
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t FUNC_0 (size_t) ;
 size_t VAR_0 ;

size_t FUNC_1(size_t VAR_1)
{
 if ((VAR_1 & (VAR_1 - 1)) == 0)
  return VAR_1;
 else if (VAR_1 > VAR_0)
  return FUNC_0(VAR_1);
 else {
  size_t VAR_2 = 4;

  while (VAR_2 < VAR_1)
   VAR_2 <<= 1;

  return VAR_2;
 }
 return 0;
}
