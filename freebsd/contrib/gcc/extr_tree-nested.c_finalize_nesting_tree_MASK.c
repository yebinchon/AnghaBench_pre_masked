
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nesting_info {struct nesting_info* next; struct nesting_info* inner; } ;


 int FUNC_0 (struct nesting_info*) ;

__attribute__((used)) static void
FUNC_1 (struct nesting_info *VAR_0)
{
  do
    {
      if (VAR_0->inner)
 FUNC_1 (VAR_0->inner);
      FUNC_0 (VAR_0);
      VAR_0 = VAR_0->next;
    }
  while (VAR_0);
}
