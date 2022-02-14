
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int list_t ;
struct TYPE_4__ {int h_nbuckets; int (* h_hashfn ) (int,void*) ;int (* h_cmp ) (void*,void*) ;int h_buckets; } ;
typedef TYPE_1__ hash_t ;


 int FUNC_0 (void*,void*) ;
 int FUNC_1 (int,void*) ;
 int FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (int) ;

hash_t *
FUNC_4(int VAR_0, int (*VAR_1)(int, void *), int (*VAR_2)(void *, void *))
{
 hash_t *VAR_3;

 VAR_3 = FUNC_3(sizeof (hash_t));
 VAR_3->h_buckets = FUNC_2(sizeof (list_t *) * VAR_0);
 VAR_3->h_nbuckets = VAR_0;
 VAR_3->h_hashfn = VAR_1 ? VAR_1 : FUNC_1;
 VAR_3->h_cmp = VAR_2 ? VAR_2 : FUNC_0;

 return (VAR_3);
}
