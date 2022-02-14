
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int kind; } ;
typedef TYPE_2__ svn_fs_dirent_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct dir_baton {TYPE_1__* edit_baton; int path; } ;
typedef int apr_ssize_t ;
typedef int apr_pool_t ;
struct TYPE_3__ {int fs_root; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int ,int *,int ,...) ;
 int FUNC_3 (int *,int ,char*,int *) ;
 int FUNC_4 (int *,int ,char*,int *) ;


 char* FUNC_5 (int ,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(void *VAR_2, const void *VAR_3, apr_ssize_t VAR_4,
                       void *VAR_5, apr_pool_t *VAR_6)
{
  struct dir_baton *VAR_7 = VAR_2;
  svn_fs_dirent_t *VAR_8 = (svn_fs_dirent_t *)VAR_5;
  char *VAR_9;
  svn_boolean_t VAR_10;

  VAR_9 = FUNC_5(VAR_7->path, (const char *)VAR_3, VAR_6);







  switch (VAR_8->kind) {
  case 129:
    FUNC_0(FUNC_3(&VAR_10, VAR_7->edit_baton->fs_root, VAR_9, VAR_6));
    if (!VAR_10)
      return FUNC_2(VAR_0, ((void*)0),
                               FUNC_1("Node '%s' is not a directory."),
                               VAR_9);

    break;
  case 128:
    FUNC_0(FUNC_4(&VAR_10, VAR_7->edit_baton->fs_root, VAR_9, VAR_6));
    if (!VAR_10)
      return FUNC_2(VAR_0, ((void*)0),
                               FUNC_1("Node '%s' is not a file."),
                               VAR_9);
    break;
  default:
    return FUNC_2(VAR_0, ((void*)0),
                             FUNC_1("Unexpected node kind %d for '%s'"),
                             VAR_8->kind, VAR_9);
  }

  return VAR_1;
}
