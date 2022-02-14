
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct hppa_unw_aux_info {int nsyms; char* symtab; int strtab_size; scalar_t__ table_len; int * strtab; int * table; } ;
typedef int aux ;
struct TYPE_9__ {unsigned long e_shnum; } ;
struct TYPE_8__ {scalar_t__ sh_type; int sh_size; int sh_entsize; scalar_t__ sh_offset; int sh_link; } ;
typedef int FILE ;
typedef TYPE_1__ Elf_Internal_Shdr ;


 char* FUNC_0 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int ) ;
 unsigned long FUNC_2 (int ) ;
 char* FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 char* FUNC_4 (char*) ;
 int FUNC_5 (struct hppa_unw_aux_info*) ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_6 (char*) ;
 int * FUNC_7 (int *,int *,scalar_t__,int,int,char*) ;
 int FUNC_8 (struct hppa_unw_aux_info*,int ,int) ;
 int FUNC_9 (char*,...) ;
 TYPE_1__* VAR_3 ;
 int FUNC_10 (int *,struct hppa_unw_aux_info*,TYPE_1__*) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int * VAR_4 ;

__attribute__((used)) static int
FUNC_12 (FILE *VAR_5)
{
  struct hppa_unw_aux_info VAR_6;
  Elf_Internal_Shdr *VAR_7 = ((void*)0);
  Elf_Internal_Shdr *VAR_8;
  Elf_Internal_Shdr *VAR_9;
  unsigned long VAR_10;

  FUNC_8 (& VAR_6, 0, sizeof (VAR_6));

  if (VAR_4 == ((void*)0))
    return 1;

  for (VAR_10 = 0, VAR_9 = VAR_3; VAR_10 < VAR_2.e_shnum; ++VAR_10, ++VAR_9)
    {
      if (VAR_9->sh_type == VAR_0
   && FUNC_2 (VAR_9->sh_link) < VAR_2.e_shnum)
 {
   VAR_6.nsyms = VAR_9->sh_size / VAR_9->sh_entsize;
   VAR_6.symtab = FUNC_0 (VAR_5, VAR_9);

   VAR_8 = FUNC_1 (VAR_9->sh_link);
   VAR_6.strtab = FUNC_7 (((void*)0), VAR_5, VAR_8->sh_offset,
     1, VAR_8->sh_size, FUNC_4("string table"));
   VAR_6.strtab_size = VAR_6.strtab != ((void*)0) ? VAR_8->sh_size : 0;
 }
      else if (FUNC_11 (FUNC_3 (VAR_9), ".PARISC.unwind"))
 VAR_7 = VAR_9;
    }

  if (!VAR_7)
    FUNC_9 (FUNC_4("\nThere are no unwind sections in this file.\n"));

  for (VAR_10 = 0, VAR_9 = VAR_3; VAR_10 < VAR_2.e_shnum; ++VAR_10, ++VAR_9)
    {
      if (FUNC_11 (FUNC_3 (VAR_9), ".PARISC.unwind"))
 {
   FUNC_9 (FUNC_4("\nUnwind section "));
   FUNC_9 (FUNC_4("'%s'"), FUNC_3 (VAR_9));

   FUNC_9 (FUNC_4(" at offset 0x%lx contains %lu entries:\n"),
    (unsigned long) VAR_9->sh_offset,
    (unsigned long) (VAR_9->sh_size / (2 * VAR_1 + 8)));

          FUNC_10 (VAR_5, &VAR_6, VAR_9);
   if (VAR_6.table_len > 0)
     FUNC_5 (&VAR_6);

   if (VAR_6.table)
     FUNC_6 ((char *) VAR_6.table);
   VAR_6.table = ((void*)0);
 }
    }

  if (VAR_6.symtab)
    FUNC_6 (VAR_6.symtab);
  if (VAR_6.strtab)
    FUNC_6 ((char *) VAR_6.strtab);

  return 1;
}
