
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int h_nbuckets; int * h_buckets; } ;
typedef TYPE_1__ hash_t ;


 scalar_t__ FUNC_0 (int ) ;

int
FUNC_1(hash_t *VAR_0)
{
 int VAR_1, VAR_2;

 for (VAR_1 = 0, VAR_2 = 0; VAR_2 < VAR_0->h_nbuckets; VAR_2++)
  VAR_1 += FUNC_0(VAR_0->h_buckets[VAR_2]);

 return (VAR_1);
}
