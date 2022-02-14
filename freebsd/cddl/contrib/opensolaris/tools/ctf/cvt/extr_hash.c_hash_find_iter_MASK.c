
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct hash_data {int (* hd_fun ) (void*,void*) ;void* hd_private; void* hd_key; TYPE_1__* hd_hash; } ;
struct TYPE_3__ {int (* h_hashfn ) (int ,void*) ;int * h_buckets; int h_nbuckets; } ;
typedef TYPE_1__ hash_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct hash_data*) ;
 int FUNC_1 (int ,void*) ;

int
FUNC_2(hash_t *VAR_1, void *VAR_2, int (*VAR_3)(void *, void *),
    void *VAR_4)
{
 int VAR_5 = VAR_1->h_hashfn(VAR_1->h_nbuckets, VAR_2);
 struct hash_data VAR_6;

 VAR_6.hd_hash = VAR_1;
 VAR_6.hd_fun = VAR_3;
 VAR_6.hd_key = VAR_2;
 VAR_6.hd_private = VAR_4;

 return (FUNC_0(VAR_1->h_buckets[VAR_5], VAR_0,
     &VAR_6));
}
