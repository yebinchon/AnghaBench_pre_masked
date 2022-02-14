
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int shift; scalar_t__ used; } ;
typedef TYPE_1__ hash_t ;
typedef int hash_key_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (TYPE_1__*,int,int *) ;

__attribute__((used)) static void
FUNC_1(hash_t *VAR_0,
          apr_size_t VAR_1,
          apr_pool_t *VAR_2)
{
  VAR_0->used = 0;
  VAR_0->shift = sizeof(hash_key_t) * 8 - VAR_1;

  FUNC_0(VAR_0, 1 << VAR_1, VAR_2);
}
