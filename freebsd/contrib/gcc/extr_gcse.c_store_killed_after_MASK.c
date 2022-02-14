
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef int basic_block ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_3 (scalar_t__,int*) ;

__attribute__((used)) static bool
FUNC_4 (rtx VAR_1, rtx VAR_2, rtx VAR_3, basic_block VAR_4,
      int *VAR_5, rtx *VAR_6)
{
  rtx VAR_7 = FUNC_0 (VAR_4), VAR_8;

  if (!FUNC_3 (VAR_2, VAR_5))
    {

      if (VAR_6)
 *VAR_6 = VAR_0;
      return 1;
    }


  for (VAR_8 = VAR_7; VAR_8 != FUNC_1 (VAR_3); VAR_8 = FUNC_1 (VAR_8))
    if (FUNC_2 (VAR_1, VAR_2, VAR_8, 0))
      {
 if (VAR_6)
   *VAR_6 = VAR_8;
 return 1;
      }

  return 0;
}
