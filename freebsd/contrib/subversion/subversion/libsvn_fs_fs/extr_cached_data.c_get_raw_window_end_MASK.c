
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int end_offset; } ;
typedef TYPE_1__ svn_fs_fs__raw_cached_window_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;
typedef int apr_off_t ;


 int * VAR_0 ;

__attribute__((used)) static svn_error_t *
FUNC_0(void **VAR_1,
                   const void *VAR_2,
                   apr_size_t VAR_3,
                   void *VAR_4,
                   apr_pool_t *VAR_5)
{
  const svn_fs_fs__raw_cached_window_t *VAR_6
    = (const svn_fs_fs__raw_cached_window_t *)VAR_2;
  *(apr_off_t*)VAR_1 = VAR_6->end_offset;

  return VAR_0;
}
