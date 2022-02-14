
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct elf_strtab_hash {int dummy; } ;
struct TYPE_9__ {scalar_t__ st_shndx; unsigned long st_name; int st_info; } ;
struct elf_link_local_dynamic_entry {long input_indx; TYPE_5__ isym; int * input_bfd; struct elf_link_local_dynamic_entry* next; } ;
struct elf_link_hash_table {int dynsymcount; struct elf_link_local_dynamic_entry* dynlocal; struct elf_strtab_hash* dynstr; } ;
struct bfd_link_info {int hash; } ;
typedef int bfd_size_type ;
typedef int bfd ;
struct TYPE_6__ {int output_section; } ;
typedef TYPE_1__ asection ;
struct TYPE_8__ {int sh_link; } ;
struct TYPE_7__ {TYPE_4__ symtab_hdr; } ;
typedef int Elf_External_Sym_Shndx ;
typedef int Elf64_External_Sym ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned long FUNC_2 (struct elf_strtab_hash*,char*,int ) ;
 struct elf_strtab_hash* FUNC_3 () ;
 struct elf_link_local_dynamic_entry* FUNC_4 (int *,int) ;
 int FUNC_5 (int *,TYPE_4__*,int,long,TYPE_5__*,char*,int *) ;
 char* FUNC_6 (int *,int ,unsigned long) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,struct elf_link_local_dynamic_entry*) ;
 TYPE_1__* FUNC_9 (int *,scalar_t__) ;
 struct elf_link_hash_table* FUNC_10 (struct bfd_link_info*) ;
 TYPE_2__* FUNC_11 (int *) ;
 int FUNC_12 (int ) ;

int
FUNC_13 (struct bfd_link_info *VAR_5,
       bfd *VAR_6,
       long VAR_7)
{
  bfd_size_type VAR_8;
  struct elf_link_local_dynamic_entry *VAR_9;
  struct elf_link_hash_table *VAR_10;
  struct elf_strtab_hash *VAR_11;
  unsigned long VAR_12;
  char *VAR_13;
  Elf_External_Sym_Shndx VAR_14;
  char VAR_15[sizeof (Elf64_External_Sym)];

  if (! FUNC_12 (VAR_5->hash))
    return 0;


  for (VAR_9 = FUNC_10 (VAR_5)->dynlocal; VAR_9 ; VAR_9 = VAR_9->next)
    if (VAR_9->input_bfd == VAR_6 && VAR_9->input_indx == VAR_7)
      return 1;

  VAR_8 = sizeof (*VAR_9);
  VAR_9 = FUNC_4 (VAR_6, VAR_8);
  if (VAR_9 == ((void*)0))
    return 0;


  if (!FUNC_5 (VAR_6, &FUNC_11 (VAR_6)->symtab_hdr,
        1, VAR_7, &VAR_9->isym, VAR_15, &VAR_14))
    {
      FUNC_8 (VAR_6, VAR_9);
      return 0;
    }

  if (VAR_9->isym.st_shndx != VAR_3
      && (VAR_9->isym.st_shndx < VAR_2
   || VAR_9->isym.st_shndx > VAR_1))
    {
      asection *VAR_16;

      VAR_16 = FUNC_9 (VAR_6, VAR_9->isym.st_shndx);
      if (VAR_16 == ((void*)0) || FUNC_7 (VAR_16->output_section))
 {


   FUNC_8 (VAR_6, VAR_9);
   return 2;
 }
    }

  VAR_13 = (FUNC_6
   (VAR_6, FUNC_11 (VAR_6)->symtab_hdr.sh_link,
    VAR_9->isym.st_name));

  VAR_11 = FUNC_10 (VAR_5)->dynstr;
  if (VAR_11 == ((void*)0))
    {

      FUNC_10 (VAR_5)->dynstr = VAR_11 = FUNC_3 ();
      if (VAR_11 == ((void*)0))
 return 0;
    }

  VAR_12 = FUNC_2 (VAR_11, VAR_13, VAR_0);
  if (VAR_12 == (unsigned long) -1)
    return 0;
  VAR_9->isym.st_name = VAR_12;

  VAR_10 = FUNC_10 (VAR_5);

  VAR_9->next = VAR_10->dynlocal;
  VAR_10->dynlocal = VAR_9;
  VAR_9->input_bfd = VAR_6;
  VAR_9->input_indx = VAR_7;
  VAR_10->dynsymcount++;


  VAR_9->isym.st_info
    = FUNC_0 (VAR_4, FUNC_1 (VAR_9->isym.st_info));



  return 1;
}
