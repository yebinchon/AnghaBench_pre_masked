
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_0 (void)
{
  if (VAR_6 == VAR_1)
    return 0;
  if (VAR_6 == VAR_4
      || VAR_6 == VAR_5)
    return 4;
  if ((1 << VAR_6) &
      ((1 << VAR_3) | (1 << VAR_0) |
       (1 << VAR_2)))
    return 3;
  return 0;
}
