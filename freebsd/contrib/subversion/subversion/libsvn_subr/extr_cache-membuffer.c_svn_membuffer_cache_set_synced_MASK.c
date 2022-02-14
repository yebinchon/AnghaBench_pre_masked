
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mutex; } ;
typedef TYPE_1__ svn_membuffer_cache_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ,int ) ;
 int * VAR_0 ;
 int FUNC_1 (void*,void const*,void*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_1,
                               const void *VAR_2,
                               void *VAR_3,
                               apr_pool_t *VAR_4)
{
  svn_membuffer_cache_t *VAR_5 = VAR_1;
  FUNC_0(VAR_5->mutex,
                       FUNC_1(VAR_1,
                                               VAR_2,
                                               VAR_3,
                                               VAR_4));

  return VAR_0;
}
