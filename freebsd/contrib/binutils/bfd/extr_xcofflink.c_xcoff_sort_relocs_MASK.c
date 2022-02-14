
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct internal_reloc {scalar_t__ r_vaddr; } ;



__attribute__((used)) static int
FUNC_0 (const void * VAR_0, const void * VAR_1)
{
  const struct internal_reloc *VAR_2 = (const struct internal_reloc *) VAR_0;
  const struct internal_reloc *VAR_3 = (const struct internal_reloc *) VAR_1;

  if (VAR_2->r_vaddr > VAR_3->r_vaddr)
    return 1;
  else if (VAR_2->r_vaddr < VAR_3->r_vaddr)
    return -1;
  else
    return 0;
}
