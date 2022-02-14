
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_4__ {int pretend_empty; int cache_internal; int * vtable; } ;
typedef TYPE_1__ svn_cache__t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * VAR_1 ;
 TYPE_1__* FUNC_0 (int *,int) ;
 int FUNC_1 (int *,char const*) ;
 int VAR_2 ;

svn_error_t *
FUNC_2(svn_cache__t **VAR_3,
                       const char *VAR_4,
                       apr_pool_t *VAR_5)
{
  svn_cache__t *VAR_6 = FUNC_0(VAR_5, sizeof(*VAR_6));
  VAR_6->vtable = &VAR_2;
  VAR_6->cache_internal = FUNC_1(VAR_5, VAR_4);
  VAR_6->pretend_empty = VAR_0;


  *VAR_3 = VAR_6;
  return VAR_1;
}
