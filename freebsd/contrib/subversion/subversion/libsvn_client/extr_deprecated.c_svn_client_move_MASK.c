
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int svn_client_commit_info_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int * FUNC_1 (int **,char const*,char const*,int ,int *,int *) ;
 int * FUNC_2 (int ,int *,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

svn_error_t *
FUNC_3(svn_client_commit_info_t **VAR_3,
                const char *VAR_4,
                const svn_opt_revision_t *VAR_5,
                const char *VAR_6,
                svn_boolean_t VAR_7,
                svn_client_ctx_t *VAR_8,
                apr_pool_t *VAR_9)
{







  if (VAR_5->kind != VAR_2
      && VAR_5->kind != VAR_1)
    {
      return FUNC_2
        (VAR_0, ((void*)0),
         FUNC_0("Cannot specify revisions (except HEAD) with move operations"));
    }

  return FUNC_1(VAR_3, VAR_4, VAR_6, VAR_7, VAR_8, VAR_9);
}
