
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct links_entry {struct links_entry* next; TYPE_1__* previous; int * entry; int * canonical; } ;
struct archive_entry_linkresolver {size_t number_buckets; struct links_entry* spare; int number_entries; struct links_entry** buckets; } ;
struct TYPE_2__ {struct links_entry* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct links_entry*) ;

__attribute__((used)) static struct links_entry *
FUNC_2(struct archive_entry_linkresolver *VAR_2, int VAR_3)
{
 struct links_entry *VAR_4;
 size_t VAR_5;


 if (VAR_2->spare != ((void*)0)) {
  FUNC_0(VAR_2->spare->canonical);
  FUNC_0(VAR_2->spare->entry);
  FUNC_1(VAR_2->spare);
  VAR_2->spare = ((void*)0);
 }


 for (VAR_5 = 0; VAR_5 < VAR_2->number_buckets; VAR_5++) {
  for (VAR_4 = VAR_2->buckets[VAR_5]; VAR_4 != ((void*)0); VAR_4 = VAR_4->next) {
   if (VAR_4->entry != ((void*)0) &&
       (VAR_3 & VAR_0) == 0)
    continue;
   if (VAR_4->entry == ((void*)0) &&
       (VAR_3 & VAR_1) == 0)
    continue;

   if (VAR_4->next != ((void*)0))
    VAR_4->next->previous = VAR_4->previous;
   if (VAR_4->previous != ((void*)0))
    VAR_4->previous->next = VAR_4->next;
   else
    VAR_2->buckets[VAR_5] = VAR_4->next;
   VAR_2->number_entries--;

   VAR_2->spare = VAR_4;
   return (VAR_4);
  }
 }
 return (((void*)0));
}
