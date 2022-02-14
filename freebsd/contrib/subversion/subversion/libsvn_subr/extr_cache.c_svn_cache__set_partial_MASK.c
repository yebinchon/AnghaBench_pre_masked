
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_6__ {int cache_internal; TYPE_1__* vtable; int writes; } ;
typedef TYPE_2__ svn_cache__t ;
typedef int svn_cache__partial_setter_func_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int (* set_partial ) (int ,void const*,int ,void*,int *) ;} ;


 int * FUNC_0 (TYPE_2__*,int ,int *) ;
 int FUNC_1 (int ,void const*,int ,void*,int *) ;

svn_error_t *
FUNC_2(svn_cache__t *VAR_0,
                       const void *VAR_1,
                       svn_cache__partial_setter_func_t VAR_2,
                       void *VAR_3,
                       apr_pool_t *VAR_4)
{
  VAR_0->writes++;
  return FUNC_0(VAR_0,
                      (VAR_0->vtable->set_partial)(VAR_0->cache_internal,
                                                   VAR_1,
                                                   VAR_2,
                                                   VAR_3,
                                                   VAR_4),
                      VAR_4);
}
