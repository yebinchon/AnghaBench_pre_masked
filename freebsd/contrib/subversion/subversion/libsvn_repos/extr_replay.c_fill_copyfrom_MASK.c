
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int (* svn_repos_authz_func_t ) (void**,int *,char const*,void*,int *) ;
typedef int svn_fs_root_t ;
struct TYPE_3__ {char* copyfrom_path; int copyfrom_rev; void* copyfrom_known; } ;
typedef TYPE_1__ svn_fs_path_change3_t ;
typedef int svn_error_t ;
typedef void* svn_boolean_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int * VAR_0 ;
 void* VAR_1 ;
 int FUNC_2 (int *,char**,int *,char const*,int *) ;
 int FUNC_3 (int **,int ,int ,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_fs_root_t **VAR_2,
              const char **VAR_3,
              svn_revnum_t *VAR_4,
              svn_boolean_t *VAR_5,
              svn_fs_root_t *VAR_6,
              svn_fs_path_change3_t *VAR_7,
              svn_repos_authz_func_t VAR_8,
              void *VAR_9,
              const char *VAR_10,
              apr_pool_t *VAR_11,
              apr_pool_t *VAR_12)
{
  if (! VAR_7->copyfrom_known)
    {
      FUNC_0(FUNC_2(&(VAR_7->copyfrom_rev),
                                 &(VAR_7->copyfrom_path),
                                 VAR_6, VAR_10, VAR_11));
      VAR_7->copyfrom_known = VAR_1;
    }
  *VAR_4 = VAR_7->copyfrom_rev;
  *VAR_3 = VAR_7->copyfrom_path;

  if (*VAR_3 && FUNC_1(*VAR_4))
    {
      FUNC_0(FUNC_3(VAR_2,
                                   FUNC_4(VAR_6),
                                   *VAR_4, VAR_11));

      if (VAR_8)
        {
          FUNC_0(VAR_8(VAR_5, *VAR_2,
                                  *VAR_3,
                                  VAR_9, VAR_11));
        }
      else
        *VAR_5 = VAR_1;
    }
  else
    {
      *VAR_2 = ((void*)0);

    }
  return VAR_0;
}
