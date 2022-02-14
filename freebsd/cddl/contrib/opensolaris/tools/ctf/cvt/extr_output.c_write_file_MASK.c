
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef size_t off_t ;
typedef TYPE_1__* caddr_t ;
struct TYPE_25__ {int e_phnum; int e_shnum; int e_shstrndx; size_t e_shoff; scalar_t__ e_phoff; } ;
struct TYPE_24__ {size_t sh_name; scalar_t__ sh_type; size_t sh_addralign; size_t sh_offset; int sh_link; int sh_info; char sh_size; int sh_entsize; } ;
struct TYPE_23__ {size_t st_shndx; } ;
struct TYPE_22__ {int d_align; char d_size; scalar_t__ d_off; struct TYPE_22__* d_buf; int d_version; int d_type; } ;
typedef scalar_t__ GElf_Word ;
typedef TYPE_2__ GElf_Sym ;
typedef TYPE_3__ GElf_Shdr ;
typedef int GElf_Phdr ;
typedef TYPE_4__ GElf_Ehdr ;
typedef int Elf_Scn ;
typedef TYPE_1__ Elf_Data ;
typedef int Elf ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_1 (int *,int ,int ) ;
 TYPE_1__* FUNC_2 (int *,int *) ;
 int * FUNC_3 (int *,int) ;
 TYPE_1__* FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 char* FUNC_6 (int *,int,size_t) ;
 scalar_t__ FUNC_7 (int *,int ) ;
 int FUNC_8 (char const*,char*,...) ;
 int FUNC_9 (int*) ;
 size_t FUNC_10 (int *,int ,int,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,TYPE_4__*) ;
 int FUNC_13 (int *,int,int *) ;
 int FUNC_14 (int *,TYPE_3__*) ;
 int * FUNC_15 (TYPE_1__*,int,TYPE_2__*) ;
 int * FUNC_16 (int *,int ) ;
 int * FUNC_17 (int *,int) ;
 int FUNC_18 (int *,TYPE_4__*) ;
 int FUNC_19 (int *,int,int *) ;
 scalar_t__ FUNC_20 (int *,TYPE_3__*) ;
 int FUNC_21 (TYPE_1__*,int,TYPE_2__*) ;
 int FUNC_22 (TYPE_4__*,TYPE_4__*,int) ;
 int FUNC_23 (char*,int) ;
 scalar_t__ FUNC_24 (char*,char*) ;
 int FUNC_25 (TYPE_1__*,char*) ;
 char FUNC_26 (char*) ;
 scalar_t__ FUNC_27 (char*,char*,int) ;
 int FUNC_28 (char*,char const*,char*) ;
 void* FUNC_29 (char) ;

