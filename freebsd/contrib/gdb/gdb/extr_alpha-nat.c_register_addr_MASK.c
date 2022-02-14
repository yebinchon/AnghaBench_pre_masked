
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ CORE_ADDR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;

CORE_ADDR
FUNC_0 (int VAR_7, CORE_ADDR VAR_8)
{
  if (VAR_7 == VAR_6)
    return VAR_5;
  if (VAR_7 == VAR_1)
    return VAR_0;
  if (VAR_7 < VAR_2)
    return VAR_4 + VAR_7;
  else
    return VAR_3 + VAR_7 - VAR_2;
}
