
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lruhash_entry {struct lruhash_entry* lru_next; struct lruhash_entry* lru_prev; } ;
struct lruhash {struct lruhash_entry* lru_end; struct lruhash_entry* lru_start; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct lruhash*,struct lruhash_entry*) ;

void
FUNC_2(struct lruhash* VAR_0, struct lruhash_entry* VAR_1)
{
 FUNC_0(VAR_0 && VAR_1);
 if (VAR_1 == VAR_0->lru_end)
  return;

 FUNC_1(VAR_0, VAR_1);

 VAR_1->lru_next = ((void*)0);
 VAR_1->lru_prev = VAR_0->lru_end;

 if (VAR_0->lru_end == ((void*)0))
 {
  VAR_0->lru_start = VAR_1;
 }
 else
 {
  VAR_0->lru_end->lru_next = VAR_1;
 }
 VAR_0->lru_end = VAR_1;
}
