
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rtx ;
struct TYPE_2__ {int death; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int ,int) ;
 int FUNC_9 (int,int ,int ) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int,int ,int,int,int) ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_12 (int ,int ) ;
 size_t* VAR_5 ;
 int FUNC_13 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_14 (rtx VAR_8, int VAR_9)
{
  int VAR_10 = FUNC_3 (VAR_8);
  if (FUNC_0 (FUNC_2 (VAR_6)) == VAR_1
      && FUNC_10 (VAR_6))
    {
      int VAR_11;
      for (VAR_11 = FUNC_7 (FUNC_2 (VAR_6), 0) - 1; VAR_11 >= 0; VAR_11--)
 {
   rtx VAR_12 = FUNC_6 (FUNC_2 (VAR_6), 0, VAR_11);
   if (FUNC_0 (VAR_12) == VAR_3
       && !FUNC_4 (FUNC_5 (VAR_12))
       && !FUNC_13 (VAR_8, FUNC_5 (VAR_12))
       && FUNC_12 (VAR_8, FUNC_5 (VAR_12)))
     VAR_9 = 1;
 }
    }




  if (! VAR_9 && FUNC_8 (VAR_6, VAR_2, VAR_10))
    VAR_9 = 1;

  if (VAR_10 < VAR_0)
    {
      FUNC_9 (VAR_10, FUNC_1 (VAR_8), 0);




      if (VAR_9)
 FUNC_11 (VAR_10, FUNC_1 (VAR_8), 1,
   2 * VAR_7, 2 * VAR_7 + 1);
    }

  else if (VAR_5[VAR_10] >= 0)
    VAR_4[VAR_5[VAR_10]].death = 2 * VAR_7 + VAR_9;
}
