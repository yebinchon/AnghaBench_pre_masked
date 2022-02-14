
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__) ;
 char const* FUNC_4 (int *,int ) ;

const char *
FUNC_5 (rtx VAR_2, rtx *VAR_3)
{
  if (FUNC_1 (VAR_3[1])
      && FUNC_3 (VAR_2, VAR_1, FUNC_0 (VAR_3[1])))
    {
      if (FUNC_0 (VAR_3[0]) == VAR_0)
 return FUNC_4 (VAR_3, 0);
      return "fstp\t%y0";
    }
  if (FUNC_2 (VAR_3[0]))
    return "fld%z1\t%y1";
  return "fst\t%y0";
}
