
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arg_data {int mode; int unsignedp; int initial_value; int value; int tree_value; } ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int,int ) ;

__attribute__((used)) static void
FUNC_12 (int VAR_4, int VAR_5, struct arg_data *VAR_6)
{
  int VAR_7;
  if ((VAR_4 & VAR_2) == 0 && !VAR_0)
    return;

  for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++)
    {
      enum machine_mode VAR_8;

      if ((VAR_4 & VAR_2) == 0
   && FUNC_5 (VAR_6[VAR_7].tree_value) != VAR_1)
 continue;


      FUNC_10 (!FUNC_4 (FUNC_6 (VAR_6[VAR_7].tree_value)));

      VAR_6[VAR_7].initial_value = VAR_6[VAR_7].value
 = FUNC_9 (VAR_6[VAR_7].tree_value);

      VAR_8 = FUNC_7 (FUNC_6 (VAR_6[VAR_7].tree_value));
      if (VAR_8 != VAR_6[VAR_7].mode)
 {
   VAR_6[VAR_7].value
     = FUNC_8 (VAR_6[VAR_7].mode, VAR_8,
        VAR_6[VAR_7].value, VAR_6[VAR_7].unsignedp);
 }
    }
}
