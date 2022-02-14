
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_5__ {int kind; } ;
typedef TYPE_1__ svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char const*,char const*,TYPE_1__*,TYPE_1__ const*,int ,int ,int *,int *) ;
 int * FUNC_1 (int ) ;
 int VAR_1 ;

svn_error_t *
FUNC_2(svn_revnum_t *VAR_2,
                    const char *VAR_3,
                    const char *VAR_4,
                    const svn_opt_revision_t *VAR_5,
                    svn_boolean_t VAR_6,
                    svn_client_ctx_t *VAR_7,
                    apr_pool_t *VAR_8)
{
  svn_opt_revision_t VAR_9;

  VAR_9.kind = VAR_1;

  return FUNC_1(FUNC_0(VAR_2, VAR_3, VAR_4,
                                              &VAR_9, VAR_5, VAR_6,
                                              VAR_0, VAR_7, VAR_8));
}
