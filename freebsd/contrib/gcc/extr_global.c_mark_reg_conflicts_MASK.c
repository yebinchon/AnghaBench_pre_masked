
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ) ;
 int * VAR_2 ;
 int** VAR_3 ;
 int FUNC_5 (int) ;
 scalar_t__* VAR_4 ;
 int* VAR_5 ;

__attribute__((used)) static void
FUNC_6 (rtx VAR_6)
{
  int VAR_7;

  if (FUNC_0 (VAR_6) == VAR_1)
    VAR_6 = FUNC_4 (VAR_6);

  if (!FUNC_3 (VAR_6))
    return;

  VAR_7 = FUNC_2 (VAR_6);



  if (VAR_7 >= VAR_0)
    {
      if (VAR_4[VAR_7] >= 0)
 FUNC_5 (VAR_7);
    }

  if (VAR_5[VAR_7] >= 0)
    VAR_7 = VAR_5[VAR_7];


  if (VAR_7 < VAR_0 && ! VAR_2[VAR_7])
    {
      int VAR_8 = VAR_7 + VAR_3[VAR_7][FUNC_1 (VAR_6)];
      while (VAR_7 < VAR_8)
 {
   FUNC_5 (VAR_7);
   VAR_7++;
 }
    }
}
