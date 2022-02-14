
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int) ;
 unsigned int** VAR_4 ;
 scalar_t__ FUNC_8 (unsigned int,unsigned int,int ) ;

int
FUNC_9 (unsigned int VAR_5, rtx VAR_6, enum machine_mode VAR_7,
     int VAR_8)
{
  unsigned int VAR_9, VAR_10;


  FUNC_7 (VAR_5 < VAR_1);

  VAR_9 = VAR_4[VAR_5][VAR_7];
  VAR_10 = VAR_5 + VAR_9;

  if ((FUNC_0 (FUNC_1 (VAR_6)) == VAR_0
       || (VAR_8 == 1 && FUNC_0 (FUNC_1 (VAR_6)) == VAR_3))
      && FUNC_3 (FUNC_4 (FUNC_1 (VAR_6), 0)))
    {
      unsigned int VAR_11 = FUNC_2 (FUNC_4 (FUNC_1 (VAR_6), 0));

      return VAR_11 >= VAR_5 && VAR_11 < VAR_10;
    }

  if (VAR_8 == 2 && FUNC_8 (VAR_5, VAR_10, VAR_6))
    return 1;

  if (FUNC_0 (FUNC_1 (VAR_6)) == VAR_2)
    {
      int VAR_12 = FUNC_6 (FUNC_1 (VAR_6), 0) - 1;

      for (; VAR_12 >= 0; VAR_12--)
 {
   rtx VAR_13 = FUNC_5 (FUNC_1 (VAR_6), 0, VAR_12);
   if ((FUNC_0 (VAR_13) == VAR_0
        || (VAR_8 == 1 && FUNC_0 (FUNC_1 (VAR_6)) == VAR_3))
       && FUNC_3 (FUNC_4 (VAR_13, 0)))
     {
       unsigned int VAR_14 = FUNC_2 (FUNC_4 (VAR_13, 0));

       if (VAR_14 >= VAR_5 && VAR_14 < VAR_10)
  return 1;
     }
   if (VAR_8 == 2
       && FUNC_8 (VAR_5, VAR_10, VAR_13))
     return 1;
 }
    }

  return 0;
}
