
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
typedef void* svn_boolean_t ;
struct TYPE_7__ {TYPE_3__* target; int source; int yca; int source_ra_session; int target_ra_session; } ;
typedef TYPE_1__ source_and_target_t ;
struct TYPE_8__ {void* allow_switched_subtrees; void* allow_local_mods; void* allow_mixed_rev; TYPE_6__* target; int right; int yca; int is_reintegrate_like; int base; } ;
typedef TYPE_2__ automatic_merge_t ;
typedef int apr_pool_t ;
struct TYPE_10__ {int url; } ;
struct TYPE_9__ {TYPE_6__ loc; int abspath; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (int *,int) ;
 int FUNC_4 (int ,char const*,TYPE_6__*,char const*,int ,int *) ;
 int FUNC_5 (int *,int *,TYPE_1__*,int *,int *,int *) ;
 int FUNC_6 (TYPE_3__**,char const*,void*,void*,void*,int *,int *,int *) ;
 int FUNC_7 (int *,int *,char const*,int *,int const*,int const*,int *,int *) ;
 int FUNC_8 (int *,int ,int ,int *,int *,int *) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (char const*,int *) ;
 int * FUNC_11 (int ,int *,int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_12(automatic_merge_t **VAR_3,
                            const char *VAR_4,
                            const svn_opt_revision_t *VAR_5,
                            const char *VAR_6,
                            svn_boolean_t VAR_7,
                            svn_boolean_t VAR_8,
                            svn_boolean_t VAR_9,
                            svn_client_ctx_t *VAR_10,
                            apr_pool_t *VAR_11,
                            apr_pool_t *VAR_12)
{
  source_and_target_t *VAR_13 = FUNC_3(VAR_11, sizeof(*VAR_13));
  automatic_merge_t *VAR_14 = FUNC_3(VAR_11, sizeof(*VAR_14));

  FUNC_1(FUNC_9(VAR_6));






  FUNC_0(FUNC_6(&VAR_13->target, VAR_6,
                         VAR_7,
                         VAR_8,
                         VAR_9,
                         VAR_10, VAR_11, VAR_12));

  if (!VAR_13->target->loc.url)
    return FUNC_11(VAR_0, ((void*)0),
                             FUNC_2("Can't perform automatic merge into '%s' "
                               "because it is locally added and therefore "
                               "not related to the merge source"),
                             FUNC_10(VAR_6,
                                                    VAR_12));


  FUNC_0(FUNC_8(&VAR_13->target_ra_session,
                                      VAR_13->target->loc.url,
                                      VAR_13->target->abspath,
                                      VAR_10, VAR_11, VAR_12));
  FUNC_0(FUNC_7(
            &VAR_13->source_ra_session, &VAR_13->source,
            VAR_4, ((void*)0), VAR_5, VAR_5,
            VAR_10, VAR_11));


  FUNC_0(FUNC_4(VAR_13->source, VAR_4,
                           &VAR_13->target->loc, VAR_6,
                           VAR_2 , VAR_12));

  FUNC_0(FUNC_5(&VAR_14->base, &VAR_14->is_reintegrate_like, VAR_13,
                               VAR_10, VAR_11, VAR_12));
  VAR_14->yca = VAR_13->yca;
  VAR_14->right = VAR_13->source;
  VAR_14->target = &VAR_13->target->loc;
  VAR_14->allow_mixed_rev = VAR_7;
  VAR_14->allow_local_mods = VAR_8;
  VAR_14->allow_switched_subtrees = VAR_9;

  *VAR_3 = VAR_14;



  return VAR_1;
}
