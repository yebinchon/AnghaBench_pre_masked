
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int CUMULATIVE_ARGS ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int *,int *,int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int * VAR_2 ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int *,int,int,int) ;
 int FUNC_13 (int *,int,int,int ) ;
 int FUNC_14 (int *,int,int,int ) ;

__attribute__((used)) static bool
FUNC_15 (tree VAR_3)
{
  CUMULATIVE_ARGS VAR_4;
  tree VAR_5;
  enum machine_mode VAR_6;
  tree VAR_7;
  rtx VAR_8;
  int VAR_9;

  FUNC_2 (VAR_4, ((void*)0), ((void*)0), 0, 0);

  while (VAR_3)
    {
      VAR_5 = FUNC_8 (VAR_3);
      VAR_3 = FUNC_5 (VAR_3);

      FUNC_11 (VAR_5);



      if (FUNC_6 (VAR_5) == VAR_0)
 return 1;

      VAR_7 = FUNC_7 (VAR_5);
      FUNC_11 (VAR_7);

      VAR_6 = FUNC_9 (VAR_7);
      FUNC_11 (VAR_6);

      if (FUNC_12 (&VAR_4, VAR_6, VAR_7, 1))
  {
    VAR_6 = VAR_1;
    VAR_7 = FUNC_10 (VAR_7);
  }

       VAR_8 = FUNC_13 (&VAR_4, VAR_6, VAR_7, 0);

       FUNC_14 (&VAR_4, VAR_6, VAR_7, 0);

       if (VAR_8 && FUNC_4 (VAR_8))
  {
    for (VAR_9 = 0;
  VAR_9 < FUNC_1 (FUNC_3 (VAR_8), FUNC_0 (VAR_8));
  VAR_9++)
      if (! VAR_2[VAR_9 + FUNC_3 (VAR_8)])
        return 1;
  }
    }
  return 0;
}
