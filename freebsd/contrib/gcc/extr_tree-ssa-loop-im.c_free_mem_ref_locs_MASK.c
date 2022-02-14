
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_ref_loc {struct mem_ref_loc* next; } ;


 int FUNC_0 (struct mem_ref_loc*) ;

__attribute__((used)) static void
FUNC_1 (struct mem_ref_loc *VAR_0)
{
  struct mem_ref_loc *VAR_1;

  while (VAR_0)
    {
      VAR_1 = VAR_0;
      VAR_0 = VAR_0->next;
      FUNC_0 (VAR_1);
    }
}
