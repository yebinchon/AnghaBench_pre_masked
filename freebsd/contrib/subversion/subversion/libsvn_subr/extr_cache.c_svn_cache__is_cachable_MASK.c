
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int cache_internal; TYPE_1__* vtable; } ;
typedef TYPE_2__ svn_cache__t ;
typedef int svn_boolean_t ;
typedef int apr_size_t ;
struct TYPE_4__ {int (* is_cachable ) (int ,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

svn_boolean_t
FUNC_1(svn_cache__t *VAR_1,
                       apr_size_t VAR_2)
{

  if (VAR_1 == ((void*)0))
    return VAR_0;

  return VAR_1->vtable->is_cachable(VAR_1->cache_internal, VAR_2);
}
