
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry {struct entry* e_sibling; struct entry* e_entries; struct entry* e_parent; } ;


 int FUNC_0 (struct entry*,char*) ;

__attribute__((used)) static void
FUNC_1(struct entry *VAR_0)
{
 struct entry *VAR_1;

 VAR_1 = VAR_0->e_parent;
 if (VAR_1->e_entries == VAR_0) {
  VAR_1->e_entries = VAR_0->e_sibling;
 } else {
  for (VAR_1 = VAR_1->e_entries; VAR_1 != ((void*)0); VAR_1 = VAR_1->e_sibling) {
   if (VAR_1->e_sibling == VAR_0) {
    VAR_1->e_sibling = VAR_0->e_sibling;
    break;
   }
  }
  if (VAR_1 == ((void*)0))
   FUNC_0(VAR_0, "cannot find entry in parent list");
 }
}
