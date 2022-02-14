
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int count; int * changes; } ;
typedef TYPE_1__ svn_fs_fs__changes_list_t ;
typedef int svn_error_t ;
typedef int change_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (int *,int **) ;
 int FUNC_1 (TYPE_1__*,void**) ;

svn_error_t *
FUNC_2(void **VAR_1,
                               void *VAR_2,
                               apr_size_t VAR_3,
                               apr_pool_t *VAR_4)
{
  int VAR_5;
  svn_fs_fs__changes_list_t *VAR_6 = (svn_fs_fs__changes_list_t *)VAR_2;


  FUNC_1(VAR_6, (void**)&VAR_6->changes);


  for (VAR_5 = 0; VAR_5 < VAR_6->count; ++VAR_5)
    FUNC_0(VAR_6->changes,
                       (change_t **)&VAR_6->changes[VAR_5]);


  *VAR_1 = VAR_6;

  return VAR_0;
}
