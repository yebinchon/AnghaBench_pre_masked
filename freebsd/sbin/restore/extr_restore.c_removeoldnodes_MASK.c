
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry {struct entry* e_next; int * e_entries; } ;


 int FUNC_0 (struct entry*,char*) ;
 int FUNC_1 (struct entry*) ;
 struct entry* VAR_0 ;
 int FUNC_2 (struct entry*) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*) ;

void
FUNC_4(void)
{
 struct entry *VAR_2, **VAR_3;
 long VAR_4;

 FUNC_3(VAR_1, "Remove old nodes (directories).\n");
 do {
  VAR_4 = 0;
  VAR_3 = &VAR_0;
  for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = *VAR_3) {
   if (VAR_2->e_entries != ((void*)0)) {
    VAR_3 = &VAR_2->e_next;
    continue;
   }
   *VAR_3 = VAR_2->e_next;
   FUNC_2(VAR_2);
   FUNC_1(VAR_2);
   VAR_4++;
  }
 } while (VAR_4);
 for (VAR_2 = VAR_0; VAR_2 != ((void*)0); VAR_2 = VAR_2->e_next)
  FUNC_0(VAR_2, "cannot remove, non-empty");
}
