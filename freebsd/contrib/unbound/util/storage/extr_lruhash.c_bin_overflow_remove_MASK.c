
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lruhash_entry {struct lruhash_entry* overflow_next; } ;
struct lruhash_bin {struct lruhash_entry* overflow_list; } ;



void
FUNC_0(struct lruhash_bin* VAR_0, struct lruhash_entry* VAR_1)
{
 struct lruhash_entry* VAR_2 = VAR_0->overflow_list;
 struct lruhash_entry** VAR_3 = &VAR_0->overflow_list;
 while(VAR_2) {
  if(VAR_2 == VAR_1) {
   *VAR_3 = VAR_2->overflow_next;
   return;
  }
  VAR_3 = &VAR_2->overflow_next;
  VAR_2 = VAR_2->overflow_next;
 }
}
