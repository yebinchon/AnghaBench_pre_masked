
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct stat {int st_size; } ;
struct TYPE_6__ {scalar_t__ e_shnum; scalar_t__ e_type; } ;
struct TYPE_5__ {scalar_t__ sh_type; int sh_flags; int sh_size; int sh_offset; } ;
typedef TYPE_1__ GElf_Shdr ;
typedef TYPE_2__ GElf_Ehdr ;
typedef int FILE ;
typedef int Elf_Scn ;
typedef int Elf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int * FUNC_0 (int,int ,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int *,int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*,int *,int ,int ) ;
 scalar_t__ FUNC_6 (int,struct stat*) ;
 int * FUNC_7 (int *,TYPE_2__*) ;
 int * FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (char const*,int *,int ) ;
 int FUNC_10 (int,int ,int ) ;
 int FUNC_11 (char*,char const*) ;

int
FUNC_12(const char *VAR_7, FILE *VAR_8)
{
 struct stat VAR_9;
 GElf_Ehdr VAR_10;
 GElf_Shdr VAR_11;
 Elf *VAR_12;
 Elf_Scn *VAR_13;
 int VAR_14, VAR_15;

 VAR_14 = 0;
 VAR_15 = FUNC_4(VAR_8);
 if (FUNC_6(VAR_15, &VAR_9) < 0)
  return (1);


 if (VAR_6)
  return (FUNC_9(VAR_7, VAR_8, VAR_9.st_size));

 (void)FUNC_10(VAR_15, 0, VAR_3);
 VAR_12 = FUNC_0(VAR_15, VAR_0, ((void*)0));
 if (FUNC_2(VAR_12) != VAR_1) {
  (void)FUNC_1(VAR_12);
  return (FUNC_9(VAR_7, VAR_8, VAR_9.st_size));
 }

 if (FUNC_7(VAR_12, &VAR_10) == ((void*)0)) {
  (void)FUNC_1(VAR_12);
  FUNC_11("%s: ELF file could not be processed", VAR_7);
  return (1);
 }

 if (VAR_10.e_shnum == 0 && VAR_10.e_type == VAR_2) {
  (void)FUNC_1(VAR_12);
  return (FUNC_9(VAR_7, VAR_8, VAR_9.st_size));
 } else {
  VAR_13 = ((void*)0);
  while ((VAR_13 = FUNC_3(VAR_12, VAR_13)) != ((void*)0)) {
   if (FUNC_8(VAR_13, &VAR_11) == ((void*)0))
    continue;
   if (VAR_11.sh_type != VAR_5 &&
       (VAR_11.sh_flags & VAR_4) != 0) {
    VAR_14 = FUNC_5(VAR_7, VAR_8, VAR_11.sh_offset,
        VAR_11.sh_size);
   }
  }
 }
 (void)FUNC_1(VAR_12);
 return (VAR_14);
}
