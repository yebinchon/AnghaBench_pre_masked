
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {size_t e_shstrndx; size_t e_shnum; int e_shoff; } ;
struct TYPE_6__ {int sh_addralign; int sh_size; int sh_flags; int sh_type; int sh_offset; int sh_info; int sh_name; } ;
typedef size_t Elf64_Xword ;
typedef size_t Elf64_Word ;
typedef int Elf64_Sym ;
typedef TYPE_1__ Elf64_Shdr ;
typedef int Elf64_Rela ;
typedef int Elf64_Rel ;
typedef size_t Elf64_Off ;
typedef TYPE_2__ Elf64_Ehdr ;
typedef int Elf32_Word ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;


 int* FUNC_0 (int,int) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*,int,size_t,void*,size_t,int const*,size_t,TYPE_1__*,int,int*,char const*,size_t,char const*) ;
 int FUNC_3 (void*,int,size_t,void*,size_t,int const*,size_t,TYPE_1__*,int,int*,char const*,size_t,char const*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 size_t FUNC_6 (size_t*) ;
 int FUNC_7 (int *) ;
 size_t FUNC_8 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int *,int) ;
 int VAR_7 ;
 scalar_t__ FUNC_12 (char const*,char const*) ;
 int FUNC_13 (char const*) ;
 int FUNC_14 (char*,...) ;
 int FUNC_15 (void*,size_t) ;
 int FUNC_16 (int ) ;
 char const* VAR_8 ;

