
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char* uintmax_t ;
struct readelf {int options; char* filename; int * ar; int * elf; } ;
typedef scalar_t__ off_t ;
struct TYPE_6__ {char* ar_name; } ;
struct TYPE_5__ {char* as_name; scalar_t__ as_off; } ;
typedef int Elf_Cmd ;
typedef TYPE_1__ Elf_Arsym ;
typedef TYPE_2__ Elf_Arhdr ;
typedef int Elf ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct readelf*) ;
 void* FUNC_1 (int,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 TYPE_2__* FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *,size_t*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (char*,char*,...) ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 (char*,int ) ;

__attribute__((used)) static void
FUNC_11(struct readelf *VAR_3, int VAR_4)
{
 Elf_Arsym *VAR_5;
 Elf_Arhdr *VAR_6;
 Elf_Cmd VAR_7;
 Elf *VAR_8;
 size_t VAR_9;
 off_t VAR_10;
 int VAR_11;

 VAR_3->ar = VAR_3->elf;

 if (VAR_3->options & VAR_1) {
  if ((VAR_5 = FUNC_5(VAR_3->ar, &VAR_9)) == ((void*)0)) {
   FUNC_10("elf_getarsym() failed: %s", FUNC_3(-1));
   goto process_members;
  }
  FUNC_8("Index of archive %s: (%ju entries)\n", VAR_3->filename,
      (uintmax_t) VAR_9 - 1);
  VAR_10 = 0;
  for (VAR_11 = 0; (size_t) VAR_11 < VAR_9; VAR_11++) {
   if (VAR_5[VAR_11].as_name == ((void*)0))
    break;
   if (VAR_5[VAR_11].as_off != VAR_10) {
    VAR_10 = VAR_5[VAR_11].as_off;
    if (FUNC_7(VAR_3->ar, VAR_10) != VAR_10) {
     FUNC_10("elf_rand() failed: %s",
         FUNC_3(-1));
     continue;
    }
    if ((VAR_8 = FUNC_1(VAR_4, VAR_0, VAR_3->ar)) ==
        ((void*)0)) {
     FUNC_10("elf_begin() failed: %s",
         FUNC_3(-1));
     continue;
    }
    if ((VAR_6 = FUNC_4(VAR_8)) == ((void*)0)) {
     FUNC_10("elf_getarhdr() failed: %s",
         FUNC_3(-1));
     FUNC_2(VAR_8);
     continue;
    }
    FUNC_8("Binary %s(%s) contains:\n",
        VAR_3->filename, VAR_6->ar_name);
   }
   FUNC_8("\t%s\n", VAR_5[VAR_11].as_name);
  }
  if (FUNC_7(VAR_3->ar, VAR_2) != VAR_2) {
   FUNC_10("elf_rand() failed: %s", FUNC_3(-1));
   return;
  }
 }

process_members:

 if ((VAR_3->options & ~VAR_1) == 0)
  return;

 VAR_7 = VAR_0;
 while ((VAR_3->elf = FUNC_1(VAR_4, VAR_7, VAR_3->ar)) != ((void*)0)) {
  if ((VAR_6 = FUNC_4(VAR_3->elf)) == ((void*)0)) {
   FUNC_10("elf_getarhdr() failed: %s", FUNC_3(-1));
   goto next_member;
  }
  if (FUNC_9(VAR_6->ar_name, "/") == 0 ||
      FUNC_9(VAR_6->ar_name, "//") == 0 ||
      FUNC_9(VAR_6->ar_name, "__.SYMDEF") == 0)
   goto next_member;
  FUNC_8("\nFile: %s(%s)\n", VAR_3->filename, VAR_6->ar_name);
  FUNC_0(VAR_3);

 next_member:
  VAR_7 = FUNC_6(VAR_3->elf);
  FUNC_2(VAR_3->elf);
 }
 VAR_3->elf = VAR_3->ar;
}
