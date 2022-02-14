
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int rtx ;
typedef int HOST_WIDE_INT ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (scalar_t__,int) ;

__attribute__((used)) static rtx
FUNC_8 (tree VAR_3, rtx VAR_4)
{
  HOST_WIDE_INT VAR_5;

  if (! VAR_4)
    return VAR_2;

  VAR_5 = FUNC_2 (VAR_4);
  do
    {
      tree VAR_6 = FUNC_5 (VAR_3);
      tree VAR_7 = FUNC_4 (VAR_3, 1);

      if (! FUNC_6 (VAR_6, 1))
 return VAR_2;
      VAR_5 += (FUNC_7 (VAR_6, 1)
    + (FUNC_7 (FUNC_0 (VAR_7), 1)
       / VAR_0));

      VAR_3 = FUNC_4 (VAR_3, 0);
    }
  while (VAR_3 && FUNC_3 (VAR_3) == VAR_1);

  return FUNC_1 (VAR_5);
}
