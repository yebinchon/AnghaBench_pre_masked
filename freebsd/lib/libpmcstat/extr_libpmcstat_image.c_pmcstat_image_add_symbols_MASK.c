
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct pmcstat_symbol {scalar_t__ ps_start; scalar_t__ ps_end; int ps_name; } ;
struct pmcstat_image {size_t pi_symcount; scalar_t__ pi_vaddr; struct pmcstat_symbol* pi_symbols; } ;
struct TYPE_7__ {size_t sh_size; size_t sh_entsize; int sh_link; } ;
struct TYPE_6__ {scalar_t__ st_shndx; scalar_t__ st_value; scalar_t__ st_size; int st_name; int st_info; } ;
typedef TYPE_1__ GElf_Sym ;
typedef TYPE_2__ GElf_Shdr ;
typedef int Elf_Scn ;
typedef int Elf_Data ;
typedef int Elf ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int *,int *) ;
 char* FUNC_3 (int *,int ,int ) ;
 TYPE_1__* FUNC_4 (int *,int,TYPE_1__*) ;
 int FUNC_5 (char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_6 (struct pmcstat_image*,scalar_t__) ;
 int FUNC_7 (struct pmcstat_symbol*,size_t,int,int ) ;
 void* FUNC_8 (struct pmcstat_symbol*,size_t,int) ;

void
FUNC_9(struct pmcstat_image *VAR_3, Elf *VAR_4,
    Elf_Scn *VAR_5, GElf_Shdr *VAR_6)
{
 int VAR_7;
 size_t VAR_8, VAR_9, VAR_10, VAR_11;
 struct pmcstat_symbol *VAR_12;
 char *VAR_13;
 GElf_Sym VAR_14;
 Elf_Data *VAR_15;

 if ((VAR_15 = FUNC_2(VAR_5, ((void*)0))) == ((void*)0))
  return;






 VAR_10 = VAR_6->sh_size / VAR_6->sh_entsize;
 for (VAR_8 = VAR_11 = 0; VAR_8 < VAR_10; VAR_8++) {
  if (FUNC_4(VAR_15, (int) VAR_8, &VAR_14) != &VAR_14)
   return;
  if (FUNC_0(VAR_14.st_info) == VAR_1)
   VAR_11++;
 }

 if (VAR_11 == 0)
  return;




 VAR_7 = VAR_3->pi_symbols == ((void*)0);
 VAR_12 = FUNC_8(VAR_3->pi_symbols,
     VAR_3->pi_symcount + VAR_11, sizeof(*VAR_12));
 if (VAR_12 == VAR_3->pi_symbols)
  return;
 VAR_3->pi_symbols = VAR_12;




 VAR_12 += VAR_3->pi_symcount;

 for (VAR_8 = VAR_9 = 0; VAR_8 < VAR_10; VAR_8++) {
  if (FUNC_4(VAR_15, (int) VAR_8, &VAR_14) != &VAR_14)
   return;
  if (FUNC_0(VAR_14.st_info) != VAR_1)
   continue;

  if (VAR_14.st_shndx == VAR_0)
   continue;

  if (!VAR_7 && FUNC_6(VAR_3, VAR_14.st_value))
   continue;

  if ((VAR_13 = FUNC_3(VAR_4, VAR_6->sh_link, VAR_14.st_name))
      == ((void*)0))
   continue;
  VAR_12->ps_name = FUNC_5(VAR_13);
  VAR_12->ps_start = VAR_14.st_value - VAR_3->pi_vaddr;
  VAR_12->ps_end = VAR_12->ps_start + VAR_14.st_size;

  VAR_12++;
  VAR_9++;
 }

 VAR_3->pi_symcount += VAR_9;
 if (VAR_3->pi_symcount == 0)
  return;

 FUNC_1(VAR_9 <= VAR_11);




 if (VAR_9 < VAR_11)
  VAR_3->pi_symbols = FUNC_8(VAR_3->pi_symbols,
      VAR_3->pi_symcount, sizeof(*VAR_12));




 FUNC_7(VAR_3->pi_symbols, VAR_3->pi_symcount, sizeof(*VAR_12),
     VAR_2);






 for (VAR_12 = VAR_3->pi_symbols;
      VAR_12 < VAR_3->pi_symbols + (VAR_3->pi_symcount - 1);
      VAR_12++)
  if (VAR_12->ps_start == VAR_12->ps_end)
   VAR_12->ps_end = (VAR_12+1)->ps_start;
}
