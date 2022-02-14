
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entry {scalar_t__ e_flags; scalar_t__ e_type; scalar_t__ e_ino; struct entry* e_next; int e_name; struct entry* e_links; int * e_entries; } ;
typedef scalar_t__ ino_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,struct entry*) ;
 int FUNC_1 (struct entry*,char*) ;
 int FUNC_2 (scalar_t__) ;
 struct entry* VAR_2 ;
 int FUNC_3 (int ) ;
 struct entry* FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct entry*) ;

void
FUNC_6(struct entry *VAR_3)
{
 struct entry *VAR_4;
 ino_t VAR_5;

 if (VAR_3->e_flags != VAR_1)
  FUNC_1(VAR_3, "not marked REMOVED");
 if (VAR_3->e_type == VAR_0) {
  if (VAR_3->e_links != ((void*)0))
   FUNC_1(VAR_3, "freeing referenced directory");
  if (VAR_3->e_entries != ((void*)0))
   FUNC_1(VAR_3, "freeing non-empty directory");
 }
 if (VAR_3->e_ino != 0) {
  VAR_4 = FUNC_4(VAR_3->e_ino);
  if (VAR_4 == ((void*)0))
   FUNC_1(VAR_3, "lookupino failed");
  if (VAR_4 == VAR_3) {
   VAR_5 = VAR_3->e_ino;
   FUNC_2(VAR_5);
   if (VAR_3->e_links != ((void*)0))
    FUNC_0(VAR_5, VAR_3->e_links);
  } else {
   for (; VAR_4 != ((void*)0); VAR_4 = VAR_4->e_links) {
    if (VAR_4->e_links == VAR_3) {
     VAR_4->e_links = VAR_3->e_links;
     break;
    }
   }
   if (VAR_4 == ((void*)0))
    FUNC_1(VAR_3, "link not found");
  }
 }
 FUNC_5(VAR_3);
 FUNC_3(VAR_3->e_name);
 VAR_3->e_next = VAR_2;
 VAR_2 = VAR_3;
}
