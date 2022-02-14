
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lruhash_entry {int hash; struct lruhash_entry* overflow_next; } ;
struct lruhash_bin {int lock; struct lruhash_entry* overflow_list; } ;
struct lruhash {int size_mask; size_t size; TYPE_1__* array; } ;
struct TYPE_2__ {int lock; struct lruhash_entry* overflow_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct lruhash* VAR_0, struct lruhash_bin* VAR_1,
 int VAR_2)
{
 size_t VAR_3;
 struct lruhash_entry *VAR_4, *VAR_5;
 struct lruhash_bin* VAR_6;




 int VAR_7 = VAR_2 - VAR_0->size_mask;



 for(VAR_3=0; VAR_3<VAR_0->size; VAR_3++)
 {
  FUNC_0(&VAR_0->array[VAR_3].lock);
  VAR_4 = VAR_0->array[VAR_3].overflow_list;

  FUNC_0(&VAR_1[VAR_3].lock);
  FUNC_0(&VAR_1[VAR_7|VAR_3].lock);
  while(VAR_4) {
   VAR_5 = VAR_4->overflow_next;

   VAR_6 = &VAR_1[VAR_4->hash & VAR_2];
   VAR_4->overflow_next = VAR_6->overflow_list;
   VAR_6->overflow_list = VAR_4;
   VAR_4=VAR_5;
  }
  FUNC_1(&VAR_1[VAR_3].lock);
  FUNC_1(&VAR_1[VAR_7|VAR_3].lock);
  FUNC_1(&VAR_0->array[VAR_3].lock);
 }
}
