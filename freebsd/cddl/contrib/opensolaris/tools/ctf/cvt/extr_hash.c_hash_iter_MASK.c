
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int h_nbuckets; int ** h_buckets; } ;
typedef TYPE_1__ hash_t ;


 int FUNC_0 (int *,int (*) (void*,void*),void*) ;

int
FUNC_1(hash_t *VAR_0, int (*VAR_1)(void *, void *), void *VAR_2)
{
 int VAR_3 = 0;
 int VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0->h_nbuckets; VAR_5++) {
  if (VAR_0->h_buckets[VAR_5] != ((void*)0)) {
   if ((VAR_4 = FUNC_0(VAR_0->h_buckets[VAR_5], VAR_1,
       VAR_2)) < 0)
    return (VAR_4);
   VAR_3 += VAR_4;
  }
 }

 return (VAR_3);
}