__attribute__((used)) static void
FUNC_30(Elf *VAR_15, const char *VAR_16, Elf *VAR_17, const char *VAR_18,
    caddr_t VAR_19, size_t VAR_20, int VAR_21)
{
 GElf_Ehdr VAR_22, VAR_23;
 Elf_Scn *VAR_24, *VAR_25;
 Elf_Data *VAR_26, *VAR_27;
 GElf_Shdr VAR_28;
 GElf_Word VAR_29;
 int VAR_30 = -1;
 off_t VAR_31 = 0;
 off_t VAR_32 = 0;
 int VAR_33 = (VAR_21 & VAR_2);
 int VAR_34 = (VAR_21 & VAR_1);
 int *VAR_35;
 int VAR_36, VAR_37;
 int VAR_38 = 0;
 int VAR_39 = 0;
 int VAR_40;
 int VAR_41;

 if (FUNC_16(VAR_17, FUNC_11(VAR_15)) == ((void*)0))
  FUNC_8(VAR_18, "Cannot copy ehdr to temp file");
 FUNC_12(VAR_15, &VAR_22);
 FUNC_22(&VAR_23, &VAR_22, sizeof (GElf_Ehdr));
 FUNC_18(VAR_17, &VAR_23);

 VAR_29 = VAR_33 ? VAR_9 : VAR_14;







 if (VAR_22.e_phnum != 0) {
  (void) FUNC_1(VAR_17, VAR_3, VAR_5);
  if (FUNC_17(VAR_17, VAR_22.e_phnum) == ((void*)0))
   FUNC_8(VAR_18, "Cannot make phdrs in temp file");

  for (VAR_41 = 0; VAR_41 < VAR_22.e_phnum; VAR_41++) {
   GElf_Phdr VAR_42;

   FUNC_13(VAR_15, VAR_41, &VAR_42);
   FUNC_19(VAR_17, VAR_41, &VAR_42);
  }
 }

 VAR_35 = FUNC_29(sizeof (int) * VAR_22.e_shnum);
 for (VAR_36 = VAR_37 = 0; VAR_36 < VAR_22.e_shnum; VAR_36++) {
  Elf_Scn *VAR_43 = FUNC_3(VAR_15, VAR_36);
  GElf_Shdr VAR_44;
  char *VAR_45;

  FUNC_14(VAR_43, &VAR_44);
  VAR_45 = FUNC_6(VAR_15, VAR_22.e_shstrndx, VAR_44);
  if (VAR_45 == ((void*)0)) {
   FUNC_8(VAR_16, "Can't find string at %u",
       VAR_44);
  }

  if (FUNC_24(VAR_45, VAR_0) == 0) {
   VAR_35[VAR_36] = -1;
  } else if (!VAR_34 &&
      (FUNC_27(VAR_45, ".stab", 5) == 0 ||
      FUNC_27(VAR_45, ".debug", 6) == 0 ||
      FUNC_27(VAR_45, ".rel.debug", 10) == 0 ||
      FUNC_27(VAR_45, ".rela.debug", 11) == 0)) {
   VAR_35[VAR_36] = -1;
  } else if (VAR_33 && VAR_44 == VAR_14) {





   VAR_35[VAR_36] = -1;
  } else {
   VAR_35[VAR_36] = VAR_37++;
   VAR_38 += FUNC_26(VAR_45) + 1;
  }

  VAR_31 = (off_t)VAR_23.e_phoff;
 }

 for (VAR_36 = 1; VAR_36 < VAR_22.e_shnum; VAR_36++) {
  char *VAR_46;

  VAR_24 = FUNC_3(VAR_15, VAR_36);
  FUNC_14(VAR_24, &VAR_28);

  if (VAR_35[VAR_36] == -1) {
   VAR_39 = 1;
   continue;
  }

  VAR_25 = FUNC_5(VAR_17);
  if (VAR_39 && VAR_22.e_phnum != 0) {
   VAR_40 = VAR_31 % VAR_28.sh_addralign;

   if (VAR_40)
    VAR_31 += VAR_28.sh_addralign - VAR_40;
   VAR_28.sh_offset = VAR_31;
  }

  VAR_28.sh_link = VAR_35[VAR_28.sh_link];

  if (VAR_28.sh_type == VAR_12 || VAR_28.sh_type == VAR_13)
   VAR_28.sh_info = VAR_35[VAR_28.sh_info];

  VAR_46 = FUNC_6(VAR_15, VAR_22.e_shstrndx, VAR_28.sh_name);
  if (VAR_46 == ((void*)0)) {
   FUNC_8(VAR_16, "Can't find string at %u",
       VAR_28.sh_name);
  }


  if (FUNC_20(VAR_25, &VAR_28) == 0)
   FUNC_8(VAR_18, "Cannot update sect %s", VAR_46);


  if ((VAR_26 = FUNC_2(VAR_24, ((void*)0))) == ((void*)0))
   FUNC_8(VAR_16, "Cannot get sect %s data", VAR_46);
  if ((VAR_27 = FUNC_4(VAR_25)) == ((void*)0))
   FUNC_8(VAR_18, "Can't make sect %s data", VAR_46);
  VAR_27->d_align = VAR_26->d_align;
  VAR_27->d_off = VAR_26->d_off;
  VAR_27->d_size = VAR_26->d_size;
  VAR_27->d_type = VAR_26->d_type;
  VAR_27->d_version = VAR_26->d_version;


  if (VAR_36 == VAR_22.e_shstrndx) {
   char VAR_47 = FUNC_26(VAR_0);

   VAR_27->d_buf = FUNC_29(VAR_27->d_size + VAR_28.sh_size +
       VAR_47 + 1);
   FUNC_0(VAR_26->d_buf, VAR_27->d_buf, VAR_28.sh_size);
   FUNC_25((caddr_t)VAR_27->d_buf + VAR_28.sh_size,
       VAR_0);
   VAR_32 = (off_t)VAR_28.sh_size;
   VAR_28.sh_size += VAR_47 + 1;
   VAR_27->d_size += VAR_47 + 1;

   if (VAR_22.e_phnum != 0)
    VAR_39 = 1;
  }

  if (VAR_28.sh_type == VAR_29 && VAR_28.sh_entsize != 0) {
   int VAR_48 = VAR_28.sh_size / VAR_28.sh_entsize;

   VAR_30 = VAR_35[VAR_36];

   VAR_27->d_buf = FUNC_29(VAR_28.sh_size);
   FUNC_0(VAR_26->d_buf, VAR_27->d_buf, VAR_28.sh_size);

   for (VAR_41 = 0; VAR_41 < VAR_48; VAR_41++) {
    GElf_Sym VAR_49;
    short VAR_50;

    if (FUNC_15(VAR_27, VAR_41, &VAR_49) == ((void*)0))
     FUNC_23("Could not get symbol %d\n",VAR_41);

    if (VAR_49.st_shndx >= VAR_8)
     continue;

    if ((VAR_50 = VAR_35[VAR_49.st_shndx]) !=
        VAR_49.st_shndx) {
     VAR_49.st_shndx =
         (VAR_50 == -1 ? 1 : VAR_50);

     FUNC_21(VAR_27, VAR_41, &VAR_49);
    }
   }
  }


  if (VAR_27->d_buf == ((void*)0) && VAR_26->d_buf != ((void*)0)) {
   VAR_27->d_buf = FUNC_29(VAR_28.sh_size);
   FUNC_0(VAR_26->d_buf, VAR_27->d_buf, VAR_28.sh_size);
  }


  if (FUNC_20(VAR_25, &VAR_28) == 0)
   FUNC_8(VAR_18, "Cannot update sect %s", VAR_46);

  VAR_31 = (off_t)VAR_28.sh_offset;
  if (VAR_28.sh_type != VAR_10)
   VAR_31 += VAR_28.sh_size;
 }

 if (VAR_30 == -1) {
  FUNC_28("%s: Cannot find %s section\n", VAR_16,
      VAR_33 ? "SHT_DYNSYM" : "SHT_SYMTAB");
 }


 VAR_25 = FUNC_5(VAR_17);
 FUNC_14(VAR_25, &VAR_28);
 VAR_28.sh_name = VAR_32;
 VAR_28.sh_type = VAR_11;
 VAR_28.sh_size = VAR_20;
 VAR_28.sh_link = VAR_30;
 VAR_28.sh_addralign = 4;
 if (VAR_39 && VAR_22.e_phnum != 0) {
  VAR_40 = VAR_31 % VAR_28.sh_addralign;

  if (VAR_40)
   VAR_31 += VAR_28.sh_addralign - VAR_40;

  VAR_28.sh_offset = VAR_31;
  VAR_31 += VAR_28.sh_size;
 }

 VAR_27 = FUNC_4(VAR_25);
 VAR_27->d_buf = VAR_19;
 VAR_27->d_size = VAR_20;
 VAR_27->d_align = VAR_28.sh_addralign;
 VAR_27->d_off = 0;

 FUNC_20(VAR_25, &VAR_28);


 if (VAR_22.e_phnum != 0) {
  size_t VAR_51 = FUNC_10(VAR_17, VAR_6, 1, VAR_7);
  size_t VAR_52 = VAR_31 % VAR_51;

  if (VAR_52)
   VAR_31 += VAR_51 - VAR_52;

  VAR_23.e_shoff = VAR_31;
 }


 VAR_23.e_shstrndx = VAR_35[VAR_22.e_shstrndx];
 FUNC_18(VAR_17, &VAR_23);
 if (FUNC_7(VAR_17, VAR_4) < 0)
  FUNC_8(VAR_18, "Cannot finalize temp file");

 FUNC_9(VAR_35);
}
