
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lruhash_bin {int lock; } ;
struct lruhash {int size_mask; int size; struct lruhash_bin* array; int lock; } ;


 int FUNC_0 (struct lruhash_bin*,int) ;
 int FUNC_1 (struct lruhash*,struct lruhash_bin*,int) ;
 struct lruhash_bin* FUNC_2 (int,int) ;
 int FUNC_3 (struct lruhash_bin*) ;
 int FUNC_4 (int *,struct lruhash_bin*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,struct lruhash_bin*) ;
 int FUNC_7 (char*) ;

void
FUNC_8(struct lruhash* VAR_0)
{
 struct lruhash_bin* VAR_1;
 int VAR_2;
 size_t VAR_3;
 if(VAR_0->size_mask == (int)(((size_t)-1)>>1)) {
  FUNC_7("hash array malloc: size_t too small");
  return;
 }

 VAR_1 = FUNC_2(VAR_0->size*2, sizeof(struct lruhash_bin));
 if(!VAR_1) {
  FUNC_7("hash grow: malloc failed");

  return;
 }
 FUNC_0(VAR_1, VAR_0->size*2);
 VAR_2 = (VAR_0->size_mask << 1) | 1;
 FUNC_1(VAR_0, VAR_1, VAR_2);

 FUNC_6(&VAR_0->lock, VAR_0->array);
 for(VAR_3=0; VAR_3<VAR_0->size; VAR_3++) {
  FUNC_5(&VAR_0->array[VAR_3].lock);
 }
 FUNC_3(VAR_0->array);

 VAR_0->size *= 2;
 VAR_0->size_mask = VAR_2;
 VAR_0->array = VAR_1;
 FUNC_4(&VAR_0->lock, VAR_0->array,
  VAR_0->size*sizeof(struct lruhash_bin));
 return;
}
