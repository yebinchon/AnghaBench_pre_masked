
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* h_hashfn ) (int ,void*) ;int * h_buckets; int h_nbuckets; } ;
typedef TYPE_1__ hash_t ;


 int VAR_0 ;
 int FUNC_0 (int *,void*,int ,TYPE_1__*) ;
 int FUNC_1 (int ,void*) ;

void
FUNC_2(hash_t *VAR_1, void *VAR_2)
{
 int VAR_3 = VAR_1->h_hashfn(VAR_1->h_nbuckets, VAR_2);

 (void) FUNC_0(&VAR_1->h_buckets[VAR_3], VAR_2,
     VAR_0, VAR_1);
}
