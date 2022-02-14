
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_cache__partial_setter_func_t ;
struct TYPE_3__ {int mutex; } ;
typedef TYPE_1__ inprocess_cache_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ,int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__*,void const*,int ,void*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_1,
                            const void *VAR_2,
                            svn_cache__partial_setter_func_t VAR_3,
                            void *VAR_4,
                            apr_pool_t *VAR_5)
{
  inprocess_cache_t *VAR_6 = VAR_1;

  if (VAR_2)
    FUNC_0(VAR_6->mutex,
                         FUNC_1(VAR_6,
                                                              VAR_2,
                                                              VAR_3,
                                                              VAR_4,
                                                              VAR_5));

  return VAR_0;
}
