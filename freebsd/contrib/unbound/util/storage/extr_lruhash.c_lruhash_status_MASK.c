
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lruhash_entry {struct lruhash_entry* overflow_next; } ;
struct lruhash {int num; int space_used; size_t size; int size_mask; int lock; TYPE_1__* array; scalar_t__ space_max; } ;
struct TYPE_2__ {int lock; struct lruhash_entry* overflow_list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;

void
FUNC_3(struct lruhash* VAR_0, const char* VAR_1, int VAR_2)
{
 FUNC_0(&VAR_0->lock);
 FUNC_2("%s: %u entries, memory %u / %u",
  VAR_1, (unsigned)VAR_0->num, (unsigned)VAR_0->space_used,
  (unsigned)VAR_0->space_max);
 FUNC_2("  itemsize %u, array %u, mask %d",
  (unsigned)(VAR_0->num? VAR_0->space_used/VAR_0->num : 0),
  (unsigned)VAR_0->size, VAR_0->size_mask);
 if(VAR_2) {
  size_t VAR_3;
  int VAR_4=(int)VAR_0->size*2, VAR_5=-2;
  for(VAR_3=0; VAR_3<VAR_0->size; VAR_3++) {
   int VAR_6 = 0;
   struct lruhash_entry *VAR_7;
   FUNC_0(&VAR_0->array[VAR_3].lock);
   VAR_7 = VAR_0->array[VAR_3].overflow_list;
   while(VAR_7) {
    VAR_6 ++;
    VAR_7 = VAR_7->overflow_next;
   }
   FUNC_1(&VAR_0->array[VAR_3].lock);
   if(VAR_2 >= 2)
    FUNC_2("bin[%d] %d", (int)VAR_3, VAR_6);
   if(VAR_6 > VAR_5) VAR_5 = VAR_6;
   if(VAR_6 < VAR_4) VAR_4 = VAR_6;
  }
  FUNC_2("  bin min %d, avg %.2lf, max %d", VAR_4,
   (double)VAR_0->num/(double)VAR_0->size, VAR_5);
 }
 FUNC_1(&VAR_0->lock);
}
