
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_6__ {int hits; int cache_internal; TYPE_1__* vtable; int reads; scalar_t__ pretend_empty; } ;
typedef TYPE_2__ svn_cache__t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int (* get ) (void**,scalar_t__*,int ,void const*,int *) ;} ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int * FUNC_0 (TYPE_2__*,int ,int *) ;
 int FUNC_1 (void**,scalar_t__*,int ,void const*,int *) ;

svn_error_t *
FUNC_2(void **VAR_2,
               svn_boolean_t *VAR_3,
               svn_cache__t *VAR_4,
               const void *VAR_5,
               apr_pool_t *VAR_6)
{
  svn_error_t *VAR_7;



  *VAR_3 = VAR_0;





  VAR_4->reads++;
  VAR_7 = FUNC_0(VAR_4,
                     (VAR_4->vtable->get)(VAR_2,
                                          VAR_3,
                                          VAR_4->cache_internal,
                                          VAR_5,
                                          VAR_6),
                     VAR_6);

  if (*VAR_3)
    VAR_4->hits++;

  return VAR_7;
}
