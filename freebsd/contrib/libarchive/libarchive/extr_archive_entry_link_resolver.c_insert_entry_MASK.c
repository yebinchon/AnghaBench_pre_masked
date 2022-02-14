
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct links_entry {size_t hash; scalar_t__ links; struct links_entry* previous; struct links_entry* next; int canonical; } ;
struct archive_entry_linkresolver {int number_entries; int number_buckets; struct links_entry** buckets; } ;
struct archive_entry {int dummy; } ;


 int FUNC_0 (struct archive_entry*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (struct archive_entry*) ;
 scalar_t__ FUNC_3 (struct archive_entry*) ;
 struct links_entry* FUNC_4 (int,int) ;
 int FUNC_5 (struct archive_entry_linkresolver*) ;

__attribute__((used)) static struct links_entry *
FUNC_6(struct archive_entry_linkresolver *VAR_0,
    struct archive_entry *VAR_1)
{
 struct links_entry *VAR_2;
 size_t VAR_3, VAR_4;


 VAR_2 = FUNC_4(1, sizeof(struct links_entry));
 if (VAR_2 == ((void*)0))
  return (((void*)0));
 VAR_2->canonical = FUNC_0(VAR_1);


 if (VAR_0->number_entries > VAR_0->number_buckets * 2)
  FUNC_5(VAR_0);

 VAR_3 = (size_t)(FUNC_1(VAR_1) ^ FUNC_2(VAR_1));
 VAR_4 = VAR_3 & (VAR_0->number_buckets - 1);


 if (VAR_0->buckets[VAR_4] != ((void*)0))
  VAR_0->buckets[VAR_4]->previous = VAR_2;
 VAR_0->number_entries++;
 VAR_2->next = VAR_0->buckets[VAR_4];
 VAR_2->previous = ((void*)0);
 VAR_0->buckets[VAR_4] = VAR_2;
 VAR_2->hash = VAR_3;
 VAR_2->links = FUNC_3(VAR_1) - 1;
 return (VAR_2);
}
