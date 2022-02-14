
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct hashtab {int size; int (* hash_value ) (struct hashtab*,void const*) ;int (* keycmp ) (struct hashtab*,void const*,void const*) ;int ** htable; scalar_t__ nel; } ;


 int VAR_0 ;
 int FUNC_0 (struct hashtab*) ;
 int ** FUNC_1 (int,int ) ;
 struct hashtab* FUNC_2 (int,int ) ;

struct hashtab *FUNC_3(u32 (*VAR_1)(struct hashtab *VAR_2, const void *VAR_3),
          int (*VAR_4)(struct hashtab *VAR_5, const void *VAR_6, const void *VAR_7),
          u32 VAR_8)
{
 struct hashtab *VAR_9;
 u32 VAR_10;

 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_0);
 if (VAR_9 == ((void*)0))
  return VAR_9;

 VAR_9->size = VAR_8;
 VAR_9->nel = 0;
 VAR_9->hash_value = VAR_1;
 VAR_9->keycmp = VAR_4;
 VAR_9->htable = FUNC_1(sizeof(*(VAR_9->htable)) * VAR_8, VAR_0);
 if (VAR_9->htable == ((void*)0)) {
  FUNC_0(VAR_9);
  return ((void*)0);
 }

 for (VAR_10 = 0; VAR_10 < VAR_8; VAR_10++)
  VAR_9->htable[VAR_10] = ((void*)0);

 return VAR_9;
}
