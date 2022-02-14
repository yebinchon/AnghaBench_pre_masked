
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct loops {TYPE_1__* tree_root; } ;
struct loop {struct loop* next; } ;
struct TYPE_2__ {struct loop* inner; } ;


 unsigned int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (struct loop*,int*) ;

unsigned int
FUNC_2 (struct loops *VAR_1)
{
  bool VAR_2 = 0;
  struct loop *VAR_3;

  for (VAR_3 = VAR_1->tree_root->inner; VAR_3; VAR_3 = VAR_3->next)
    FUNC_1 (VAR_3, &VAR_2);

  if (VAR_2)
    {
      FUNC_0 ();
      return VAR_0;
    }
  return 0;
}
