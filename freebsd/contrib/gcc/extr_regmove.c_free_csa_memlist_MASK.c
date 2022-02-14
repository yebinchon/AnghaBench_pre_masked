
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csa_memlist {struct csa_memlist* next; } ;


 int FUNC_0 (struct csa_memlist*) ;

__attribute__((used)) static void
FUNC_1 (struct csa_memlist *VAR_0)
{
  struct csa_memlist *VAR_1;
  for (; VAR_0 ; VAR_0 = VAR_1)
    {
      VAR_1 = VAR_0->next;
      FUNC_0 (VAR_0);
    }
}
