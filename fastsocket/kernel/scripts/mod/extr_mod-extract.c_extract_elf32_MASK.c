
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int e_shoff; int e_shstrndx; int e_shnum; } ;
struct TYPE_6__ {int sh_offset; int sh_name; int sh_type; int sh_size; int sh_flags; int sh_info; int sh_addralign; } ;
typedef size_t Elf64_Word ;
typedef size_t Elf32_Xword ;
typedef int Elf32_Word ;
typedef int Elf32_Sym ;
typedef TYPE_1__ Elf32_Shdr ;
typedef int Elf32_Rela ;
typedef int Elf32_Rel ;
typedef size_t Elf32_Off ;
typedef TYPE_2__ Elf32_Ehdr ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int* FUNC_0 (int,int) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (void*,int,int,void*,size_t,int const*,size_t,TYPE_1__*,int,int*,char const*,size_t,char const*) ;
 int FUNC_3 (void*,int,int,void*,size_t,int const*,size_t,TYPE_1__*,int,int*,char const*,size_t,char const*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 size_t FUNC_6 (int*) ;
 int FUNC_7 (int*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 (int*,int) ;
 int VAR_7 ;
 scalar_t__ FUNC_11 (char const*,char const*) ;
 int FUNC_12 (char const*) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (void*,size_t) ;
 int FUNC_15 (int) ;
 char const* VAR_8 ;

__attribute__((used)) static void FUNC_16(void *VAR_9, size_t VAR_10, Elf32_Ehdr *VAR_11)
{
 const Elf32_Sym *VAR_12;
 Elf32_Shdr *VAR_13;
 const char *VAR_14, *VAR_15;
 size_t VAR_16, VAR_17;
 int VAR_18, VAR_19, *VAR_20, *VAR_21, VAR_22, VAR_23, VAR_24;

 VAR_13 = VAR_9 + FUNC_7(&VAR_11->e_shoff);
 VAR_14 = VAR_9 + FUNC_7(&VAR_13[FUNC_6(&VAR_11->e_shstrndx)].sh_offset);
 VAR_19 = FUNC_6(&VAR_11->e_shnum);





 VAR_20 = FUNC_0(sizeof(int), VAR_19 * 2);
 if (!VAR_20) {
  FUNC_8("calloc");
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
  Elf32_Word VAR_26 = FUNC_7(&VAR_13[VAR_18].sh_type);
  Elf32_Xword VAR_27 = FUNC_7(&VAR_13[VAR_18].sh_size);
  Elf32_Xword VAR_28 = FUNC_7(&VAR_13[VAR_18].sh_flags);
  Elf64_Word VAR_29 = FUNC_7(&VAR_13[VAR_18].sh_info);
  Elf32_Off VAR_30 = FUNC_7(&VAR_13[VAR_18].sh_offset);
  void *VAR_31 = VAR_9 + VAR_30;


  if (VAR_26 != VAR_1 && VAR_10 < VAR_30 + VAR_27) {
   FUNC_4(VAR_7, "Section goes beyond EOF\n");
   FUNC_1(3);
  }


  if (VAR_28 & VAR_0)
   VAR_20[VAR_22++] = VAR_18;
  else if ((VAR_26 == VAR_2 || VAR_26 == VAR_3) &&
    FUNC_7(&VAR_13[VAR_29].sh_flags) & VAR_0)
   VAR_20[VAR_22++] = VAR_18;


  switch (VAR_26) {
  case 128:
   if (FUNC_11(VAR_25, ".symtab") == 0) {
    VAR_12 = VAR_31;
    VAR_16 = VAR_27 / sizeof(Elf32_Sym);
   }
   break;

  case 129:
   if (FUNC_11(VAR_25, ".strtab") == 0) {
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
   if (FUNC_11(VAR_32, VAR_33) > 0) {
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
  FUNC_9("\nSection canonicalisation map:\n");
  for (VAR_18 = 1; VAR_18 < VAR_19; VAR_18++) {
   const char *VAR_34 = VAR_14 + FUNC_7(&VAR_13[VAR_18].sh_name);
   FUNC_9("%4d %s\n", VAR_21[VAR_18], VAR_34);
  }

  FUNC_9("\nAllocated section list in canonical order:\n");
  for (VAR_18 = 0; VAR_18 < VAR_22; VAR_18++) {
   const char *VAR_35 = VAR_14 + FUNC_7(&VAR_13[VAR_20[VAR_18]].sh_name);
   FUNC_9("%4d %s\n", VAR_20[VAR_18], VAR_35);
  }
 }



 FUNC_13("\n");
 FUNC_13("CAN FILE POS CS SECT NAME\n");
 FUNC_13("=== ======== == ==== ==============================\n");

 for (VAR_18 = 0; VAR_18 < VAR_22; VAR_18++) {
  int VAR_36 = VAR_20[VAR_18];
  const char *VAR_37 = VAR_14 + FUNC_7(&VAR_13[VAR_36].sh_name);
  Elf32_Word VAR_38 = FUNC_7(&VAR_13[VAR_36].sh_type);
  Elf32_Xword VAR_39 = FUNC_7(&VAR_13[VAR_36].sh_size);
  Elf32_Xword VAR_40 = FUNC_7(&VAR_13[VAR_36].sh_flags);
  Elf32_Word VAR_41 = FUNC_7(&VAR_13[VAR_36].sh_info);
  Elf32_Off VAR_42 = FUNC_7(&VAR_13[VAR_36].sh_offset);
  void *VAR_43 = VAR_9 + VAR_42;

  VAR_4 = 0;


  if (VAR_38 != VAR_1 && VAR_10 < VAR_42 + VAR_39) {
   FUNC_4(VAR_7, "section goes beyond EOF\n");
   FUNC_1(3);
  }


  if (VAR_38 == VAR_2 || VAR_38 == VAR_3) {
   Elf32_Word VAR_44;

   if (VAR_41 <= 0 && VAR_41 >= VAR_11->e_shnum) {
    FUNC_4(VAR_7,
     "Invalid ELF - REL/RELA sh_info does"
     " not refer to a valid section\n");
    FUNC_1(3);
   }

   FUNC_13("%3u %08lx ", VAR_18, FUNC_5(VAR_6));

   FUNC_10(&VAR_44, VAR_21[VAR_41]);


   FUNC_14(VAR_37, FUNC_12(VAR_37));
   FUNC_15(VAR_13[VAR_36].sh_type);
   FUNC_15(VAR_13[VAR_36].sh_flags);
   FUNC_15(VAR_13[VAR_36].sh_size);
   FUNC_15(VAR_13[VAR_36].sh_addralign);
   FUNC_15(VAR_44);

   if (VAR_38 == VAR_3)
    FUNC_3(VAR_9, VAR_36, VAR_41,
         VAR_43, VAR_39 / sizeof(Elf32_Rela),
         VAR_12, VAR_16,
         VAR_13, VAR_19, VAR_21,
         VAR_15, VAR_17,
         VAR_37);
   else
    FUNC_2(VAR_9, VAR_36, VAR_41,
        VAR_43, VAR_39 / sizeof(Elf32_Rel),
        VAR_12, VAR_16,
        VAR_13, VAR_19, VAR_21,
        VAR_15, VAR_17,
        VAR_37);
   continue;
  }


  if (VAR_38 == VAR_1 && VAR_40 & VAR_0) {
   FUNC_13("%3u %08lx ", VAR_18, FUNC_5(VAR_6));


   FUNC_14(VAR_37, FUNC_12(VAR_37));
   FUNC_15(VAR_13[VAR_36].sh_type);
   FUNC_15(VAR_13[VAR_36].sh_flags);
   FUNC_15(VAR_13[VAR_36].sh_size);
   FUNC_15(VAR_13[VAR_36].sh_addralign);

   FUNC_13("%02x %4d %s\n", VAR_4, VAR_36, VAR_37);
  }


  if (VAR_38 != VAR_1 && VAR_40 & VAR_0)
   goto include_section;


  continue;

 include_section:
  FUNC_13("%3u %08lx ", VAR_18, FUNC_5(VAR_6));


  FUNC_14(VAR_37, FUNC_12(VAR_37));
  FUNC_15(VAR_13[VAR_36].sh_type);
  FUNC_15(VAR_13[VAR_36].sh_flags);
  FUNC_15(VAR_13[VAR_36].sh_size);
  FUNC_15(VAR_13[VAR_36].sh_addralign);


  FUNC_14(VAR_43, VAR_39);

  FUNC_13("%02x %4d %s\n", VAR_4, VAR_36, VAR_37);
 }

 FUNC_13("%08lx         (%lu bytes csum 0x%02x)\n",
  FUNC_5(VAR_6), FUNC_5(VAR_6), VAR_8);
}
