
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucl_hash_t ;
typedef scalar_t__ ucl_hash_iter_t ;
struct ucl_hash_real_iter {int cur; int end; } ;



bool
FUNC_0 (ucl_hash_t *VAR_0, ucl_hash_iter_t VAR_1)
{
 struct ucl_hash_real_iter *VAR_2 = (struct ucl_hash_real_iter *)(VAR_1);

 return VAR_2->cur < VAR_2->end - 1;
}
