
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ offset; } ;
typedef TYPE_1__ svn_fs_x__p2l_entry_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_off_t ;


 int * VAR_0 ;
 TYPE_1__* FUNC_0 (void const*,scalar_t__,int *,int *) ;
 int * FUNC_1 (TYPE_1__*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void **VAR_1,
                      const void *VAR_2,
                      apr_size_t VAR_3,
                      void *VAR_4,
                      apr_pool_t *VAR_5)
{
  svn_fs_x__p2l_entry_t *VAR_6
    = FUNC_0(VAR_2, *(apr_off_t *)VAR_4, VAR_5,
                                     VAR_5);

  *VAR_1 = VAR_6 && VAR_6->offset == *(apr_off_t *)VAR_4
       ? FUNC_1(VAR_6, VAR_5)
       : ((void*)0);

  return VAR_0;
}
