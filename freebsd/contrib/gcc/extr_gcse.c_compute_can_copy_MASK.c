
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int* VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int*,int ,int) ;
 scalar_t__ FUNC_7 (int ,int ,int *) ;
 int FUNC_8 () ;

__attribute__((used)) static void
FUNC_9 (void)
{
  int VAR_5;

  rtx VAR_6, VAR_7;

  FUNC_6 (VAR_4, 0, VAR_2);

  FUNC_8 ();
  for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
    if (FUNC_0 (VAR_5) == VAR_1)
      {



 VAR_6 = FUNC_4 ((enum machine_mode) VAR_5, VAR_0 + 1);
 VAR_7 = FUNC_2 (FUNC_5 (VAR_3, VAR_6, VAR_6));
 if (FUNC_7 (FUNC_1 (VAR_7), VAR_7, ((void*)0)) >= 0)
   VAR_4[VAR_5] = 1;

      }
    else
      VAR_4[VAR_5] = 1;

  FUNC_3 ();
}
