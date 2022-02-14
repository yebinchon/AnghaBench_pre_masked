
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_fs_root_t ;
typedef int svn_error_t ;
struct TYPE_3__ {scalar_t__ kind; int time; int last_author; int created_rev; int has_props; int size; } ;
typedef TYPE_1__ svn_dirent_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int *,int *,char const*,int *) ;
 int FUNC_2 (int *,int *,char const*,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int *,char const**,int *,int *,char const*,int *) ;
 int FUNC_4 (int *,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_dirent_t *VAR_3,
            svn_fs_root_t *VAR_4,
            const char *VAR_5,
            apr_pool_t *VAR_6)
{
  const char *VAR_7;

  if (VAR_3->kind == VAR_2)
    FUNC_0(FUNC_1(&(VAR_3->size), VAR_4, VAR_5, VAR_6));
  else
    VAR_3->size = VAR_0;

  FUNC_0(FUNC_2(&VAR_3->has_props, VAR_4, VAR_5,
                                VAR_6));

  FUNC_0(FUNC_3(&(VAR_3->created_rev),
                                       &VAR_7,
                                       &(VAR_3->last_author),
                                       VAR_4, VAR_5, VAR_6));
  if (VAR_7)
    FUNC_0(FUNC_4(&(VAR_3->time), VAR_7,
                                  VAR_6));

  return VAR_1;
}
