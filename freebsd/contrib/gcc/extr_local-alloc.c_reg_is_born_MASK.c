
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
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int,int ,int ,int) ;
 int FUNC_6 (int,int ,int) ;
 int FUNC_7 (int,int ,int,int,int) ;
 TYPE_1__* VAR_2 ;
 int* VAR_3 ;
 int FUNC_8 (int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_9 (rtx VAR_5, int VAR_6)
{
  int VAR_7;

  if (FUNC_0 (VAR_5) == VAR_1)
    {
      VAR_7 = FUNC_3 (FUNC_4 (VAR_5));
      if (VAR_7 < VAR_0)
 VAR_7 = FUNC_8 (VAR_5);
    }
  else
    VAR_7 = FUNC_3 (VAR_5);

  if (VAR_7 < VAR_0)
    {
      FUNC_6 (VAR_7, FUNC_1 (VAR_5), 1);



      if (VAR_6 < 2 * VAR_4)
 FUNC_7 (VAR_7, FUNC_1 (VAR_5), 1, VAR_6, 2 * VAR_4);
    }
  else
    {
      if (VAR_3[VAR_7] == -2)
 FUNC_5 (VAR_7, FUNC_1 (VAR_5), FUNC_2 (VAR_7), VAR_6);


      if (VAR_3[VAR_7] >= 0)
 VAR_2[VAR_3[VAR_7]].death = -1;
    }
}
