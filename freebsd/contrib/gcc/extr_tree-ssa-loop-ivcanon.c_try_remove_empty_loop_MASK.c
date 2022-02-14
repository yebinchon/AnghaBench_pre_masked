
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop {struct loop* next; struct loop* inner; } ;


 int FUNC_0 (struct loop*) ;
 int FUNC_1 (struct loop*) ;

__attribute__((used)) static bool
FUNC_2 (struct loop *VAR_0, bool *VAR_1)
{
  bool VAR_2 = 0;
  struct loop *VAR_3;


  for (VAR_3 = VAR_0->inner; VAR_3; VAR_3 = VAR_3->next)
    VAR_2 |= !FUNC_2 (VAR_3, VAR_1);

  if (VAR_2 || !FUNC_0 (VAR_0))
    return 0;

  FUNC_1 (VAR_0);
  *VAR_1 = 1;
  return 1;
}
