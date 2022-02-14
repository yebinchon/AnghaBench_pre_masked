
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry {int e_flags; scalar_t__ e_type; struct entry* e_links; } ;
typedef scalar_t__ ino_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct entry*,char*) ;
 struct entry* FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,char*) ;

void
FUNC_3(void)
{
 struct entry *VAR_7;
 ino_t VAR_8;

 FUNC_2(VAR_6, "Check the symbol table.\n");
 for (VAR_8 = VAR_4; VAR_8 < VAR_5; VAR_8++) {
  for (VAR_7 = FUNC_1(VAR_8); VAR_7 != ((void*)0); VAR_7 = VAR_7->e_links) {
   VAR_7->e_flags &= ~VAR_1;
   if (VAR_7->e_type == VAR_3)
    VAR_7->e_flags &= ~(VAR_2|VAR_0);
   if (VAR_7->e_flags != 0)
    FUNC_0(VAR_7, "incomplete operations");
  }
 }
}
