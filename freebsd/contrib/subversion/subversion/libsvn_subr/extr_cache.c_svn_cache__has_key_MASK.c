
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_6__ {int cache_internal; TYPE_1__* vtable; scalar_t__ pretend_empty; } ;
typedef TYPE_2__ svn_cache__t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int (* has_key ) (int *,int ,void const*,int *) ;} ;


 int VAR_0 ;
 int * VAR_1 ;
 int * FUNC_0 (TYPE_2__*,int ,int *) ;
 int FUNC_1 (int *,int ,void const*,int *) ;

svn_error_t *
FUNC_2(svn_boolean_t *VAR_2,
                   svn_cache__t *VAR_3,
                   const void *VAR_4,
                   apr_pool_t *VAR_5)
{
  *VAR_2 = VAR_0;





  return FUNC_0(VAR_3,
                      (VAR_3->vtable->has_key)(VAR_2,
                                               VAR_3->cache_internal,
                                               VAR_4,
                                               VAR_5),
                      VAR_5);
}
