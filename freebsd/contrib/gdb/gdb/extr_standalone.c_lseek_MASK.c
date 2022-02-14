
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

FUNC_0 (int VAR_8, int VAR_9)
{

  if (VAR_8 != VAR_4)
    {
      VAR_2 = VAR_0;
      return -1;
    }

  if (VAR_9 < 0 || VAR_9 > VAR_7)
    {
      VAR_2 = VAR_1;
      return -1;
    }

  VAR_6 = VAR_3 + VAR_9;
  VAR_5 = VAR_7 - VAR_9;
}
