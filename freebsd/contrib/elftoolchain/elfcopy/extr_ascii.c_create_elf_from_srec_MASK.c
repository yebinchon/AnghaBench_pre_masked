
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct section {int off; int sz; } ;
struct elfcopy {int flags; int eout; TYPE_2__* shstrtab; int oem; int oed; int oec; } ;
struct TYPE_6__ {int * os; scalar_t__ off; } ;
struct TYPE_5__ {int e_shoff; scalar_t__ e_entry; int e_type; int e_machine; int * e_ident; } ;
typedef TYPE_1__ GElf_Ehdr ;
typedef int FILE ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct elfcopy*,char*,int ,int ,int ,int ,int ,int) ;
 int FUNC_2 (struct section*,int *,size_t) ;
 int FUNC_3 (struct elfcopy*) ;
 int FUNC_4 (struct elfcopy*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int * FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ,char*,int ) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int,char*) ;
 scalar_t__ FUNC_13 (int *) ;
 char* FUNC_14 (char*,int,int *) ;
 int FUNC_15 (struct section*) ;
 int FUNC_16 (struct elfcopy*) ;
 int FUNC_17 (struct elfcopy*) ;
 scalar_t__ FUNC_18 (int *,int ,int ) ;
 scalar_t__ FUNC_19 (int ,int ,int,int ) ;
 int * FUNC_20 (int ,TYPE_1__*) ;
 int * FUNC_21 (int ,int ) ;
 scalar_t__ FUNC_22 (int ,TYPE_1__*) ;
 int FUNC_23 (struct elfcopy*) ;
 struct section* FUNC_24 (struct elfcopy*,int) ;
 int FUNC_25 (struct elfcopy*,TYPE_2__*,int) ;
 struct section* FUNC_26 (struct elfcopy*,int,scalar_t__,scalar_t__) ;
 int FUNC_27 (struct elfcopy*) ;
 scalar_t__ FUNC_28 (char*,char*,scalar_t__*,int *,size_t*) ;
 int FUNC_29 (char*,char*,char*,int *) ;
 int FUNC_30 (struct elfcopy*,int ) ;
 int FUNC_31 (char*) ;
 int FUNC_32 (char*) ;

