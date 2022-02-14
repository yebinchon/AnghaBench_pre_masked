
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loops {int dummy; } ;
struct loop {struct loop* next; struct loop* inner; } ;


 struct loop* FUNC_0 (struct loops*,struct loop*,struct loop*) ;

__attribute__((used)) static void
FUNC_1 (struct loops *VAR_0, struct loop *VAR_1, struct loop *VAR_2)
{
  struct loop *VAR_3, *VAR_4;

  for (VAR_3 = VAR_1->inner; VAR_3; VAR_3 = VAR_3->next)
    {
      VAR_4 = FUNC_0 (VAR_0, VAR_3, VAR_2);
      FUNC_1 (VAR_0, VAR_3, VAR_4);
    }
}
