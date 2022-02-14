
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_iter_apr_hash_cb_t ;
typedef int svn_error_t ;
struct TYPE_5__ {int cache_internal; TYPE_1__* vtable; scalar_t__ pretend_empty; } ;
typedef TYPE_2__ svn_cache__t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
struct TYPE_4__ {int * (* iter ) (int *,int ,int ,void*,int *) ;} ;


 int * VAR_0 ;
 int * FUNC_0 (int *,int ,int ,void*,int *) ;

svn_error_t *
FUNC_1(svn_boolean_t *VAR_1,
                svn_cache__t *VAR_2,
                svn_iter_apr_hash_cb_t VAR_3,
                void *VAR_4,
                apr_pool_t *VAR_5)
{






  return (VAR_2->vtable->iter)(VAR_1,
                               VAR_2->cache_internal,
                               VAR_3,
                               VAR_4,
                               VAR_5);
}
