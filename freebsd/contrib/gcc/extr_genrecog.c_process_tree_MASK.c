
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct decision_head {int * first; } ;
typedef enum routine_type { ____Placeholder_routine_type } routine_type ;


 int VAR_0 ;
 int FUNC_0 (struct decision_head*,int) ;
 int FUNC_1 (struct decision_head*) ;
 int FUNC_2 (struct decision_head*,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct decision_head*) ;
 int FUNC_4 (struct decision_head*,int) ;
 int FUNC_5 (struct decision_head*,int) ;

__attribute__((used)) static void
FUNC_6 (struct decision_head *VAR_2, enum routine_type VAR_3)
{
  if (VAR_2->first == ((void*)0))
    {

      if (VAR_3 == VAR_0)
 return;
    }
  else
    {
      FUNC_1 (VAR_2);

      VAR_1 = 0;
      FUNC_0 (VAR_2, 1);
      FUNC_2 (VAR_2, ((void*)0));




      FUNC_3(VAR_2);

      FUNC_5 (VAR_2, VAR_3);
    }

  FUNC_4 (VAR_2, VAR_3);
}
