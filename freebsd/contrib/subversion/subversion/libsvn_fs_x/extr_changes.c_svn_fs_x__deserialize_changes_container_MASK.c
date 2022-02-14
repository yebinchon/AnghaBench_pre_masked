
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int offsets; int changes; int paths; } ;
typedef TYPE_1__ svn_fs_x__changes_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;

svn_error_t *
FUNC_2(void **VAR_1,
                                         void *VAR_2,
                                         apr_size_t VAR_3,
                                         apr_pool_t *VAR_4)
{
  svn_fs_x__changes_t *VAR_5 = (svn_fs_x__changes_t *)VAR_2;


  FUNC_1(VAR_5, &VAR_5->paths);
  FUNC_0(VAR_5, &VAR_5->changes, VAR_4);
  FUNC_0(VAR_5, &VAR_5->offsets, VAR_4);


  *VAR_1 = VAR_5;

  return VAR_0;
}
