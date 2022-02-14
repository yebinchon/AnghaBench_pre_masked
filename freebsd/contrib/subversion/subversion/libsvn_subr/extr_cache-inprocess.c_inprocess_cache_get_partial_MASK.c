
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_cache__partial_getter_func_t ;
typedef int svn_boolean_t ;
struct TYPE_3__ {int mutex; } ;
typedef TYPE_1__ inprocess_cache_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int * VAR_1 ;
 int FUNC_1 (void**,int *,TYPE_1__*,void const*,int ,void*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void **VAR_2,
                            svn_boolean_t *VAR_3,
                            void *VAR_4,
                            const void *VAR_5,
                            svn_cache__partial_getter_func_t VAR_6,
                            void *VAR_7,
                            apr_pool_t *VAR_8)
{
  inprocess_cache_t *VAR_9 = VAR_4;

  if (VAR_5)
    FUNC_0(VAR_9->mutex,
                         FUNC_1(VAR_2,
                                                              VAR_3,
                                                              VAR_9,
                                                              VAR_5,
                                                              VAR_6,
                                                              VAR_7,
                                                              VAR_8));
  else
    *VAR_3 = VAR_0;

  return VAR_1;
}
