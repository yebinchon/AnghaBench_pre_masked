
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ppc_mq_regnum; int ppc_fpscr_regnum; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (int,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_3 (int VAR_7)
{
  int VAR_8;
  int VAR_9, VAR_10;
  int VAR_11, VAR_12;

  if (VAR_7 == -1)
    {
      VAR_9 = 0;
      VAR_10 = VAR_3 - 1;

      VAR_11 = 0;
      VAR_12 = VAR_0 - 1;
    }
  else
    {
      VAR_9 = VAR_7;
      VAR_10 = VAR_7;

      VAR_11 = VAR_4[VAR_7];
      VAR_12 = VAR_4[VAR_7];
    }

  if (VAR_11 == -1)
    return;

  for (VAR_8 = VAR_9; VAR_8 <= VAR_10; VAR_8++)
    {
      int VAR_13;

      VAR_13 = VAR_4[VAR_8];



      if ((VAR_8 != FUNC_1 (VAR_5)->ppc_mq_regnum)
          && (VAR_8 != FUNC_1 (VAR_5)->ppc_fpscr_regnum)
          && ((VAR_8 < VAR_1) || (VAR_8 > VAR_2)))
 {

   FUNC_2 (VAR_13, VAR_6 + FUNC_0 (VAR_8), 4);
 }






    }
}
