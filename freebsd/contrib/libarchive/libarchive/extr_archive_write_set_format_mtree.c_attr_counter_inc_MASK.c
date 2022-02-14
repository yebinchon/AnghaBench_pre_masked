
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtree_entry {int dummy; } ;
struct attr_counter {scalar_t__ count; struct attr_counter* next; struct attr_counter* prev; } ;


 struct attr_counter* FUNC_0 (struct mtree_entry*,struct attr_counter*) ;

__attribute__((used)) static int
FUNC_1(struct attr_counter **VAR_0, struct attr_counter *VAR_1,
    struct attr_counter *VAR_2, struct mtree_entry *VAR_3)
{
 struct attr_counter *VAR_4;

 if (VAR_1 != ((void*)0)) {
  VAR_1->count++;
  if (*VAR_0 == VAR_1 || VAR_1->prev->count >= VAR_1->count)
   return (0);
  for (VAR_4 = VAR_1->prev; VAR_4; VAR_4 = VAR_4->prev) {
   if (VAR_4->count >= VAR_1->count)
    break;
  }
  VAR_1->prev->next = VAR_1->next;
  if (VAR_1->next != ((void*)0))
   VAR_1->next->prev = VAR_1->prev;
  if (VAR_4 != ((void*)0)) {
   VAR_1->prev = VAR_4;
   VAR_1->next = VAR_4->next;
   VAR_4->next = VAR_1;
   if (VAR_1->next != ((void*)0))
    VAR_1->next->prev = VAR_1;
  } else {
   VAR_1->prev = ((void*)0);
   VAR_1->next = *VAR_0;
   *VAR_0 = VAR_1;
   VAR_1->next->prev = VAR_1;
  }
 } else if (VAR_2 != ((void*)0)) {
  VAR_1 = FUNC_0(VAR_3, VAR_2);
  if (VAR_1 == ((void*)0))
   return (-1);
  VAR_2->next = VAR_1;
 }
 return (0);
}
