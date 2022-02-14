
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct elf_info {int size; unsigned int modinfo_len; unsigned int export_sec; unsigned int export_unused_sec; unsigned int export_gpl_sec; unsigned int export_unused_gpl_sec; unsigned int export_gpl_future_sec; unsigned int markers_strings_sec; TYPE_1__* symtab_stop; TYPE_1__* symtab_start; void* strtab; void* modinfo; TYPE_2__* sechdrs; TYPE_3__* hdr; } ;
struct TYPE_7__ {scalar_t__* e_ident; unsigned int e_type; unsigned int e_machine; unsigned int e_version; unsigned int e_entry; unsigned int e_phoff; unsigned int e_shoff; unsigned int e_flags; unsigned int e_ehsize; unsigned int e_phentsize; unsigned int e_phnum; unsigned int e_shentsize; unsigned int e_shnum; unsigned int e_shstrndx; } ;
struct TYPE_6__ {unsigned int sh_name; unsigned int sh_type; unsigned int sh_flags; unsigned int sh_addr; unsigned int sh_offset; unsigned int sh_size; unsigned int sh_link; unsigned int sh_info; unsigned int sh_addralign; unsigned int sh_entsize; } ;
struct TYPE_5__ {unsigned int st_shndx; unsigned int st_name; unsigned int st_value; unsigned int st_size; } ;
typedef TYPE_1__ Elf_Sym ;
typedef TYPE_2__ Elf_Shdr ;
typedef TYPE_3__ Elf_Ehdr ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 void* FUNC_0 (unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 TYPE_3__* FUNC_3 (char const*,int*) ;
 int FUNC_4 (char const*) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static int FUNC_6(struct elf_info *VAR_10, const char *VAR_11)
{
 unsigned int VAR_12;
 Elf_Ehdr *VAR_13;
 Elf_Shdr *VAR_14;
 Elf_Sym *VAR_15;

 VAR_13 = FUNC_3(VAR_11, &VAR_10->size);
 if (!VAR_13) {
  FUNC_4(VAR_11);
  FUNC_1(1);
 }
 VAR_10->hdr = VAR_13;
 if (VAR_10->size < sizeof(*VAR_13)) {

  return 0;
 }

 if ((VAR_13->e_ident[VAR_0] != VAR_4) ||
     (VAR_13->e_ident[VAR_1] != VAR_5) ||
     (VAR_13->e_ident[VAR_2] != VAR_6) ||
     (VAR_13->e_ident[VAR_3] != VAR_7)) {

  return 0;
 }

 VAR_13->e_type = FUNC_0(VAR_13->e_type);
 VAR_13->e_machine = FUNC_0(VAR_13->e_machine);
 VAR_13->e_version = FUNC_0(VAR_13->e_version);
 VAR_13->e_entry = FUNC_0(VAR_13->e_entry);
 VAR_13->e_phoff = FUNC_0(VAR_13->e_phoff);
 VAR_13->e_shoff = FUNC_0(VAR_13->e_shoff);
 VAR_13->e_flags = FUNC_0(VAR_13->e_flags);
 VAR_13->e_ehsize = FUNC_0(VAR_13->e_ehsize);
 VAR_13->e_phentsize = FUNC_0(VAR_13->e_phentsize);
 VAR_13->e_phnum = FUNC_0(VAR_13->e_phnum);
 VAR_13->e_shentsize = FUNC_0(VAR_13->e_shentsize);
 VAR_13->e_shnum = FUNC_0(VAR_13->e_shnum);
 VAR_13->e_shstrndx = FUNC_0(VAR_13->e_shstrndx);
 VAR_14 = (void *)VAR_13 + VAR_13->e_shoff;
 VAR_10->sechdrs = VAR_14;


 if (VAR_13->e_shoff > VAR_10->size) {
  FUNC_2("section header offset=%lu in file '%s' is bigger than "
        "filesize=%lu\n", (unsigned long)VAR_13->e_shoff,
        VAR_11, VAR_10->size);
  return 0;
 }


 for (VAR_12 = 0; VAR_12 < VAR_13->e_shnum; VAR_12++) {
  VAR_14[VAR_12].sh_name = FUNC_0(VAR_14[VAR_12].sh_name);
  VAR_14[VAR_12].sh_type = FUNC_0(VAR_14[VAR_12].sh_type);
  VAR_14[VAR_12].sh_flags = FUNC_0(VAR_14[VAR_12].sh_flags);
  VAR_14[VAR_12].sh_addr = FUNC_0(VAR_14[VAR_12].sh_addr);
  VAR_14[VAR_12].sh_offset = FUNC_0(VAR_14[VAR_12].sh_offset);
  VAR_14[VAR_12].sh_size = FUNC_0(VAR_14[VAR_12].sh_size);
  VAR_14[VAR_12].sh_link = FUNC_0(VAR_14[VAR_12].sh_link);
  VAR_14[VAR_12].sh_info = FUNC_0(VAR_14[VAR_12].sh_info);
  VAR_14[VAR_12].sh_addralign = FUNC_0(VAR_14[VAR_12].sh_addralign);
  VAR_14[VAR_12].sh_entsize = FUNC_0(VAR_14[VAR_12].sh_entsize);
 }

 for (VAR_12 = 1; VAR_12 < VAR_13->e_shnum; VAR_12++) {
  const char *VAR_16
   = (void *)VAR_13 + VAR_14[VAR_13->e_shstrndx].sh_offset;
  const char *VAR_17;
  int VAR_18 = VAR_14[VAR_12].sh_type == VAR_8;

  if (!VAR_18 && VAR_14[VAR_12].sh_offset > VAR_10->size) {
   FUNC_2("%s is truncated. sechdrs[i].sh_offset=%lu > "
         "sizeof(*hrd)=%zu\n", VAR_11,
         (unsigned long)VAR_14[VAR_12].sh_offset,
         sizeof(*VAR_13));
   return 0;
  }
  VAR_17 = VAR_16 + VAR_14[VAR_12].sh_name;
  if (FUNC_5(VAR_17, ".modinfo") == 0) {
   if (VAR_18)
    FUNC_2("%s has NOBITS .modinfo\n", VAR_11);
   VAR_10->modinfo = (void *)VAR_13 + VAR_14[VAR_12].sh_offset;
   VAR_10->modinfo_len = VAR_14[VAR_12].sh_size;
  } else if (FUNC_5(VAR_17, "__ksymtab") == 0)
   VAR_10->export_sec = VAR_12;
  else if (FUNC_5(VAR_17, "__ksymtab_unused") == 0)
   VAR_10->export_unused_sec = VAR_12;
  else if (FUNC_5(VAR_17, "__ksymtab_gpl") == 0)
   VAR_10->export_gpl_sec = VAR_12;
  else if (FUNC_5(VAR_17, "__ksymtab_unused_gpl") == 0)
   VAR_10->export_unused_gpl_sec = VAR_12;
  else if (FUNC_5(VAR_17, "__ksymtab_gpl_future") == 0)
   VAR_10->export_gpl_future_sec = VAR_12;
  else if (FUNC_5(VAR_17, "__markers_strings") == 0)
   VAR_10->markers_strings_sec = VAR_12;

  if (VAR_14[VAR_12].sh_type != VAR_9)
   continue;

  VAR_10->symtab_start = (void *)VAR_13 + VAR_14[VAR_12].sh_offset;
  VAR_10->symtab_stop = (void *)VAR_13 + VAR_14[VAR_12].sh_offset
                            + VAR_14[VAR_12].sh_size;
  VAR_10->strtab = (void *)VAR_13 +
                VAR_14[VAR_14[VAR_12].sh_link].sh_offset;
 }
 if (!VAR_10->symtab_start)
  FUNC_2("%s has no symtab?\n", VAR_11);


 for (VAR_15 = VAR_10->symtab_start; VAR_15 < VAR_10->symtab_stop; VAR_15++) {
  VAR_15->st_shndx = FUNC_0(VAR_15->st_shndx);
  VAR_15->st_name = FUNC_0(VAR_15->st_name);
  VAR_15->st_value = FUNC_0(VAR_15->st_value);
  VAR_15->st_size = FUNC_0(VAR_15->st_size);
 }
 return 1;
}
