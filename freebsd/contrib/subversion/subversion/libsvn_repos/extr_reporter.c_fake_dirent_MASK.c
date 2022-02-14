
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ svn_node_kind_t ;
typedef int svn_fs_root_t ;
struct TYPE_4__ {scalar_t__ kind; int id; int name; } ;
typedef TYPE_1__ svn_fs_dirent_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 TYPE_1__* FUNC_1 (int *,int) ;
 int FUNC_2 (scalar_t__*,int *,char const*,int *) ;
 int FUNC_3 (int *,int *,char const*,int *) ;
 int FUNC_4 (char const*,int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(const svn_fs_dirent_t **VAR_2, svn_fs_root_t *VAR_3,
            const char *VAR_4, apr_pool_t *VAR_5)
{
  svn_node_kind_t VAR_6;
  svn_fs_dirent_t *VAR_7;

  FUNC_0(FUNC_2(&VAR_6, VAR_3, VAR_4, VAR_5));
  if (VAR_6 == VAR_1)
    *VAR_2 = ((void*)0);
  else
    {
      VAR_7 = FUNC_1(VAR_5, sizeof(**VAR_2));


      VAR_7->name = (*VAR_4 == '/') ? FUNC_4(VAR_4, VAR_5)
                                 : FUNC_5(VAR_4, VAR_5);
      FUNC_0(FUNC_3(&VAR_7->id, VAR_3, VAR_4, VAR_5));
      VAR_7->kind = VAR_6;
      *VAR_2 = VAR_7;
    }
  return VAR_0;
}
