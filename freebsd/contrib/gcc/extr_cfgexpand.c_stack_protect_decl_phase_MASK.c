
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2 (tree VAR_9)
{
  unsigned int VAR_10 = FUNC_1 (FUNC_0 (VAR_9));
  int VAR_11 = 0;

  if (VAR_10 & VAR_5)
    VAR_8 = 1;

  if (VAR_6 == VAR_0
      || VAR_6 == VAR_1)
    {
      if ((VAR_10 & (VAR_5 | VAR_4))
   && !(VAR_10 & VAR_2))
 VAR_11 = 1;
      else if (VAR_10 & VAR_3)
 VAR_11 = 2;
    }
  else
    VAR_11 = (VAR_10 & VAR_4) != 0;

  if (VAR_11)
    VAR_7 = 1;

  return VAR_11;
}
