
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;

int
FUNC_0 (int VAR_13, int VAR_14)
{
  if (VAR_11)
    {
      int VAR_15 = VAR_8;
      if (!VAR_10
   || VAR_12 == VAR_3
   || (VAR_12 == VAR_1 && (VAR_14 || VAR_13)))
 VAR_15 = VAR_7;
      return (VAR_14 ? VAR_5 : 0) | VAR_6 | VAR_15;
    }
  if (VAR_12 == VAR_2
      || (VAR_12 == VAR_0 && VAR_13))
    return VAR_9;
  return VAR_4;
}
