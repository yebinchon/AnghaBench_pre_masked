
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_fs_t ;
struct TYPE_4__ {int * fs; } ;
typedef TYPE_1__ svn_fs_root_t ;
typedef int svn_error_t ;
struct closest_copy_args {char const** path_p; char const* path; int * pool; TYPE_1__* root; TYPE_1__** root_p; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int *,int ,struct closest_copy_args*,int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_fs_root_t **VAR_3,
                  const char **VAR_4,
                  svn_fs_root_t *VAR_5,
                  const char *VAR_6,
                  apr_pool_t *VAR_7)
{
  struct closest_copy_args VAR_8;
  svn_fs_t *VAR_9 = VAR_5->fs;
  svn_fs_root_t *VAR_10 = ((void*)0);
  const char *VAR_11 = ((void*)0);

  VAR_8.root_p = &VAR_10;
  VAR_8.path_p = &VAR_11;
  VAR_8.root = VAR_5;
  VAR_8.path = VAR_6;
  VAR_8.pool = VAR_7;
  FUNC_0(FUNC_1(VAR_9, VAR_2, &VAR_8,
                                 VAR_0, VAR_7));
  *VAR_3 = VAR_10;
  *VAR_4 = VAR_11;
  return VAR_1;
}
