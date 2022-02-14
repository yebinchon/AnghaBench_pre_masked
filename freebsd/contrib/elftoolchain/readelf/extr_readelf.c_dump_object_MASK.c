
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct readelf {int flags; char* filename; int * elf; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (struct readelf*,int) ;
 int FUNC_1 (struct readelf*) ;
 int * FUNC_2 (int,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static void
FUNC_8(struct readelf *VAR_2, int VAR_3)
{
 if ((VAR_2->flags & VAR_0) != 0)
  FUNC_6("\nFile: %s\n", VAR_2->filename);

 if ((VAR_2->elf = FUNC_2(VAR_3, VAR_1, ((void*)0))) == ((void*)0)) {
  FUNC_7("elf_begin() failed: %s", FUNC_4(-1));
  return;
 }

 switch (FUNC_5(VAR_2->elf)) {
 case 128:
  FUNC_7("Not an ELF file.");
  return;
 case 129:
  FUNC_1(VAR_2);
  break;
 case 130:
  FUNC_0(VAR_2, VAR_3);
  break;
 default:
  FUNC_7("Internal: libelf returned unknown elf kind.");
  return;
 }

 FUNC_3(VAR_2->elf);
}
