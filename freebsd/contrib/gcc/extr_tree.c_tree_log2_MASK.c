
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int) ;

int
FUNC_9 (tree VAR_3)
{
  int VAR_4;
  HOST_WIDE_INT VAR_5, VAR_6;

  FUNC_1 (VAR_3);

  if (FUNC_2 (VAR_3) == VAR_0)
    return FUNC_9 (FUNC_5 (VAR_3));

  VAR_4 = (FUNC_0 (FUNC_6 (VAR_3))
   ? VAR_2 : FUNC_7 (FUNC_6 (VAR_3)));

  VAR_5 = FUNC_3 (VAR_3);
  VAR_6 = FUNC_4 (VAR_3);




  if (VAR_4 == 2 * VAR_1)
    ;
  else if (VAR_4 > VAR_1)
    VAR_5 &= ~((HOST_WIDE_INT) (-1) << (VAR_4 - VAR_1));
  else
    {
      VAR_5 = 0;
      if (VAR_4 < VAR_1)
 VAR_6 &= ~((HOST_WIDE_INT) (-1) << VAR_4);
    }

  return (VAR_5 != 0 ? VAR_1 + FUNC_8 (VAR_5)
   : FUNC_8 (VAR_6));
}
