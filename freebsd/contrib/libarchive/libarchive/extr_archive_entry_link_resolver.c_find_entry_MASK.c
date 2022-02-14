
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct links_entry {size_t hash; scalar_t__ links; struct links_entry* next; TYPE_1__* previous; struct archive_entry* canonical; struct archive_entry* entry; } ;
struct archive_entry_linkresolver {int number_buckets; struct links_entry* spare; int number_entries; struct links_entry** buckets; } ;
struct archive_entry {int dummy; } ;
typedef int int64_t ;
typedef int dev_t ;
struct TYPE_2__ {struct links_entry* next; } ;


 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct links_entry*) ;

__attribute__((used)) static struct links_entry *
FUNC_4(struct archive_entry_linkresolver *VAR_0,
    struct archive_entry *VAR_1)
{
 struct links_entry *VAR_2;
 size_t VAR_3, VAR_4;
 dev_t VAR_5;
 int64_t VAR_6;


 if (VAR_0->spare != ((void*)0)) {
  FUNC_1(VAR_0->spare->canonical);
  FUNC_1(VAR_0->spare->entry);
  FUNC_3(VAR_0->spare);
  VAR_0->spare = ((void*)0);
 }

 VAR_5 = FUNC_0(VAR_1);
 VAR_6 = FUNC_2(VAR_1);
 VAR_3 = (size_t)(VAR_5 ^ VAR_6);


 VAR_4 = VAR_3 & (VAR_0->number_buckets - 1);
 for (VAR_2 = VAR_0->buckets[VAR_4]; VAR_2 != ((void*)0); VAR_2 = VAR_2->next) {
  if (VAR_2->hash == VAR_3
      && VAR_5 == FUNC_0(VAR_2->canonical)
      && VAR_6 == FUNC_2(VAR_2->canonical)) {






   --VAR_2->links;
   if (VAR_2->links > 0)
    return (VAR_2);

   if (VAR_2->previous != ((void*)0))
    VAR_2->previous->next = VAR_2->next;
   if (VAR_2->next != ((void*)0))
    VAR_2->next->previous = VAR_2->previous;
   if (VAR_0->buckets[VAR_4] == VAR_2)
    VAR_0->buckets[VAR_4] = VAR_2->next;
   VAR_0->number_entries--;

   VAR_0->spare = VAR_2;
   return (VAR_2);
  }
 }
 return (((void*)0));
}