__attribute__((used)) static void FUNC_17(void *VAR_9, size_t VAR_10, Elf64_Ehdr *VAR_11)
{
 const Elf64_Sym *VAR_12;
 Elf64_Shdr *VAR_13;
 const char *VAR_14, *VAR_15;
 size_t VAR_16, VAR_17;
 int VAR_18, VAR_19, *VAR_20, *VAR_21, VAR_22, VAR_23, VAR_24;

 VAR_13 = VAR_9 + FUNC_8(&VAR_11->e_shoff);
 VAR_14 = VAR_9 + FUNC_8(&VAR_13[FUNC_6(&VAR_11->e_shstrndx)].sh_offset);
 VAR_19 = FUNC_6(&VAR_11->e_shnum);





 VAR_20 = FUNC_0(sizeof(int), VAR_19 * 2);
 if (!VAR_20) {
  FUNC_9("calloc");
  FUNC_1(1);
 }
 VAR_21 = VAR_20 + VAR_19;
 VAR_22 = 0;

 VAR_12 = ((void*)0);
 VAR_15 = ((void*)0);
 VAR_17 = 0;
 VAR_16 = 0;

 for (VAR_18 = 1; VAR_18 < VAR_19; VAR_18++) {
  const char *VAR_25 = VAR_14 + FUNC_7(&VAR_13[VAR_18].sh_name);
  Elf64_Word VAR_26 = FUNC_7(&VAR_13[VAR_18].sh_type);
  Elf64_Xword VAR_27 = FUNC_8(&VAR_13[VAR_18].sh_size);
  Elf64_Xword VAR_28 = FUNC_8(&VAR_13[VAR_18].sh_flags);
  Elf64_Word VAR_29 = FUNC_7(&VAR_13[VAR_18].sh_info);
  Elf64_Off VAR_30 = FUNC_8(&VAR_13[VAR_18].sh_offset);
  void *VAR_31 = VAR_9 + VAR_30;


  if (VAR_26 != VAR_1 && VAR_10 < VAR_30 + VAR_27) {
   FUNC_4(VAR_7, "Section goes beyond EOF\n");
   FUNC_1(3);
  }


  if (VAR_28 & VAR_0)
   VAR_20[VAR_22++] = VAR_18;
  else if ((VAR_26 == VAR_2 || VAR_26 == VAR_3) &&
    FUNC_8(&VAR_13[VAR_29].sh_flags) & VAR_0)
   VAR_20[VAR_22++] = VAR_18;


  switch (VAR_26) {
  case 128:
   if (FUNC_12(VAR_25, ".symtab") == 0) {
    VAR_12 = VAR_31;
    VAR_16 = VAR_27 / sizeof(Elf64_Sym);
   }
   break;

  case 129:
   if (FUNC_12(VAR_25, ".strtab") == 0) {
    VAR_15 = VAR_31;
    VAR_17 = VAR_27;
   }
   break;

  default:
   break;
  }
 }

 if (!VAR_12) {
  FUNC_4(VAR_7, "Couldn't locate symbol table\n");
  FUNC_1(3);
 }

 if (!VAR_15) {
  FUNC_4(VAR_7, "Couldn't locate strings table\n");
  FUNC_1(3);
 }


 do {
  VAR_23 = 0;

  for (VAR_18 = 0; VAR_18 < VAR_22 - 1; VAR_18++) {
   const char *VAR_32 = VAR_14 + FUNC_7(&VAR_13[VAR_20[VAR_18 + 0]].sh_name);
   const char *VAR_33 = VAR_14 + FUNC_7(&VAR_13[VAR_20[VAR_18 + 1]].sh_name);
   if (FUNC_12(VAR_32, VAR_33) > 0) {
    VAR_24 = VAR_20[VAR_18 + 0];
    VAR_20[VAR_18 + 0] = VAR_20[VAR_18 + 1];
    VAR_20[VAR_18 + 1] = VAR_24;
    VAR_23 = 1;
   }
  }

 } while (VAR_23);

 for (VAR_18 = 0; VAR_18 < VAR_22; VAR_18++)
  VAR_21[VAR_20[VAR_18]] = VAR_18 + 1;

 if (VAR_5 > 1) {
  FUNC_10("\nSection canonicalisation map:\n");
  for (VAR_18 = 1; VAR_18 < VAR_19; VAR_18++) {
   const char *VAR_34 = VAR_14 + FUNC_7(&VAR_13[VAR_18].sh_name);
   FUNC_10("%4d %s\n", VAR_21[VAR_18], VAR_34);
  }

  FUNC_10("\nAllocated section list in canonical order:\n");
  for (VAR_18 = 0; VAR_18 < VAR_22; VAR_18++) {
   const char *VAR_35 = VAR_14 + FUNC_7(&VAR_13[VAR_20[VAR_18]].sh_name);
   FUNC_10("%4d %s\n", VAR_20[VAR_18], VAR_35);
  }
 }



 FUNC_14("\n");
 FUNC_14("CAN FILE POS CS SECT NAME\n");
 FUNC_14("=== ======== == ==== ==============================\n");

 for (VAR_18 = 0; VAR_18 < VAR_22; VAR_18++) {
  int VAR_36 = VAR_20[VAR_18];
  const char *VAR_37 = VAR_14 + FUNC_7(&VAR_13[VAR_36].sh_name);
  Elf64_Word VAR_38 = FUNC_7(&VAR_13[VAR_36].sh_type);
  Elf64_Xword VAR_39 = FUNC_8(&VAR_13[VAR_36].sh_size);
  Elf64_Xword VAR_40 = FUNC_8(&VAR_13[VAR_36].sh_flags);
  Elf64_Word VAR_41 = FUNC_7(&VAR_13[VAR_36].sh_info);
  Elf64_Off VAR_42 = FUNC_8(&VAR_13[VAR_36].sh_offset);
  void *VAR_43 = VAR_9 + VAR_42;

  VAR_4 = 0;


  if (VAR_38 == VAR_2 || VAR_38 == VAR_3) {
   Elf32_Word VAR_44;

   if (VAR_41 <= 0 && VAR_41 >= VAR_11->e_shnum) {
    FUNC_4(VAR_7,
     "Invalid ELF - REL/RELA sh_info does"
     " not refer to a valid section\n");
    FUNC_1(3);
   }

   FUNC_14("%3u %08lx ", VAR_18, FUNC_5(VAR_6));

   FUNC_11(&VAR_44, VAR_21[VAR_41]);


   FUNC_15(VAR_37, FUNC_13(VAR_37));
   FUNC_16(VAR_13[VAR_36].sh_type);
   FUNC_16(VAR_13[VAR_36].sh_flags);
   FUNC_16(VAR_13[VAR_36].sh_size);
   FUNC_16(VAR_13[VAR_36].sh_addralign);
   FUNC_16(VAR_44);

   if (VAR_38 == VAR_3)
    FUNC_3(VAR_9, VAR_36, VAR_41,
         VAR_43, VAR_39 / sizeof(Elf64_Rela),
         VAR_12, VAR_16,
         VAR_13, VAR_19, VAR_21,
         VAR_15, VAR_17,
         VAR_37);
   else
    FUNC_2(VAR_9, VAR_36, VAR_41,
        VAR_43, VAR_39 / sizeof(Elf64_Rel),
        VAR_12, VAR_16,
        VAR_13, VAR_19, VAR_21,
        VAR_15, VAR_17,
        VAR_37);
   continue;
  }


  if (VAR_38 == VAR_1 && VAR_40 & VAR_0) {
   FUNC_14("%3u %08lx ", VAR_18, FUNC_5(VAR_6));


   FUNC_15(VAR_37, FUNC_13(VAR_37));
   FUNC_16(VAR_13[VAR_36].sh_type);
   FUNC_16(VAR_13[VAR_36].sh_flags);
   FUNC_16(VAR_13[VAR_36].sh_size);
   FUNC_16(VAR_13[VAR_36].sh_addralign);

   FUNC_14("%02x %4d %s\n", VAR_4, VAR_36, VAR_37);
  }


  if (VAR_38 != VAR_1 && VAR_40 & VAR_0)
   goto include_section;


  continue;

 include_section:
  FUNC_14("%3u %08lx ", VAR_18, FUNC_5(VAR_6));


  FUNC_15(VAR_37, FUNC_13(VAR_37));
  FUNC_16(VAR_13[VAR_36].sh_type);
  FUNC_16(VAR_13[VAR_36].sh_flags);
  FUNC_16(VAR_13[VAR_36].sh_size);
  FUNC_16(VAR_13[VAR_36].sh_addralign);


  FUNC_15(VAR_43, VAR_39);

  FUNC_14("%02x %4d %s\n", VAR_4, VAR_36, VAR_37);
 }

 FUNC_14("%08lx         (%lu bytes csum 0x%02x)\n",
  FUNC_5(VAR_6), FUNC_5(VAR_6), VAR_8);
}
