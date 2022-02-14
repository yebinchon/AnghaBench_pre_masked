
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int svn_client__pathrev_t ;
struct TYPE_3__ {int target_ra_session; int source; int target_branch; int yca; } ;
typedef TYPE_1__ source_and_target_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,int ,int *,int ,int *,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(svn_client__pathrev_t **VAR_1,
                    source_and_target_t *VAR_2,
                    svn_client_ctx_t *VAR_3,
                    apr_pool_t *VAR_4,
                    apr_pool_t *VAR_5)
{
  FUNC_0(FUNC_1(VAR_1,
                                    VAR_2->yca,
                                    &VAR_2->target_branch,
                                    VAR_2->source,
                                    VAR_3,
                                    VAR_2->target_ra_session,
                                    VAR_4, VAR_5));

  return VAR_0;
}
