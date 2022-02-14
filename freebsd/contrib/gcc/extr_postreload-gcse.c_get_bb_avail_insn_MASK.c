
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct occr {int insn; struct occr* next; } ;
typedef scalar_t__ basic_block ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static struct occr*
FUNC_1 (basic_block VAR_0, struct occr *VAR_1)
{
  for (; VAR_1 != ((void*)0); VAR_1 = VAR_1->next)
    if (FUNC_0 (VAR_1->insn) == VAR_0)
      return VAR_1;
  return ((void*)0);
}
