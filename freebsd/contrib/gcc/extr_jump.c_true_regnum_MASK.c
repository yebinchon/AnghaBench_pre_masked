
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__* VAR_2 ;
 scalar_t__ FUNC_6 (int,int ,int ,int ) ;
 int FUNC_7 (int,int ,int ,int ) ;

int
FUNC_8 (rtx VAR_3)
{
  if (FUNC_3 (VAR_3))
    {
      if (FUNC_2 (VAR_3) >= VAR_0 && VAR_2[FUNC_2 (VAR_3)] >= 0)
 return VAR_2[FUNC_2 (VAR_3)];
      return FUNC_2 (VAR_3);
    }
  if (FUNC_0 (VAR_3) == VAR_1)
    {
      int VAR_4 = FUNC_8 (FUNC_5 (VAR_3));
      if (VAR_4 >= 0
   && VAR_4 < VAR_0
   && FUNC_6 (FUNC_2 (FUNC_5 (VAR_3)),
         FUNC_1 (FUNC_5 (VAR_3)),
         FUNC_4 (VAR_3), FUNC_1 (VAR_3)))
 return VAR_4 + FUNC_7 (FUNC_2 (FUNC_5 (VAR_3)),
        FUNC_1 (FUNC_5 (VAR_3)),
        FUNC_4 (VAR_3), FUNC_1 (VAR_3));
    }
  return -1;
}
