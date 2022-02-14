
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_3__ {int mutex; } ;
typedef TYPE_1__ inprocess_cache_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int * VAR_1 ;
 int FUNC_1 (int *,TYPE_1__*,void const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_boolean_t *VAR_2,
                        void *VAR_3,
                        const void *VAR_4,
                        apr_pool_t *VAR_5)
{
  inprocess_cache_t *VAR_6 = VAR_3;

  if (VAR_4)
    FUNC_0(VAR_6->mutex,
                         FUNC_1(VAR_2,
                                                          VAR_6,
                                                          VAR_4,
                                                          VAR_5));
  else
    *VAR_2 = VAR_0;

  return VAR_1;
}
