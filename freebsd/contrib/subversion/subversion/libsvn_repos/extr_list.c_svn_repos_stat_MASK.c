
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ svn_node_kind_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
struct TYPE_5__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_dirent_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__*,int *,char const*,int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__*,int *,char const*,int *) ;
 scalar_t__ VAR_1 ;

svn_error_t *
FUNC_4(svn_dirent_t **VAR_2,
               svn_fs_root_t *VAR_3,
               const char *VAR_4,
               apr_pool_t *VAR_5)
{
  svn_node_kind_t VAR_6;
  svn_dirent_t *VAR_7;

  FUNC_0(FUNC_3(&VAR_6, VAR_3, VAR_4, VAR_5));

  if (VAR_6 == VAR_1)
    {
      *VAR_2 = ((void*)0);
      return VAR_0;
    }

  VAR_7 = FUNC_2(VAR_5);
  VAR_7->kind = VAR_6;

  FUNC_0(FUNC_1(VAR_7, VAR_3, VAR_4, VAR_5));

  *VAR_2 = VAR_7;
  return VAR_0;
}
