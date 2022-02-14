
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fix {scalar_t__ fx_r_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

int
FUNC_0 (struct fix *VAR_6)
{
  int VAR_7 = 0;

  if (VAR_6->fx_r_type == VAR_5
      || VAR_6->fx_r_type == VAR_4
      || VAR_6->fx_r_type == VAR_3
      || VAR_6->fx_r_type == VAR_2
      || VAR_6->fx_r_type == VAR_1
      || VAR_6->fx_r_type == VAR_0)
    {
      VAR_7 = 1;
    }

  return VAR_7;
}
