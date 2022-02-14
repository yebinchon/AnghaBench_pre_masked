
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _Elf_Extent_List {int dummy; } ;
struct _Elf_Extent {int dummy; } ;


 struct _Elf_Extent* FUNC_0 (struct _Elf_Extent_List*) ;
 int FUNC_1 (struct _Elf_Extent_List*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct _Elf_Extent*) ;

__attribute__((used)) static void
FUNC_3(struct _Elf_Extent_List *VAR_1)
{
 struct _Elf_Extent *VAR_2;

 while ((VAR_2 = FUNC_0(VAR_1)) != ((void*)0)) {
  FUNC_1(VAR_1, VAR_0);
  FUNC_2(VAR_2);
 }
}
