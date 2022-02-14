
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ off_t ;
struct TYPE_6__ {char* ar_name; char* ar_rawname; } ;
struct TYPE_5__ {scalar_t__ as_off; char* as_name; } ;
typedef int Elf_Cmd ;
typedef TYPE_1__ Elf_Arsym ;
typedef TYPE_2__ Elf_Arhdr ;
typedef int Elf ;


 int VAR_0 ;
 int * FUNC_0 (int,int ,int *) ;
 int FUNC_1 (int *) ;
 TYPE_2__* FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *,size_t*) ;
 scalar_t__ FUNC_4 (int *,scalar_t__) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void
FUNC_6(int VAR_1, Elf *VAR_2)
{
 Elf *VAR_3;
 Elf_Arhdr *VAR_4;
 Elf_Arsym *VAR_5;
 Elf_Cmd VAR_6;
 off_t VAR_7;
 size_t VAR_8;

 if (VAR_2 == ((void*)0))
  return;

 if ((VAR_5 = FUNC_3(VAR_2, &VAR_8)) == ((void*)0))
  return;

 FUNC_5("\nArchive index:\n");

 VAR_7 = VAR_5->as_off;
 VAR_6 = VAR_0;
 while (VAR_8 > 1) {
  if (FUNC_4(VAR_2, VAR_5->as_off) == VAR_5->as_off &&
      (VAR_3 = FUNC_0(VAR_1, VAR_6, VAR_2)) != ((void*)0)) {
   if ((VAR_4 = FUNC_2(VAR_3)) != ((void*)0))
    FUNC_5("%s in %s\n", VAR_5->as_name,
        VAR_4->ar_name != ((void*)0) ?
        VAR_4->ar_name : VAR_4->ar_rawname);
   FUNC_1(VAR_3);
  }
  ++VAR_5;
  --VAR_8;
 }

 FUNC_4(VAR_2, VAR_7);
}
