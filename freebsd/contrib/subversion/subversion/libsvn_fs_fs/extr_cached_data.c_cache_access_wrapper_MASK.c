
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_2__ {int baton; int (* func ) (unsigned char const*,scalar_t__,int ,int *) ;} ;
typedef TYPE_1__ cache_access_wrapper_baton_t ;
typedef scalar_t__ apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (unsigned char const*,scalar_t__,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void **VAR_1,
                     const void *VAR_2,
                     apr_size_t VAR_3,
                     void *VAR_4,
                     apr_pool_t *VAR_5)
{
  cache_access_wrapper_baton_t *VAR_6 = VAR_4;

  FUNC_0(VAR_6->func((const unsigned char *)VAR_2,
                              VAR_3 - 1,
                              VAR_6->baton,
                              VAR_5));


  *VAR_1 = VAR_4;

  return VAR_0;
}
