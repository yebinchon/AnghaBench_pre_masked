
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static bool
FUNC_5 (rtx VAR_3)
{
  if (!VAR_3 || VAR_3 == VAR_0)
    return 0;

  if (FUNC_0 (VAR_3) == VAR_2)
    return FUNC_4 (FUNC_1 (VAR_3));

  if (FUNC_0 (VAR_3) == VAR_1)
    {
      int VAR_4;

      for (VAR_4 = 0; VAR_4 < FUNC_3 (VAR_3, 0); VAR_4++)
 if (FUNC_5 (FUNC_2 (VAR_3, 0, VAR_4)))
   return 1;
    }

  return 0;
}
