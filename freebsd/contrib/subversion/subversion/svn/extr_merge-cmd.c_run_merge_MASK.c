
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_opt_revision_t ;
typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
struct TYPE_12__ {int allow_mixed_rev; int dry_run; int record_only; int force; int ignore_ancestry; int depth; scalar_t__ verbose; scalar_t__ reintegrate; } ;
typedef TYPE_2__ svn_cl__opt_state_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_array_header_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (char const*,TYPE_1__*,char const*,int ,int *,int *,int *) ;
 int * FUNC_3 (char const*,TYPE_1__*,char const*,TYPE_1__*,char const*,int ,int ,int ,int ,int ,int ,int ,int *,int *,int *) ;
 int * FUNC_4 (char const*,int *,TYPE_1__*,char const*,int ,int ,int ,int ,int ,int ,int ,int *,int *,int *) ;
 int FUNC_5 (int *,int ) ;
 int * FUNC_6 (int ,int *,int ) ;
 int * FUNC_7 (int ,int *,int ,char const*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_8 (char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_9(svn_boolean_t VAR_2,
          const char *VAR_3,
          svn_opt_revision_t VAR_4,
          const char *VAR_5,
          const char *VAR_6,
          apr_array_header_t *VAR_7,
          svn_opt_revision_t VAR_8,
          svn_opt_revision_t VAR_9,
          svn_cl__opt_state_t *VAR_10,
          apr_array_header_t *VAR_11,
          svn_client_ctx_t *VAR_12,
          apr_pool_t *VAR_13)
{
  svn_error_t *VAR_14;

  if (VAR_10->reintegrate)
    {
      VAR_14 = FUNC_2(
                    VAR_3, &VAR_4, VAR_6,
                    VAR_10->dry_run, VAR_11, VAR_12, VAR_13);
    }
  else if (! VAR_2)
    {



      if ((VAR_8.kind == VAR_1)
          && (VAR_9.kind == VAR_1))
        {
          VAR_7 = ((void*)0);
        }

      if (VAR_10->verbose)
        FUNC_0(FUNC_5(VAR_13, FUNC_1("--- Merging\n")));
      VAR_14 = FUNC_4(VAR_3,
                                        VAR_7,
                                        &VAR_4,
                                        VAR_6,
                                        VAR_10->depth,
                                        VAR_10->ignore_ancestry,
                                        VAR_10->ignore_ancestry,
                                        VAR_10->force,
                                        VAR_10->record_only,
                                        VAR_10->dry_run,
                                        VAR_10->allow_mixed_rev,
                                        VAR_11,
                                        VAR_12,
                                        VAR_13);
    }
  else
    {
      if (FUNC_8(VAR_3) != FUNC_8(VAR_5))
        return FUNC_6(VAR_0, ((void*)0),
                                FUNC_1("Merge sources must both be "
                                  "either paths or URLs"));

      if (FUNC_8(VAR_6))
        return FUNC_7(VAR_0, ((void*)0),
                                 FUNC_1("Merge target '%s' must be a local path "
                                   "but looks like a URL"), VAR_6);

      if (VAR_10->verbose)
        FUNC_0(FUNC_5(VAR_13, FUNC_1("--- Merging\n")));
      VAR_14 = FUNC_3(VAR_3,
                                    &VAR_8,
                                    VAR_5,
                                    &VAR_9,
                                    VAR_6,
                                    VAR_10->depth,
                                    VAR_10->ignore_ancestry,
                                    VAR_10->ignore_ancestry,
                                    VAR_10->force,
                                    VAR_10->record_only,
                                    VAR_10->dry_run,
                                    VAR_10->allow_mixed_rev,
                                    VAR_11,
                                    VAR_12,
                                    VAR_13);
    }

  return VAR_14;
}
