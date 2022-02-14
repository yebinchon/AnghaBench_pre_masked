
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ klen; } ;
typedef TYPE_1__ inprocess_cache_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 void const* FUNC_0 (int *,void const*,scalar_t__) ;
 void const* FUNC_1 (int *,void const*) ;

__attribute__((used)) static const void *
FUNC_2(inprocess_cache_t *VAR_1,
              const void *VAR_2,
              apr_pool_t *VAR_3)
{
  if (VAR_1->klen == VAR_0)
    return FUNC_1(VAR_3, VAR_2);
  else
    return FUNC_0(VAR_3, VAR_2, VAR_1->klen);
}
