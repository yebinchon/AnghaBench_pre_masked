
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef int basic_block ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (scalar_t__) ;

__attribute__((used)) static bool
FUNC_10 (basic_block VAR_0, int VAR_1)
{
  int VAR_2 = 0;
  rtx VAR_3 = FUNC_1 (VAR_0);

  while (1)
    {
      if (FUNC_4 (VAR_3))
 {
   int VAR_4 = FUNC_8 (FUNC_5 (VAR_3));
   if (VAR_4 == 0)
     return 0;
   VAR_2 += VAR_4;
   if (VAR_2 >= VAR_1)
     return 0;
 }
      else if (FUNC_2 (VAR_3))
 return 0;

      if (VAR_3 == FUNC_0 (VAR_0))
 break;
      VAR_3 = FUNC_3 (VAR_3);
    }

  return 1;
}
