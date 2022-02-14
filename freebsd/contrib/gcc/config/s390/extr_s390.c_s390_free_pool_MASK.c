
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct constant_pool {int insns; struct constant_pool* next; struct constant_pool* execute; struct constant_pool** constants; } ;
struct constant {int insns; struct constant* next; struct constant* execute; struct constant** constants; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct constant_pool*) ;

__attribute__((used)) static void
FUNC_2 (struct constant_pool *VAR_1)
{
  struct constant *VAR_2, *VAR_3;
  int VAR_4;

  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
    for (VAR_2 = VAR_1->constants[VAR_4]; VAR_2; VAR_2 = VAR_3)
      {
 VAR_3 = VAR_2->next;
 FUNC_1 (VAR_2);
      }

  for (VAR_2 = VAR_1->execute; VAR_2; VAR_2 = VAR_3)
    {
      VAR_3 = VAR_2->next;
      FUNC_1 (VAR_2);
    }

  FUNC_0 (VAR_1->insns);
  FUNC_1 (VAR_1);
}
