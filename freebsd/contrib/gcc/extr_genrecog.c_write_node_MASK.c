
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ code; int intval; } ;
struct decision_test {scalar_t__ type; struct decision_test* next; TYPE_1__ u; } ;
struct TYPE_4__ {int first; } ;
struct decision {TYPE_2__ success; struct decision_test* tests; } ;
typedef enum routine_type { ____Placeholder_routine_type } routine_type ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct decision_test*,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct decision*,struct decision_test*,int,int,int ,int) ;
 int FUNC_3 (struct decision_test*,int,int) ;

__attribute__((used)) static int
FUNC_4 (struct decision *VAR_5, int VAR_6,
     enum routine_type VAR_7)
{
  struct decision_test *VAR_8, *VAR_9;
  int VAR_10;



  for (VAR_8 = VAR_5->tests; VAR_8; VAR_8 = VAR_8->next)
    {
      if (VAR_8->type == VAR_1
   && VAR_8->u.code == VAR_0
   && VAR_8->next
   && VAR_8->next->type == VAR_3
   && -VAR_4 <= VAR_8->next->u.intval
   && VAR_8->next->u.intval <= VAR_4)
 {
   VAR_8->type = VAR_2;
   VAR_8->u.intval = VAR_8->next->u.intval;
   VAR_8->next = VAR_8->next->next;
 }
    }

  VAR_9 = VAR_8 = VAR_5->tests;
  VAR_10 = FUNC_0 (VAR_8, VAR_7);
  if (VAR_10 == 0)
    {
      FUNC_1 ("  if (");
      FUNC_3 (VAR_8, VAR_6, VAR_7);

      while ((VAR_8 = VAR_8->next) != ((void*)0))
 {
   VAR_9 = VAR_8;
   if (FUNC_0 (VAR_8, VAR_7))
     break;

   FUNC_1 ("\n      && ");
   FUNC_3 (VAR_8, VAR_6, VAR_7);
 }

      FUNC_1 (")\n");
    }

  FUNC_2 (VAR_5, VAR_9, VAR_6, VAR_10, VAR_5->success.first, VAR_7);

  return VAR_10 > 0;
}
