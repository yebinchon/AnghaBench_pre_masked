
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nesting_info {struct nesting_info* next; int var_map; struct nesting_info* inner; } ;


 int FUNC_0 (struct nesting_info*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2 (struct nesting_info *VAR_0)
{
  struct nesting_info *VAR_1;
  do
    {
      if (VAR_0->inner)
 FUNC_2 (VAR_0->inner);
      FUNC_1 (VAR_0->var_map);
      VAR_1 = VAR_0->next;
      FUNC_0 (VAR_0);
      VAR_0 = VAR_1;
    }
  while (VAR_0);
}
