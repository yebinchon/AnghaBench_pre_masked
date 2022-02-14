
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int svn_client__pathrev_t ;
struct TYPE_7__ {int yca; TYPE_1__* target; int * source; int target_ra_session; int source_ra_session; } ;
typedef TYPE_2__ source_and_target_t ;
struct TYPE_8__ {int yca; int * target; int * right; int is_reintegrate_like; int base; } ;
typedef TYPE_3__ automatic_merge_t ;
typedef int apr_pool_t ;
struct TYPE_6__ {int loc; int * abspath; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 void* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,TYPE_2__*,int *,int *,int *) ;
 int FUNC_3 (int *,int **,char const*,int *,int const*,int const*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(automatic_merge_t **VAR_1,
                           const char *VAR_2,
                           const svn_opt_revision_t *VAR_3,
                           const char *VAR_4,
                           const svn_opt_revision_t *VAR_5,
                           svn_client_ctx_t *VAR_6,
                           apr_pool_t *VAR_7,
                           apr_pool_t *VAR_8)
{
  source_and_target_t *VAR_9 = FUNC_1(VAR_8, sizeof(*VAR_9));
  svn_client__pathrev_t *VAR_10;
  automatic_merge_t *VAR_11 = FUNC_1(VAR_7, sizeof(*VAR_11));


  FUNC_0(FUNC_3(
            &VAR_9->source_ra_session, &VAR_9->source,
            VAR_2, ((void*)0), VAR_3, VAR_3,
            VAR_6, VAR_7));


  FUNC_0(FUNC_3(
            &VAR_9->target_ra_session, &VAR_10,
            VAR_4, ((void*)0), VAR_5, VAR_5,
            VAR_6, VAR_7));
  VAR_9->target = FUNC_1(VAR_8, sizeof(*VAR_9->target));
  VAR_9->target->abspath = ((void*)0);
  VAR_9->target->loc = *VAR_10;

  FUNC_0(FUNC_2(&VAR_11->base, &VAR_11->is_reintegrate_like, VAR_9,
                               VAR_6, VAR_7, VAR_8));

  VAR_11->right = VAR_9->source;
  VAR_11->target = &VAR_9->target->loc;
  VAR_11->yca = VAR_9->yca;
  *VAR_1 = VAR_11;

  return VAR_0;
}
