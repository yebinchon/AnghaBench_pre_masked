
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct decision* first; } ;
struct decision {struct decision* next; TYPE_1__ success; } ;


 int FUNC_0 (struct decision*,int) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (char,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3 (struct decision *VAR_1, int VAR_2, int VAR_3)
{
  struct decision *VAR_4;
  int VAR_5;

  if (VAR_3 < 0)
    return;
  if (VAR_1 == ((void*)0))
    {
      for (VAR_5 = 0; VAR_5 < VAR_2; ++VAR_5)
 FUNC_2 (' ', VAR_0);
      FUNC_1 ("(nil)\n", VAR_0);
      return;
    }

  FUNC_0 (VAR_1, VAR_2);
  for (VAR_4 = VAR_1->success.first; VAR_4 ; VAR_4 = VAR_4->next)
    FUNC_3 (VAR_4, VAR_2 + 2, VAR_3 - 1);
}
