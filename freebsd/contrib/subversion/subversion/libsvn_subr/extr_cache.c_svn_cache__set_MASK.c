
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_6__ {int cache_internal; TYPE_1__* vtable; int writes; } ;
typedef TYPE_2__ svn_cache__t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int (* set ) (int ,void const*,void*,int *) ;} ;


 int * FUNC_0 (TYPE_2__*,int ,int *) ;
 int FUNC_1 (int ,void const*,void*,int *) ;

svn_error_t *
FUNC_2(svn_cache__t *VAR_0,
               const void *VAR_1,
               void *VAR_2,
               apr_pool_t *VAR_3)
{
  VAR_0->writes++;
  return FUNC_0(VAR_0,
                      (VAR_0->vtable->set)(VAR_0->cache_internal,
                                           VAR_1,
                                           VAR_2,
                                           VAR_3),
                      VAR_3);
}
