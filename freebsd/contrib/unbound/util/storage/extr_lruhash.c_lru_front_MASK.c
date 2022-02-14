
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lruhash_entry {struct lruhash_entry* lru_prev; struct lruhash_entry* lru_next; } ;
struct lruhash {struct lruhash_entry* lru_start; struct lruhash_entry* lru_end; } ;



void
FUNC_0(struct lruhash* VAR_0, struct lruhash_entry* VAR_1)
{
 VAR_1->lru_prev = ((void*)0);
 VAR_1->lru_next = VAR_0->lru_start;
 if(!VAR_0->lru_start)
  VAR_0->lru_end = VAR_1;
 else VAR_0->lru_start->lru_prev = VAR_1;
 VAR_0->lru_start = VAR_1;
}
