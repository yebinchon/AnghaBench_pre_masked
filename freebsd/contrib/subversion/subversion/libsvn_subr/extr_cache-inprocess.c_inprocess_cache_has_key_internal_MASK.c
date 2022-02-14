
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_3__ {int klen; int hash; } ;
typedef TYPE_1__ inprocess_cache_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int * FUNC_0 (int ,void const*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_1(svn_boolean_t *VAR_1,
                                 inprocess_cache_t *VAR_2,
                                 const void *VAR_3,
                                 apr_pool_t *VAR_4)
{
  *VAR_1 = FUNC_0(VAR_2->hash, VAR_3, VAR_2->klen) != ((void*)0);

  return VAR_0;
}
