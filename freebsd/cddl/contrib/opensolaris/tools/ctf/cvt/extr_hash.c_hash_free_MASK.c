
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int h_nbuckets; struct TYPE_5__* h_buckets; } ;
typedef TYPE_1__ hash_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__,void (*) (void*,void*),void*) ;

void
FUNC_2(hash_t *VAR_0, void (*VAR_1)(void *, void *), void *VAR_2)
{
 int VAR_3;

 if (VAR_0 == ((void*)0))
  return;

 for (VAR_3 = 0; VAR_3 < VAR_0->h_nbuckets; VAR_3++)
  FUNC_1(VAR_0->h_buckets[VAR_3], VAR_1, VAR_2);
 FUNC_0(VAR_0->h_buckets);
 FUNC_0(VAR_0);
}
