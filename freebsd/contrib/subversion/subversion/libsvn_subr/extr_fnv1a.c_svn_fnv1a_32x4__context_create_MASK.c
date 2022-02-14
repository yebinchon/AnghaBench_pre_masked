
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ buffered; void** hashes; } ;
typedef TYPE_1__ svn_fnv1a_32x4__context_t ;
typedef int apr_pool_t ;


 void* VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int) ;

svn_fnv1a_32x4__context_t *
FUNC_1(apr_pool_t *VAR_1)
{
  svn_fnv1a_32x4__context_t *VAR_2 = FUNC_0(VAR_1, sizeof(*VAR_2));

  VAR_2->hashes[0] = VAR_0;
  VAR_2->hashes[1] = VAR_0;
  VAR_2->hashes[2] = VAR_0;
  VAR_2->hashes[3] = VAR_0;

  VAR_2->buffered = 0;

  return VAR_2;
}