void
FUNC_33(struct elfcopy *VAR_18, int VAR_19)
{
 char VAR_20[VAR_17], VAR_21[VAR_17];
 uint8_t VAR_22[VAR_16];
 GElf_Ehdr VAR_23;
 struct section *VAR_24, *VAR_25;
 FILE *VAR_26;
 uint64_t VAR_27, VAR_28, VAR_29, VAR_30;
 uintmax_t VAR_31;
 size_t VAR_32;
 int VAR_33, VAR_34, VAR_35, VAR_36, VAR_37;
 char *VAR_38;
 char VAR_39;

 if ((VAR_33 = FUNC_5(VAR_19)) < 0)
  FUNC_9(VAR_9, "dup failed");
 if ((VAR_26 = FUNC_12(VAR_33, "r")) == ((void*)0))
  FUNC_9(VAR_9, "fdopen failed");


 if (FUNC_21(VAR_18->eout, VAR_18->oec) == ((void*)0))
  FUNC_10(VAR_9, "gelf_newehdr failed: %s",
      FUNC_6(-1));
 if (FUNC_20(VAR_18->eout, &VAR_23) == ((void*)0))
  FUNC_10(VAR_9, "gelf_getehdr() failed: %s",
      FUNC_6(-1));


 VAR_23.e_ident[VAR_0] = VAR_18->oec;
 VAR_23.e_ident[VAR_1] = VAR_18->oed;




 VAR_23.e_ident[VAR_2] = VAR_3;
 VAR_23.e_machine = VAR_18->oem;
 VAR_23.e_type = VAR_7;
 VAR_23.e_entry = 0;

 VAR_18->flags |= VAR_10;


 FUNC_23(VAR_18);
 VAR_18->shstrtab->off = 0;


 VAR_29 = FUNC_19(VAR_18->eout, VAR_5, 1, VAR_8);
 if (VAR_29 == 0)
  FUNC_10(VAR_9, "gelf_fsize() failed: %s", FUNC_6(-1));


 VAR_24 = ((void*)0);
 VAR_34 = 1;
 VAR_35 = 1;
 VAR_30 = VAR_28 = 0;
 while (FUNC_14(VAR_20, VAR_17, VAR_26) != ((void*)0)) {
  VAR_32 = 0;
  if (VAR_20[0] == '\r' || VAR_20[0] == '\n')
   continue;
  if (VAR_20[0] == '$' && VAR_20[1] == '$') {
   VAR_18->flags |= VAR_15;
   while ((VAR_38 = FUNC_14(VAR_20, VAR_17, VAR_26)) != ((void*)0)) {
    if (VAR_20[0] == '$' && VAR_20[1] == '$')
     break;
   }
   if (VAR_38 == ((void*)0))
    break;
   continue;
  }
  if (VAR_20[0] != 'S' || VAR_20[1] < '0' || VAR_20[1] > '9') {
   FUNC_32("Invalid srec record");
   continue;
  }
  if (FUNC_28(VAR_20, &VAR_39, &VAR_27, VAR_22, &VAR_32) < 0) {
   FUNC_32("Invalid srec record or mismatched checksum");
   continue;
  }
  switch (VAR_39) {
  case '1':
  case '2':
  case '3':
   if (VAR_32 == 0)
    break;
   if (VAR_34 || VAR_30 != VAR_27) {
    if (VAR_24 != ((void*)0))
     FUNC_15(VAR_24);
    VAR_24 = FUNC_26(VAR_18, VAR_35, VAR_29,
        VAR_27);
    if (VAR_24 == ((void*)0)) {
     FUNC_32("new_data_section failed");
     break;
    }
    VAR_35++;
    VAR_30 = VAR_27;
    VAR_34 = 0;
   }
   FUNC_2(VAR_24, VAR_22, VAR_32);
   VAR_29 += VAR_32;
   VAR_30 += VAR_32;
   break;
  case '7':
  case '8':
  case '9':
   VAR_28 = VAR_27;
   break;
  default:
   break;
  }
 }
 if (VAR_24 != ((void*)0))
  FUNC_15(VAR_24);
 if (FUNC_13(VAR_26))
  FUNC_31("fgets failed");


 if ((VAR_18->shstrtab->os = FUNC_7(VAR_18->eout)) == ((void*)0))
  FUNC_10(VAR_9, "elf_newscn failed: %s",
      FUNC_6(-1));
 FUNC_25(VAR_18, VAR_18->shstrtab, 1);


 VAR_25 = FUNC_24(VAR_18, 1);





 VAR_37 = 0;
 VAR_36 = 0;
 if (VAR_18->flags & VAR_15) {
  if (FUNC_18(VAR_26, 0, VAR_11) < 0) {
   FUNC_31("fseek failed");
   VAR_18->flags &= ~VAR_15;
   goto done;
  }
  while (FUNC_14(VAR_20, VAR_17, VAR_26) != ((void*)0)) {
   if (VAR_36) {
    if (VAR_20[0] == '$' && VAR_20[1] == '$') {
     VAR_36 = 0;
     continue;
    }
    if (FUNC_29(VAR_20, "%s $%jx", VAR_21,
        &VAR_31) != 2) {
     FUNC_32("Invalid symbolsrec record");
     continue;
    }
    if (!VAR_37) {
     FUNC_3(VAR_18);
     VAR_37 = 1;
    }
    FUNC_1(VAR_18, VAR_21, VAR_31, 0, VAR_12,
        FUNC_0(VAR_13, VAR_14), 0, 1);
   }
   if (VAR_20[0] == '$' && VAR_20[1] == '$') {
    VAR_36 = 1;
    continue;
   }
  }
 }
 if (FUNC_13(VAR_26))
  FUNC_31("fgets failed");
 if (VAR_37) {
  FUNC_16(VAR_18);
  FUNC_4(VAR_18);

  VAR_25->sz += FUNC_19(VAR_18->eout, VAR_6, 2, VAR_8);
 } else
  VAR_18->flags &= ~VAR_15;

done:
 FUNC_11(VAR_26);


 VAR_23.e_entry = VAR_28;





 if (FUNC_22(VAR_18->eout, &VAR_23) == 0)
  FUNC_10(VAR_9, "gelf_update_ehdr() failed: %s",
      FUNC_6(-1));


 FUNC_30(VAR_18, 0);


 if (FUNC_20(VAR_18->eout, &VAR_23) == ((void*)0))
  FUNC_10(VAR_9, "gelf_getehdr() failed: %s",
      FUNC_6(-1));


 FUNC_27(VAR_18);


 VAR_23.e_shoff = VAR_25->off;


 if (FUNC_22(VAR_18->eout, &VAR_23) == 0)
  FUNC_10(VAR_9, "gelf_update_ehdr() failed: %s",
      FUNC_6(-1));


 if (FUNC_8(VAR_18->eout, VAR_4) < 0)
  FUNC_10(VAR_9, "elf_update() failed: %s",
      FUNC_6(-1));


 FUNC_17(VAR_18);
}
