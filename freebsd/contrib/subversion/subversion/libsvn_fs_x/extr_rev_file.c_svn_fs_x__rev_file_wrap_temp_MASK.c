
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int stream; int * file; } ;
typedef TYPE_1__ svn_fs_x__revision_file_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_file_t ;


 int * VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ,int *) ;

svn_error_t *
FUNC_2(svn_fs_x__revision_file_t **VAR_2,
                             svn_fs_t *VAR_3,
                             apr_file_t *VAR_4,
                             apr_pool_t *VAR_5)
{
  *VAR_2 = FUNC_0(VAR_3, VAR_5);
  (*VAR_2)->file = VAR_4;
  (*VAR_2)->stream = FUNC_1(VAR_4, VAR_1, VAR_5);

  return VAR_0;
}
