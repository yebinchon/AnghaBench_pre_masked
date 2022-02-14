
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__,int ,int) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__,unsigned int) ;

__attribute__((used)) static bool
FUNC_5 (rtx VAR_2, unsigned int VAR_3)
{
  if (FUNC_0 (VAR_2) == VAR_1)
    {



      int VAR_4;

      for (VAR_4 = FUNC_3 (VAR_2, 0) - 1; VAR_4 >= 0; VAR_4--)
 {
   rtx VAR_5 = FUNC_1 (FUNC_2 (VAR_2, 0, VAR_4), 0);
   if (VAR_5 != VAR_0
       && FUNC_4 (VAR_5, VAR_3))
     return 1;
 }

      return 0;
    }
  else
    return FUNC_4 (VAR_2, VAR_3);
}
