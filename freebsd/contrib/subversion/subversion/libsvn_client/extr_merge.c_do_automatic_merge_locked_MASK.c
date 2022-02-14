
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef int svn_ra_session_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_depth_t ;
typedef int svn_client_ctx_t ;
typedef int svn_client__conflict_report_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_17__ {int url; } ;
struct TYPE_19__ {int abspath; TYPE_1__ loc; } ;
typedef TYPE_3__ merge_target_t ;
struct TYPE_20__ {int ancestral; TYPE_7__* loc2; TYPE_2__* loc1; } ;
typedef TYPE_4__ merge_source_t ;
struct TYPE_21__ {TYPE_7__* right; TYPE_10__* yca; scalar_t__ is_reintegrate_like; TYPE_2__* base; scalar_t__ allow_switched_subtrees; scalar_t__ allow_local_mods; scalar_t__ allow_mixed_rev; } ;
typedef TYPE_5__ automatic_merge_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;
struct TYPE_22__ {int rev; int url; } ;
struct TYPE_18__ {int url; } ;
struct TYPE_16__ {int rev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,int *,int **,scalar_t__*,int *,TYPE_3__*,int *,int ,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int *,scalar_t__,scalar_t__,scalar_t__,int const*,int *,int *,int *) ;
 int * FUNC_3 (int **,int ,int ,int *,int *) ;
 int * FUNC_4 (TYPE_4__**,int *,int *,TYPE_7__*,int *,TYPE_3__*,int *,int *,int *) ;
 int * FUNC_5 (int **,scalar_t__*,TYPE_3__*,int *,int *,TYPE_4__*,TYPE_10__*,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int const*,int *,int *,int *) ;
 int * FUNC_6 (int **,TYPE_7__*,int ,int *,int *,int *,int *) ;
 int * FUNC_7 (TYPE_3__**,char const*,int,int,int,int *,int *,int *) ;
 scalar_t__ VAR_4 ;
 int * FUNC_8 (int ,int *,int ) ;
 int FUNC_9 (char const*,int *) ;
 int FUNC_10 (int ,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(svn_client__conflict_report_t **VAR_5,
                          const automatic_merge_t *VAR_6,
                          const char *VAR_7,
                          svn_depth_t VAR_8,
                          svn_boolean_t VAR_9,
                          svn_boolean_t VAR_10,
                          svn_boolean_t VAR_11,
                          svn_boolean_t VAR_12,
                          const apr_array_header_t *VAR_13,
                          svn_client_ctx_t *VAR_14,
                          apr_pool_t *VAR_15,
                          apr_pool_t *VAR_16)
{
  merge_target_t *VAR_17;
  svn_boolean_t VAR_18 = VAR_6->is_reintegrate_like;
  svn_boolean_t VAR_19 = VAR_0;
  svn_error_t *VAR_20;

  FUNC_0(FUNC_7(&VAR_17, VAR_7,
                         VAR_6->allow_mixed_rev && ! VAR_18,
                         VAR_6->allow_local_mods && ! VAR_18,
                         VAR_6->allow_switched_subtrees && ! VAR_18,
                         VAR_14, VAR_16, VAR_16));

  if (VAR_18)
    {
      merge_source_t VAR_21;
      svn_ra_session_t *VAR_22 = ((void*)0);
      svn_ra_session_t *VAR_23 = ((void*)0);
      svn_ra_session_t *VAR_24 = ((void*)0);

      if (VAR_11)
        return FUNC_8(VAR_1, ((void*)0),
                                FUNC_1("The required merge is reintegrate-like, "
                                  "and the record-only option "
                                  "cannot be used with this kind of merge"));

      if (VAR_8 != VAR_4)
        return FUNC_8(VAR_1, ((void*)0),
                                FUNC_1("The required merge is reintegrate-like, "
                                  "and the depth option "
                                  "cannot be used with this kind of merge"));

      if (VAR_10)
        return FUNC_8(VAR_1, ((void*)0),
                                FUNC_1("The required merge is reintegrate-like, "
                                  "and the force_delete option "
                                  "cannot be used with this kind of merge"));

      FUNC_0(FUNC_3(&VAR_22, VAR_6->base->url,
                                    VAR_17->abspath, VAR_14, VAR_16));
      FUNC_0(FUNC_3(&VAR_23, VAR_6->right->url,
                                    VAR_17->abspath, VAR_14, VAR_16));
      FUNC_0(FUNC_3(&VAR_24, VAR_17->loc.url,
                                    VAR_17->abspath, VAR_14, VAR_16));




      {
        merge_source_t *VAR_25;

        FUNC_0(FUNC_4(&VAR_25, ((void*)0),
                                       VAR_23, VAR_6->right,
                                       VAR_24, VAR_17,
                                       VAR_14, VAR_16, VAR_16));
      }

      VAR_21.loc1 = VAR_6->base;
      VAR_21.loc2 = VAR_6->right;
      VAR_21.ancestral = ! VAR_6->is_reintegrate_like;

      VAR_20 = FUNC_5(VAR_5,
                                                   &VAR_19,
                                                   VAR_17,
                                                   VAR_22,
                                                   VAR_23,
                                                   &VAR_21, VAR_6->yca,
                                                   VAR_3 ,
                                                   VAR_8,
                                                   VAR_0 ,
                                                   VAR_10, VAR_11,
                                                   VAR_12,
                                                   VAR_13,
                                                   VAR_14,
                                                   VAR_15, VAR_16);
    }
  else
    {
      apr_array_header_t *VAR_26;
      svn_ra_session_t *VAR_27 = ((void*)0);



      FUNC_0(FUNC_3(&VAR_27, VAR_6->right->url,
                                    VAR_17->abspath, VAR_14, VAR_16));
      FUNC_0(FUNC_6(
        &VAR_26, VAR_6->right,
        FUNC_10(VAR_6->yca->rev, VAR_6->right->rev, VAR_3,
                                  VAR_16),
        VAR_27, VAR_14, VAR_16, VAR_16));

      VAR_20 = FUNC_2(((void*)0), ((void*)0), VAR_5, &VAR_19,
                     VAR_26, VAR_17, VAR_27,
                     VAR_3 , VAR_3 ,
                     VAR_0 , VAR_9,
                     VAR_10, VAR_12,
                     VAR_11, ((void*)0), VAR_0, VAR_0, VAR_8, VAR_13,
                     VAR_14, VAR_15, VAR_16);
    }

  if (VAR_19)
    FUNC_9(VAR_7, VAR_16);

  FUNC_0(VAR_20);

  return VAR_2;
}
