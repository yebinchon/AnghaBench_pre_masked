
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct links_entry {size_t hash; struct links_entry* previous; struct links_entry* next; } ;
struct archive_entry_linkresolver {int number_buckets; struct links_entry** buckets; } ;


 struct links_entry** FUNC_0 (size_t,int) ;
 int FUNC_1 (struct links_entry**) ;

__attribute__((used)) static void
FUNC_2(struct archive_entry_linkresolver *VAR_0)
{
 struct links_entry *VAR_1, **VAR_2;
 size_t VAR_3;
 size_t VAR_4, VAR_5;


 VAR_3 = VAR_0->number_buckets * 2;
 if (VAR_3 < VAR_0->number_buckets)
  return;
 VAR_2 = FUNC_0(VAR_3, sizeof(struct links_entry *));

 if (VAR_2 == ((void*)0))
  return;

 for (VAR_4 = 0; VAR_4 < VAR_0->number_buckets; VAR_4++) {
  while (VAR_0->buckets[VAR_4] != ((void*)0)) {

   VAR_1 = VAR_0->buckets[VAR_4];
   VAR_0->buckets[VAR_4] = VAR_1->next;


   VAR_5 = VAR_1->hash & (VAR_3 - 1);

   if (VAR_2[VAR_5] != ((void*)0))
    VAR_2[VAR_5]->previous = VAR_1;
   VAR_1->next = VAR_2[VAR_5];
   VAR_1->previous = ((void*)0);
   VAR_2[VAR_5] = VAR_1;
  }
 }
 FUNC_1(VAR_0->buckets);
 VAR_0->buckets = VAR_2;
 VAR_0->number_buckets = VAR_3;
}
