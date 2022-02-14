
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
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  VAR_9 = VAR_6;


  if (VAR_10 != VAR_0)
    {

      if (!VAR_6)
        VAR_9 = VAR_8;
      return;
    }


  if (VAR_6 && (VAR_7 & VAR_4))
    VAR_10 = VAR_1;
  else if (VAR_6 && (VAR_7 & VAR_5))
    VAR_10 = VAR_3;
  else
    VAR_10 = VAR_2;

  FUNC_0 (VAR_6 || VAR_10 == VAR_2);
}
