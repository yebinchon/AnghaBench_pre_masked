
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ) ;
 unsigned int** VAR_4 ;

__attribute__((used)) static int
FUNC_8 (unsigned int VAR_5, unsigned int VAR_6, rtx VAR_7)
{
  if (FUNC_0 (VAR_7) == VAR_2 || FUNC_0 (VAR_7) == VAR_0)
    {
      rtx VAR_8 = FUNC_4 (VAR_7);

      while (FUNC_0 (VAR_8) == VAR_3)
 VAR_8 = FUNC_5 (VAR_8);
      if (FUNC_3 (VAR_8))
 {
   unsigned int VAR_9 = FUNC_2 (VAR_8);


   if (VAR_9 < VAR_6
       && VAR_9 + VAR_4[VAR_9][FUNC_1 (VAR_8)] > VAR_5)
     return 1;
 }
    }
  else if (FUNC_0 (VAR_7) == VAR_1)
    {
      int VAR_10 = FUNC_7 (VAR_7, 0) - 1;

      for (; VAR_10 >= 0; VAR_10--)
 if (FUNC_8 (VAR_5, VAR_6, FUNC_6 (VAR_7, 0, VAR_10)))
   return 1;
    }

  return 0;
}
