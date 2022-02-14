
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
struct TYPE_18__ {scalar_t__ rev; } ;
typedef TYPE_4__ svn_client__pathrev_t ;
typedef int svn_boolean_t ;
struct TYPE_16__ {int has_r0_history; int history; TYPE_6__* tip; } ;
struct TYPE_15__ {int has_r0_history; int history; TYPE_6__* tip; } ;
struct TYPE_19__ {TYPE_3__* target; TYPE_6__* source; int yca; TYPE_2__ target_branch; TYPE_1__ source_branch; int target_ra_session; int source_ra_session; } ;
typedef TYPE_5__ source_and_target_t ;
typedef int apr_pool_t ;
struct TYPE_20__ {int rev; int url; } ;
struct TYPE_17__ {TYPE_6__ loc; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_4__**,TYPE_5__*,int *,int *,int *) ;
 int FUNC_3 (TYPE_4__**,TYPE_5__*,int *,int *,int *) ;
 int FUNC_4 (int *,TYPE_6__*,int ,int ,TYPE_6__*,int ,int ,int *,int *) ;
 int FUNC_5 (int *,int *,TYPE_6__*,int ,int ,int ,int *,int *) ;
 int * FUNC_6 (int ,int *,int ,int ,int ,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_7(svn_client__pathrev_t **VAR_5,
                     svn_boolean_t *VAR_6,
                     source_and_target_t *VAR_7,
                     svn_client_ctx_t *VAR_8,
                     apr_pool_t *VAR_9,
                     apr_pool_t *VAR_10)
{
  svn_client__pathrev_t *VAR_11, *VAR_12;


  VAR_7->source_branch.tip = VAR_7->source;
  FUNC_0(FUNC_5(
            &VAR_7->source_branch.history, &VAR_7->source_branch.has_r0_history,
            VAR_7->source, VAR_2, VAR_2,
            VAR_7->source_ra_session, VAR_8, VAR_10));
  VAR_7->target_branch.tip = &VAR_7->target->loc;
  FUNC_0(FUNC_5(
            &VAR_7->target_branch.history, &VAR_7->target_branch.has_r0_history,
            &VAR_7->target->loc, VAR_2, VAR_2,
            VAR_7->target_ra_session, VAR_8, VAR_10));

  FUNC_0(FUNC_4(
            &VAR_7->yca, VAR_7->source, VAR_7->source_branch.history,
            VAR_7->source_branch.has_r0_history,
            &VAR_7->target->loc, VAR_7->target_branch.history,
            VAR_7->target_branch.has_r0_history,
            VAR_9, VAR_10));

  if (! VAR_7->yca)
    return FUNC_6(VAR_1, ((void*)0),
                             FUNC_1("'%s@%ld' must be ancestrally related to "
                               "'%s@%ld'"),
                             VAR_7->source->url, VAR_7->source->rev,
                             VAR_7->target->loc.url, VAR_7->target->loc.rev);







  FUNC_0(FUNC_2(&VAR_11, VAR_7,
                              VAR_8, VAR_10, VAR_10));
  FUNC_0(FUNC_3(&VAR_12, VAR_7,
                              VAR_8, VAR_10, VAR_10));


  if (VAR_11->rev >= VAR_12->rev)
    {
      *VAR_5 = VAR_11;
      *VAR_6 = VAR_0;
    }
  else
    {
      *VAR_5 = VAR_12;
      *VAR_6 = VAR_4;
    }

  return VAR_3;
}
