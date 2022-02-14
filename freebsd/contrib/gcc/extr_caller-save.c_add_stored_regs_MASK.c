
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int regset ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int** VAR_3 ;
 int FUNC_7 (int,int,int ,int) ;

__attribute__((used)) static void
FUNC_8 (rtx VAR_4, rtx VAR_5, void *VAR_6)
{
  int VAR_7, VAR_8, VAR_9;
  enum machine_mode VAR_10 = FUNC_1 (VAR_4);
  int VAR_11 = 0;

  if (FUNC_0 (VAR_5) == VAR_0)
    return;

  if (FUNC_0 (VAR_4) == VAR_2 && FUNC_3 (FUNC_6 (VAR_4)))
    {
      VAR_11 = FUNC_7 (FUNC_2 (FUNC_6 (VAR_4)),
        FUNC_1 (FUNC_6 (VAR_4)),
        FUNC_5 (VAR_4),
        FUNC_1 (VAR_4));
      VAR_4 = FUNC_6 (VAR_4);
    }

  if (!FUNC_3 (VAR_4) || FUNC_2 (VAR_4) >= VAR_1)
    return;

  VAR_7 = FUNC_2 (VAR_4) + VAR_11;
  VAR_8 = VAR_7 + VAR_3[VAR_7][VAR_10];

  for (VAR_9 = VAR_7; VAR_9 < VAR_8; VAR_9++)
    FUNC_4 ((regset) VAR_6, VAR_9);
}
