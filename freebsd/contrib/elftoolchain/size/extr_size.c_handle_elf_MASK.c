
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {char const* ar_name; } ;
struct TYPE_8__ {scalar_t__ e_shnum; scalar_t__ e_type; } ;
typedef int GElf_Shdr ;
typedef TYPE_1__ GElf_Ehdr ;
typedef int Elf_Scn ;
typedef int Elf_Cmd ;
typedef TYPE_2__ Elf_Arhdr ;
typedef int Elf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char const*,char const*,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int * FUNC_4 (int,int ,int *) ;
 int FUNC_5 (int *) ;
 TYPE_2__* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *,int *) ;
 int * FUNC_10 (int *,TYPE_1__*) ;
 int * FUNC_11 (int *,int *) ;
 int FUNC_12 (char const*,int *,TYPE_1__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_13 (int *,TYPE_1__*,int *) ;
 int FUNC_14 () ;
 int FUNC_15 (char const*,TYPE_2__*) ;
 int FUNC_16 (char*,char const*) ;

__attribute__((used)) static int
FUNC_17(int VAR_8, const char *VAR_9)
{
 GElf_Ehdr VAR_10;
 GElf_Shdr VAR_11;
 Elf *VAR_12, *VAR_13;
 Elf_Arhdr *VAR_14;
 Elf_Scn *VAR_15;
 Elf_Cmd VAR_16;
 int VAR_17;

 VAR_16 = VAR_0;
 VAR_13 = FUNC_4(VAR_8, VAR_16, ((void*)0));
 while ((VAR_12 = FUNC_4(VAR_8, VAR_16, VAR_13)) != ((void*)0)) {
  VAR_14 = FUNC_6(VAR_12);
  if (FUNC_7(VAR_12) == VAR_2 && VAR_14 == ((void*)0)) {
   (void) FUNC_5(VAR_12);
   (void) FUNC_5(VAR_13);
   (void) FUNC_3(VAR_8);
   return (VAR_4);
  }
  if (FUNC_7(VAR_12) != VAR_1 ||
      (FUNC_10(VAR_12, &VAR_10) == ((void*)0))) {
   VAR_16 = FUNC_8(VAR_12);
   (void) FUNC_5(VAR_12);
   FUNC_16("%s: File format not recognized",
       VAR_14 != ((void*)0) ? VAR_14->ar_name : VAR_9);
   continue;
  }

  if (VAR_10.e_shnum == 0 && VAR_10.e_type == VAR_3) {
   VAR_17 = FUNC_12(VAR_9, VAR_12, &VAR_10);
   (void) FUNC_5(VAR_12);
   (void) FUNC_5(VAR_13);
   (void) FUNC_3(VAR_8);
   return (VAR_17);
  } else {
   VAR_15 = ((void*)0);
   if (VAR_7 == VAR_6) {
    FUNC_2();
    while ((VAR_15 = FUNC_9(VAR_12, VAR_15)) != ((void*)0)) {
     if (FUNC_11(VAR_15, &VAR_11) != ((void*)0))
      FUNC_0(&VAR_11);
    }
   } else {
    FUNC_15(VAR_9, VAR_14);
    VAR_15 = ((void*)0);
    while ((VAR_15 = FUNC_9(VAR_12, VAR_15)) != ((void*)0)) {
     if (FUNC_11(VAR_15, &VAR_11) != ((void*)0))
      FUNC_13(VAR_12, &VAR_10, &VAR_11);
    }
   }
   if (VAR_7 == VAR_6) {
    if (VAR_14 != ((void*)0)) {
     FUNC_1(VAR_9, VAR_14->ar_name,
         "ex");
    } else {
     FUNC_1(VAR_9, ((void*)0), "ex");
    }
   } else {
    FUNC_14();
   }
  }
  VAR_16 = FUNC_8(VAR_12);
  (void) FUNC_5(VAR_12);
 }
 (void) FUNC_5(VAR_13);
 (void) FUNC_3(VAR_8);
 return (VAR_5);
}
