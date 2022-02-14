
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_tmp_reloc {struct mips_tmp_reloc* next; } ;


 struct mips_tmp_reloc* VAR_0 ;

__attribute__((used)) static struct mips_tmp_reloc *
FUNC_0(void)
{
 struct mips_tmp_reloc *VAR_1;

 VAR_1 = VAR_0;
 if (VAR_1 == ((void*)0))
  return (((void*)0));
 VAR_0 = VAR_0->next;
 return (VAR_1);
}
