
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ print_name; scalar_t__ elem_print_fn; int print_armap; int fileargs; } ;
typedef scalar_t__ Elf_Kind ;
typedef int Elf_Cmd ;
typedef int Elf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * FUNC_2 (int,int ,int *) ;
 int FUNC_3 (int *) ;
 char const* FUNC_4 (int) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,char const*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_9 (int,int *) ;
 int FUNC_10 (char*,char const*) ;
 int FUNC_11 (int *,char const*,scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_12 (char*,char const*) ;
 int FUNC_13 (char*,...) ;

__attribute__((used)) static int
FUNC_14(const char *VAR_6)
{
 Elf *VAR_7, *VAR_8;
 Elf_Cmd VAR_9;
 Elf_Kind VAR_10;
 int VAR_11, VAR_12, VAR_13;

 FUNC_0(VAR_6 != ((void*)0) && "filename is null");

 if ((VAR_11 = FUNC_8(VAR_4.fileargs, VAR_6)) == -1) {
  FUNC_12("'%s'", VAR_6);
  return (1);
 }

 VAR_9 = VAR_0;
 if ((VAR_8 = FUNC_2(VAR_11, VAR_9, (Elf *) ((void*)0))) == ((void*)0)) {
  if ((VAR_13 = FUNC_5()) != 0)
   FUNC_13("elf_begin error: %s", FUNC_4(VAR_13));
  else
   FUNC_13("elf_begin error");
  FUNC_1(VAR_11);
  return (1);
 }

 FUNC_0(VAR_8 != ((void*)0) && "arf is null.");

 VAR_12 = 0;
 if ((VAR_10 = FUNC_6(VAR_8)) == VAR_2) {
  FUNC_13("%s: File format not recognized", VAR_6);
  FUNC_3(VAR_8);
  FUNC_1(VAR_11);
  return (1);
 }
 if (VAR_10 == VAR_1) {
  if (VAR_4.print_name == VAR_3 &&
      VAR_4.elem_print_fn == VAR_5)
   FUNC_10("\n%s:\n", VAR_6);
  if (VAR_4.print_armap == 1)
   FUNC_9(VAR_11, VAR_8);
 }

 while ((VAR_7 = FUNC_2(VAR_11, VAR_9, VAR_8)) != ((void*)0)) {
  VAR_12 |= FUNC_11(VAR_7, VAR_6, VAR_10);





  VAR_9 = FUNC_7(VAR_7);
  FUNC_3(VAR_7);
 }

 FUNC_3(VAR_8);
 FUNC_1(VAR_11);

 return (VAR_12);
}
