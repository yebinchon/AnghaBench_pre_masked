
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* e_ident; } ;
typedef TYPE_1__ GElf_Ehdr ;
typedef scalar_t__ Elf_Kind ;
typedef int Elf ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (char*) ;
 int VAR_15 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int,int ,int *) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int *,int ,int ) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int VAR_16 ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,char*,char*,int) ;
 int * FUNC_13 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_14 (int *,TYPE_1__*) ;
 int FUNC_15 (int,char**,char*,int ,int *) ;
 char* FUNC_16 (int) ;
 int FUNC_17 (char*,int ,int ) ;
 char* VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int VAR_19 ;
 int FUNC_20 () ;
 int FUNC_21 (char*,char*) ;
 int FUNC_22 (char*,...) ;

int
FUNC_23(int VAR_20, char **VAR_21)
{
 GElf_Ehdr VAR_22;
 Elf *VAR_23;
 Elf_Kind VAR_24;
 int VAR_25 = VAR_1;
 int VAR_26 = 0;
 int VAR_27, VAR_28 = 0, VAR_29 = 0, VAR_30 = 0;

 if (FUNC_8(VAR_10) == VAR_11)
  FUNC_10(VAR_12, "elf_version error");

 while ((VAR_27 = FUNC_15(VAR_20, VAR_21, "Vf:hlt:v", VAR_15,
  ((void*)0))) != -1)
  switch (VAR_27) {
  case 'f':
   if (VAR_28)
    FUNC_10(VAR_12, "ERROR: the -f option is "
        "incompatible with the -t option.");
   VAR_29 = 1;
   VAR_25 = FUNC_0(VAR_17);
   if (VAR_16 == VAR_9 || VAR_25 < 0 || VAR_25 > 255) {
    FUNC_22("ERROR: invalid argument to option "
        "-f: %s", VAR_17);
    FUNC_20();
   }
   break;
  case 'h':
   FUNC_20();
   break;
  case 'l':
   FUNC_18();
   VAR_30 = 1;
   break;
  case 'v':

   break;
  case 't':
   if (VAR_29)
    FUNC_10(VAR_12, "the -t option is "
        "incompatible with the -f option.");
   if ((VAR_25 = FUNC_9(VAR_17)) == -1) {
    FUNC_22("ERROR: invalid ELF type '%s'", VAR_17);
    FUNC_20();
   }

   VAR_28 = 1;
   break;
  case 'V':
   FUNC_19();
   break;
  default:
   FUNC_20();
 }
 VAR_20 -= VAR_18;
 VAR_21 += VAR_18;
 if (!VAR_20) {
  if (VAR_30)
   FUNC_11(0);
  else {
   FUNC_22("no file(s) specified");
   FUNC_20();
  }
 }

 while (VAR_20) {
  int VAR_31;

  VAR_23 = ((void*)0);

  if ((VAR_31 = FUNC_17(VAR_21[0], (VAR_28 || VAR_29) ? VAR_14 :
      VAR_13, 0)) < 0) {
   FUNC_21("error opening file %s", VAR_21[0]);
   VAR_26 = 1;
   goto fail;
  }

  if ((VAR_23 = FUNC_2(VAR_31, (VAR_28 || VAR_29) ? VAR_2 :
      VAR_3, ((void*)0))) == ((void*)0)) {
   FUNC_22("elf_begin failed: %s", FUNC_4(-1));
   VAR_26 = 1;
   goto fail;
  }

  if ((VAR_24 = FUNC_6(VAR_23)) != VAR_8) {
   if (VAR_24 == VAR_7)
    FUNC_22("file '%s' is an archive.", VAR_21[0]);
   else
    FUNC_22("file '%s' is not an ELF file.",
        VAR_21[0]);
   VAR_26 = 1;
   goto fail;
  }

  if (FUNC_13(VAR_23, &VAR_22) == ((void*)0)) {
   FUNC_22("gelf_getehdr: %s", FUNC_4(-1));
   VAR_26 = 1;
   goto fail;
  }

  if (!VAR_28 && !VAR_29) {
   FUNC_12(VAR_19,
       "File '%s' is of brand '%s' (%u).\n",
       VAR_21[0], FUNC_16(VAR_22.e_ident[VAR_0]),
       VAR_22.e_ident[VAR_0]);
   if (!FUNC_16(VAR_25)) {
    FUNC_22("ELF ABI Brand '%u' is unknown",
          VAR_25);
    FUNC_18();
   }
  } else {




   if (FUNC_5(VAR_23, VAR_4, VAR_6) == 0) {
    FUNC_22("elf_flagelf failed: %s",
        FUNC_4(-1));
    VAR_26 = 1;
    goto fail;
   }




   VAR_22.e_ident[VAR_0] = (unsigned char) VAR_25;
   if (FUNC_14(VAR_23, &VAR_22) == 0) {
    FUNC_22("gelf_update_ehdr error: %s",
        FUNC_4(-1));
    VAR_26 = 1;
    goto fail;
   }




   if (FUNC_7(VAR_23, VAR_5) == -1) {
    FUNC_22("elf_update error: %s", FUNC_4(-1));
    VAR_26 = 1;
    goto fail;
   }
  }
fail:

  if (VAR_23)
   FUNC_3(VAR_23);

  if (VAR_31 >= 0 && FUNC_1(VAR_31) == -1) {
   FUNC_22("%s: close error", VAR_21[0]);
   VAR_26 = 1;
  }

  VAR_20--;
  VAR_21++;
 }

 return (VAR_26);
}
