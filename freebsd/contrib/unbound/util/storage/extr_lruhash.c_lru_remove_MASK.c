
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lruhash_entry {TYPE_2__* lru_prev; TYPE_1__* lru_next; } ;
struct lruhash {TYPE_2__* lru_end; TYPE_1__* lru_start; } ;
struct TYPE_4__ {TYPE_1__* lru_next; } ;
struct TYPE_3__ {TYPE_2__* lru_prev; } ;



void
FUNC_0(struct lruhash* VAR_0, struct lruhash_entry* VAR_1)
{
 if(VAR_1->lru_prev)
  VAR_1->lru_prev->lru_next = VAR_1->lru_next;
 else VAR_0->lru_start = VAR_1->lru_next;
 if(VAR_1->lru_next)
  VAR_1->lru_next->lru_prev = VAR_1->lru_prev;
 else VAR_0->lru_end = VAR_1->lru_prev;
}
