
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* h_hashfn ) (int ,void*) ;int * h_buckets; int h_nbuckets; } ;
typedef TYPE_1__ hash_t ;


 int FUNC_0 (int *,void*) ;
 int FUNC_1 (int ,void*) ;

void
FUNC_2(hash_t *VAR_0, void *VAR_1)
{
 int VAR_2 = VAR_0->h_hashfn(VAR_0->h_nbuckets, VAR_1);

 FUNC_0(&VAR_0->h_buckets[VAR_2], VAR_1);
}
