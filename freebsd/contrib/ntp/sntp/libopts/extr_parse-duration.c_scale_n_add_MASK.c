
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static time_t
FUNC_0 (time_t VAR_5, time_t VAR_6, int VAR_7)
{
  if (VAR_5 == VAR_0)
    {
      if (VAR_4 == 0)
        VAR_4 = VAR_1;
      return VAR_0;
    }

  if (VAR_6 > VAR_3 / VAR_7)
    {
      VAR_4 = VAR_2;
      return VAR_0;
    }

  VAR_6 *= VAR_7;
  if (VAR_5 > VAR_3 - VAR_6)
    {
      VAR_4 = VAR_2;
      return VAR_0;
    }

  return VAR_5 + VAR_6;
}
