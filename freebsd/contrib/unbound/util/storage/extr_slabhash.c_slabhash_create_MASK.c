
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct slabhash {size_t size; int mask; struct lruhash** array; scalar_t__ shift; } ;
struct lruhash {int dummy; } ;
typedef int lruhash_sizefunc_type ;
typedef int lruhash_delkeyfunc_type ;
typedef int lruhash_deldatafunc_type ;
typedef int lruhash_compfunc_type ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (struct slabhash*) ;
 int FUNC_2 (int) ;
 struct lruhash* FUNC_3 (size_t,size_t,int ,int ,int ,int ,void*) ;
 int FUNC_4 (struct slabhash*) ;

struct slabhash* FUNC_5(size_t VAR_0, size_t VAR_1,
 size_t VAR_2, lruhash_sizefunc_type VAR_3,
 lruhash_compfunc_type VAR_4, lruhash_delkeyfunc_type VAR_5,
 lruhash_deldatafunc_type VAR_6, void* VAR_7)
{
 size_t VAR_8;
 struct slabhash* VAR_9 = (struct slabhash*)FUNC_0(1,
  sizeof(struct slabhash));
 if(!VAR_9) return ((void*)0);
 VAR_9->size = VAR_0;
 FUNC_2(VAR_9->size > 0);
 VAR_9->array = (struct lruhash**)FUNC_0(VAR_9->size, sizeof(struct lruhash*));
 if(!VAR_9->array) {
  FUNC_1(VAR_9);
  return ((void*)0);
 }
 VAR_9->mask = (uint32_t)(VAR_9->size - 1);
 if(VAR_9->mask == 0) {
  VAR_9->shift = 0;
 } else {
  FUNC_2( (VAR_9->size & VAR_9->mask) == 0
                                 );
  VAR_9->shift = 0;
  while(!(VAR_9->mask & 0x80000000)) {
   VAR_9->mask <<= 1;
   VAR_9->shift ++;
  }
 }
 for(VAR_8=0; VAR_8<VAR_9->size; VAR_8++) {
  VAR_9->array[VAR_8] = FUNC_3(VAR_1, VAR_2 / VAR_9->size,
   VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
  if(!VAR_9->array[VAR_8]) {
   FUNC_4(VAR_9);
   return ((void*)0);
  }
 }
 return VAR_9;
}
