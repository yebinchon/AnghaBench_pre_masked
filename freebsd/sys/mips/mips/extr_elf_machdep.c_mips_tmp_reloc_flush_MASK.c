
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mips_tmp_reloc {struct mips_tmp_reloc* next; } ;


 int VAR_0 ;
 int FUNC_0 (struct mips_tmp_reloc*,int ) ;
 struct mips_tmp_reloc* VAR_1 ;

__attribute__((used)) static void
FUNC_1(void)
{
 struct mips_tmp_reloc *VAR_2, *VAR_3;

 VAR_2 = VAR_1;
 VAR_1 = ((void*)0);
 while (VAR_2 != ((void*)0)) {
  VAR_3 = VAR_2->next;
  FUNC_0(VAR_2, VAR_0);
  VAR_2 = VAR_3;
 }
}
