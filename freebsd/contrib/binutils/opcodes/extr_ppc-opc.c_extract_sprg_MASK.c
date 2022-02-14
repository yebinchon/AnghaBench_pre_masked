
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static long
FUNC_0 (unsigned long VAR_2,
       int VAR_3,
       int *VAR_4)
{
  unsigned long VAR_5 = (VAR_2 >> 16) & 0x1f;



  if (VAR_5 <= 3
      || (VAR_5 < 0x10 && (VAR_2 & 0x100) != 0)
      || (VAR_5 - 0x10 > 3
   && (VAR_3 & (VAR_1 | VAR_0)) == 0))
    *VAR_4 = 1;
  return VAR_5 & 7;
}
