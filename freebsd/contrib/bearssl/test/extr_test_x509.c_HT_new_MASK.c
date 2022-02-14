
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ht_elt ;
struct TYPE_3__ {int num_buckets; int ** buckets; scalar_t__ size; } ;
typedef TYPE_1__ HT ;


 void* FUNC_0 (int) ;

__attribute__((used)) static HT *
FUNC_1(void)
{
 HT *VAR_0;
 size_t VAR_1;

 VAR_0 = FUNC_0(sizeof *VAR_0);
 VAR_0->size = 0;
 VAR_0->num_buckets = 8;
 VAR_0->buckets = FUNC_0(VAR_0->num_buckets * sizeof(ht_elt *));
 for (VAR_1 = 0; VAR_1 < VAR_0->num_buckets; VAR_1 ++) {
  VAR_0->buckets[VAR_1] = ((void*)0);
 }
 return VAR_0;
}
