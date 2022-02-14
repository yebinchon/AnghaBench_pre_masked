
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_13__ {int notify_baton2; int (* notify_func2 ) (int ,int ,int *) ;int wc_ctx; } ;
typedef TYPE_1__ svn_client_ctx_t ;
struct TYPE_14__ {int resolution_tree; struct conflict_tree_incoming_add_details* tree_conflict_incoming_details; } ;
typedef TYPE_2__ svn_client_conflict_t ;
struct TYPE_15__ {int id; } ;
typedef TYPE_3__ svn_client_conflict_option_t ;
struct conflict_tree_incoming_add_details {char const* repos_relpath; scalar_t__ added_rev; scalar_t__ deleted_rev; } ;
typedef int apr_pool_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (char const*,char const*,scalar_t__,char const*,scalar_t__,char const*,int,TYPE_1__*,int *,int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ,int *) ;
 int * FUNC_5 (char const**,scalar_t__*,int *,TYPE_2__*,int *,int *) ;
 int * FUNC_6 (char const**,scalar_t__*,int *,TYPE_2__*,int *,int *) ;
 char* FUNC_7 (TYPE_2__*) ;
 int * FUNC_8 (char const**,int *,TYPE_2__*,int *,int *) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (char const*,int *) ;
 int * FUNC_11 (int *,int ) ;
 int * FUNC_12 (int ,int *,int ,int ,...) ;
 int FUNC_13 (char const*,int *) ;
 char* FUNC_14 (char const*,char const*,int *) ;
 int * FUNC_15 (char const**,int ,char const*,int *,int *) ;
 int * FUNC_16 (int ,char const*,int *) ;
 int FUNC_17 (int ,char const*,int *) ;
 int FUNC_18 (char const*,int ,int *) ;
 int VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_19(svn_client_conflict_option_t *VAR_4,
                                       svn_client_conflict_t *VAR_5,
                                       svn_client_ctx_t *VAR_6,
                                       apr_pool_t *VAR_7)
{
  const char *VAR_8;
  const char *VAR_9;
  svn_revnum_t VAR_10;
  const char *VAR_11;
  svn_revnum_t VAR_12;
  const char *VAR_13;
  const char *VAR_14;
  struct conflict_tree_incoming_add_details *VAR_15;
  const char *VAR_16;
  const char *VAR_17;
  svn_revnum_t VAR_18;
  const char *VAR_19;
  svn_revnum_t VAR_20;
  svn_error_t *VAR_21;

  VAR_13 = FUNC_7(VAR_5);

  VAR_15 = VAR_5->tree_conflict_incoming_details;
  if (VAR_15 == ((void*)0))
    return FUNC_12(VAR_0, ((void*)0),
                             FUNC_1("Conflict resolution option '%d' requires "
                               "details for tree conflict at '%s' to be "
                               "fetched from the repository"),
                            VAR_4->id,
                            FUNC_10(VAR_13,
                                                   VAR_7));


  FUNC_0(FUNC_8(&VAR_8, ((void*)0),
                                             VAR_5, VAR_7,
                                             VAR_7));
  VAR_17 = FUNC_14(VAR_8,
                                        VAR_15->repos_relpath,
                                        VAR_7);
  FUNC_0(FUNC_6(
            &VAR_9, &VAR_10,
            ((void*)0), VAR_5, VAR_7, VAR_7));
  FUNC_0(FUNC_5(
            &VAR_11, &VAR_12,
            ((void*)0), VAR_5, VAR_7, VAR_7));
  if (VAR_10 < VAR_12)
    {
      if (VAR_15->added_rev == VAR_1)
        return FUNC_12(VAR_0, ((void*)0),
                                 FUNC_1("Could not determine when '%s' was "
                                   "added the repository"),
                                 FUNC_10(VAR_13,
                                                        VAR_7));
      VAR_18 = FUNC_3(VAR_15->added_rev);
      VAR_19 = FUNC_14(VAR_8,
                                            VAR_11,
                                            VAR_7);
      VAR_20 = VAR_12;
      VAR_16 = VAR_11;
    }
  else
    {
      if (VAR_15->deleted_rev == VAR_1)
        return FUNC_12(VAR_0, ((void*)0),
                                 FUNC_1("Could not determine when '%s' was "
                                   "deleted from the repository"),
                                 FUNC_10(VAR_13,
                                                        VAR_7));
      VAR_18 = VAR_15->deleted_rev;
      VAR_19 = FUNC_14(VAR_8,
                                            VAR_9,
                                            VAR_7);
      VAR_20 = VAR_10;
      VAR_16 = VAR_11;
    }


  FUNC_0(FUNC_15(&VAR_14, VAR_6->wc_ctx,
                                                 VAR_13,
                                                 VAR_7, VAR_7));


  VAR_21 = FUNC_2(VAR_16,
                              VAR_17, VAR_18, VAR_19, VAR_20,
                              VAR_13,
                              (VAR_10 > VAR_12),
                              VAR_6, VAR_7, VAR_7);
  if (!VAR_21)
    VAR_21 = FUNC_16(VAR_6->wc_ctx, VAR_13, VAR_7);

  VAR_21 = FUNC_11(VAR_21, FUNC_17(VAR_6->wc_ctx,
                                                                 VAR_14,
                                                                 VAR_7));
  FUNC_13(VAR_13, VAR_7);
  FUNC_0(VAR_21);

  if (VAR_6->notify_func2)
    VAR_6->notify_func2(VAR_6->notify_baton2,
                      FUNC_18(VAR_13,
                                           VAR_3,
                                           VAR_7),
                      VAR_7);

  VAR_5->resolution_tree = FUNC_9(VAR_4);

  return VAR_2;
}
