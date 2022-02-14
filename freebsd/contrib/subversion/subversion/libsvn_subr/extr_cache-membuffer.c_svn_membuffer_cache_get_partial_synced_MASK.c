
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mutex; } ;
typedef TYPE_1__ svn_membuffer_cache_t ;
typedef int svn_error_t ;
typedef int svn_cache__partial_getter_func_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ,int ) ;
 int * VAR_0 ;
 int FUNC_1 (void**,int *,void*,void const*,int ,void*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void **VAR_1,
                                       svn_boolean_t *VAR_2,
                                       void *VAR_3,
                                       const void *VAR_4,
                                       svn_cache__partial_getter_func_t VAR_5,
                                       void *VAR_6,
                                       apr_pool_t *VAR_7)
{
  svn_membuffer_cache_t *VAR_8 = VAR_3;
  FUNC_0(VAR_8->mutex,
                       FUNC_1(VAR_1,
                                                       VAR_2,
                                                       VAR_3,
                                                       VAR_4,
                                                       VAR_5,
                                                       VAR_6,
                                                       VAR_7));

  return VAR_0;
}
