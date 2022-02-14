
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct section {int off; } ;
struct elfcopy {int eout; TYPE_2__* shstrtab; int flags; int oem; int oed; int oec; } ;
struct TYPE_6__ {int * os; scalar_t__ off; } ;
struct TYPE_5__ {int e_shoff; scalar_t__ e_entry; int e_type; int e_machine; int * e_ident; } ;
typedef TYPE_1__ GElf_Ehdr ;
typedef int FILE ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct section*,int *,size_t) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int,char*) ;
 scalar_t__ FUNC_9 (int *) ;
 int * FUNC_10 (char*,int,int *) ;
 int FUNC_11 (struct section*) ;
 int FUNC_12 (struct elfcopy*) ;
 scalar_t__ FUNC_13 (int ,int ,int,int ) ;
 int * FUNC_14 (int ,TYPE_1__*) ;
 int * FUNC_15 (int ,int ) ;
 scalar_t__ FUNC_16 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_17 (char*,char*,scalar_t__*,scalar_t__*,int *,size_t*) ;
 int FUNC_18 (struct elfcopy*) ;
 struct section* FUNC_19 (struct elfcopy*,int) ;
 int FUNC_20 (struct elfcopy*,TYPE_2__*,int) ;
 struct section* FUNC_21 (struct elfcopy*,int,scalar_t__,scalar_t__) ;
 int FUNC_22 (struct elfcopy*) ;
 int FUNC_23 (struct elfcopy*,int ) ;
 int FUNC_24 (char*) ;
 int FUNC_25 (char*) ;

void
FUNC_26(struct elfcopy *VAR_12, int VAR_13)
{
 char VAR_14[VAR_11];
 uint8_t VAR_15[VAR_10];
 GElf_Ehdr VAR_16;
 struct section *VAR_17, *VAR_18;
 FILE *VAR_19;
 uint64_t VAR_20, VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26;
 size_t VAR_27;
 int VAR_28, VAR_29, VAR_30;
 char VAR_31;

 if ((VAR_28 = FUNC_1(VAR_13)) < 0)
  FUNC_5(VAR_8, "dup failed");
 if ((VAR_19 = FUNC_8(VAR_28, "r")) == ((void*)0))
  FUNC_5(VAR_8, "fdopen failed");


 if (FUNC_15(VAR_12->eout, VAR_12->oec) == ((void*)0))
  FUNC_6(VAR_8, "gelf_newehdr failed: %s",
      FUNC_2(-1));
 if (FUNC_14(VAR_12->eout, &VAR_16) == ((void*)0))
  FUNC_6(VAR_8, "gelf_getehdr() failed: %s",
      FUNC_2(-1));


 VAR_16.e_ident[VAR_0] = VAR_12->oec;
 VAR_16.e_ident[VAR_1] = VAR_12->oed;




 VAR_16.e_ident[VAR_2] = VAR_3;
 VAR_16.e_machine = VAR_12->oem;
 VAR_16.e_type = VAR_6;
 VAR_16.e_entry = 0;

 VAR_12->flags |= VAR_9;


 FUNC_18(VAR_12);
 VAR_12->shstrtab->off = 0;


 VAR_24 = FUNC_13(VAR_12->eout, VAR_5, 1, VAR_7);
 if (VAR_24 == 0)
  FUNC_6(VAR_8, "gelf_fsize() failed: %s", FUNC_2(-1));


 VAR_17 = ((void*)0);
 VAR_29 = 1;
 VAR_30 = 1;
 VAR_21 = VAR_25 = VAR_26 = VAR_22 = 0;
 while (FUNC_10(VAR_14, VAR_11, VAR_19) != ((void*)0)) {
  if (VAR_14[0] == '\r' || VAR_14[0] == '\n')
   continue;
  if (VAR_14[0] != ':') {
   FUNC_25("Invalid ihex record");
   continue;
  }
  if (FUNC_17(VAR_14, &VAR_31, &VAR_20, &VAR_23, VAR_15, &VAR_27) < 0) {
   FUNC_25("Invalid ihex record or mismatched checksum");
   continue;
  }
  switch (VAR_31) {
  case '0':

   if (VAR_27 == 0)
    break;
   VAR_25 = VAR_21 + VAR_20;
   if (VAR_29 || VAR_26 != VAR_25) {
    if (VAR_17 != ((void*)0))
     FUNC_11(VAR_17);
    VAR_17 = FUNC_21(VAR_12, VAR_30, VAR_24,
        VAR_25);
    if (VAR_17 == ((void*)0)) {
     FUNC_25("new_data_section failed");
     break;
    }
    VAR_30++;
    VAR_26 = VAR_25;
    VAR_29 = 0;
   }
   FUNC_0(VAR_17, VAR_15, VAR_27);
   VAR_24 += VAR_27;
   VAR_26 += VAR_27;
   break;
  case '1':

   goto done;
  case '2':

   VAR_21 = VAR_20 << 4;
   break;
  case '3':

   break;
  case '4':

   VAR_21 = VAR_23 << 16;
   break;
  case '5':

   VAR_22 = VAR_23;
   break;
  default:
   break;
  }
 }
done:
 if (VAR_17 != ((void*)0))
  FUNC_11(VAR_17);
 if (FUNC_9(VAR_19))
  FUNC_24("fgets failed");
 FUNC_7(VAR_19);


 if ((VAR_12->shstrtab->os = FUNC_3(VAR_12->eout)) == ((void*)0))
  FUNC_6(VAR_8, "elf_newscn failed: %s",
      FUNC_2(-1));
 FUNC_20(VAR_12, VAR_12->shstrtab, 1);


 VAR_18 = FUNC_19(VAR_12, 1);


 VAR_16.e_entry = VAR_22;





 if (FUNC_16(VAR_12->eout, &VAR_16) == 0)
  FUNC_6(VAR_8, "gelf_update_ehdr() failed: %s",
      FUNC_2(-1));


 FUNC_23(VAR_12, 0);


 if (FUNC_14(VAR_12->eout, &VAR_16) == ((void*)0))
  FUNC_6(VAR_8, "gelf_getehdr() failed: %s",
      FUNC_2(-1));


 FUNC_22(VAR_12);


 VAR_16.e_shoff = VAR_18->off;


 if (FUNC_16(VAR_12->eout, &VAR_16) == 0)
  FUNC_6(VAR_8, "gelf_update_ehdr() failed: %s",
      FUNC_2(-1));


 if (FUNC_4(VAR_12->eout, VAR_4) < 0)
  FUNC_6(VAR_8, "elf_update() failed: %s",
      FUNC_2(-1));


 FUNC_12(VAR_12);
}
