
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elfNN_ia64_dyn_sym_info {scalar_t__ addend; } ;



__attribute__((used)) static int
FUNC_0 (const void *VAR_0, const void *VAR_1)
{
  const struct elfNN_ia64_dyn_sym_info *VAR_2
    = (const struct elfNN_ia64_dyn_sym_info *) VAR_0;
  const struct elfNN_ia64_dyn_sym_info *VAR_3
    = (const struct elfNN_ia64_dyn_sym_info *) VAR_1;

  return VAR_2->addend < VAR_3->addend ? -1 : VAR_2->addend > VAR_3->addend ? 1 : 0;
}
