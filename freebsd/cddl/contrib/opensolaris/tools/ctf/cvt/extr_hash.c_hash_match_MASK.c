
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* h_hashfn ) (int ,void*) ;int * h_buckets; int h_nbuckets; } ;
typedef TYPE_1__ hash_t ;


 scalar_t__ FUNC_0 (int ,int (*) (void*,void*),void*) ;
 int FUNC_1 (int ,void*) ;

int
FUNC_2(hash_t *VAR_0, void *VAR_1, int (*VAR_2)(void *, void *),
    void *VAR_3)
{
 int VAR_4 = VAR_0->h_hashfn(VAR_0->h_nbuckets, VAR_1);

 return (FUNC_0(VAR_0->h_buckets[VAR_4], VAR_2, VAR_3) < 0);
}
