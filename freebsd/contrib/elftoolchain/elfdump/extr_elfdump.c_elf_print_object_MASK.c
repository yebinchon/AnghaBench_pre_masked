
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elfdump {char* filename; char* archive; int flags; int * elf; } ;


 int VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct elfdump*,int) ;
 int * FUNC_2 (int,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct elfdump*,int) ;
 int FUNC_7 (struct elfdump*) ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,...) ;

__attribute__((used)) static void
FUNC_12(struct elfdump *VAR_3)
{
 int VAR_4;

 if ((VAR_4 = FUNC_8(VAR_3->filename, VAR_1)) == -1) {
  FUNC_10("open %s failed", VAR_3->filename);
  return;
 }
 if ((VAR_3->elf = FUNC_2(VAR_4, VAR_0, ((void*)0))) == ((void*)0)) {
  FUNC_11("elf_begin() failed: %s", FUNC_4(-1));
  return;
 }

 switch (FUNC_5(VAR_3->elf)) {
 case 128:
  FUNC_11("Not an ELF file.");
  return;
 case 129:
  if (VAR_3->flags & VAR_2)
   FUNC_9("\n%s:\n", VAR_3->filename);
  FUNC_7(VAR_3);
  break;
 case 130:

  VAR_3->archive = VAR_3->filename;
  FUNC_6(VAR_3, VAR_4);

  break;
 default:
  FUNC_11("Internal: libelf returned unknown elf kind.");
  return;
 }

 FUNC_3(VAR_3->elf);
}
