
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ svn_wc_operation_t ;
typedef scalar_t__ svn_revnum_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
struct TYPE_11__ {int wc_ctx; } ;
typedef TYPE_1__ svn_client_ctx_t ;
struct TYPE_12__ {int local_abspath; struct conflict_tree_incoming_delete_details* tree_conflict_incoming_details; } ;
typedef TYPE_2__ svn_client_conflict_t ;
struct TYPE_13__ {int id; } ;
typedef TYPE_3__ svn_client_conflict_option_t ;
typedef int svn_boolean_t ;
struct conflict_tree_incoming_delete_details {scalar_t__ deleted_rev; scalar_t__ added_rev; char const* repos_relpath; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 int FUNC_3 (char const**,int *,int *,TYPE_2__*,int *,int *) ;
 char* FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (char const*,int *) ;
 char const* FUNC_8 (char const*,int ) ;
 int * FUNC_9 (int ,int *,int ,int ,...) ;
 int FUNC_10 (char const*,scalar_t__*,int *) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (char const**,int ,char const*,int *,int *) ;
 int FUNC_13 (int *,scalar_t__*,char const**,int *,int *,int *,int *,int ,char const*,int ,int *,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static svn_error_t *
FUNC_14(svn_client_conflict_t *VAR_7,
                                       svn_client_conflict_option_t *VAR_8,
                                        svn_client_ctx_t *VAR_9,
                                       apr_pool_t *VAR_10)
{
  const char *VAR_11;
  const char *VAR_12;
  svn_wc_operation_t VAR_13;

  VAR_11 = FUNC_4(VAR_7);
  FUNC_0(FUNC_12(&VAR_12, VAR_9->wc_ctx,
                             VAR_11, VAR_10,
                             VAR_10));
  VAR_13 = FUNC_5(VAR_7);

  if (VAR_13 == VAR_6 ||
      VAR_13 == VAR_5)
    {
      struct conflict_tree_incoming_delete_details *VAR_14;
      svn_boolean_t VAR_15;
      svn_revnum_t VAR_16;
      const char *VAR_17;

      VAR_14 = VAR_7->tree_conflict_incoming_details;
      if (VAR_14 == ((void*)0))
        return FUNC_9(VAR_1, ((void*)0),
                                 FUNC_1("Conflict resolution option '%d' requires "
                                   "details for tree conflict at '%s' to be "
                                   "fetched from the repository."),
                                VAR_8->id,
                                FUNC_7(VAR_11,
                                                       VAR_10));




      FUNC_0(FUNC_13(&VAR_15, &VAR_16,
                                      &VAR_17,
                                      ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                      VAR_9->wc_ctx, VAR_11, VAR_0,
                                      VAR_10, VAR_10));
      if (!VAR_15)
        return FUNC_9(VAR_1, ((void*)0),
                                 FUNC_1("Cannot resolve tree conflict on '%s' "
                                   "(expected a copied item, but the item "
                                   "is not a copy)"),
                                 FUNC_7(
                                   FUNC_8(
                                     VAR_12,
                                     VAR_7->local_abspath),
                                 VAR_10));
      else if (VAR_14->deleted_rev == VAR_2 &&
               VAR_14->added_rev == VAR_2)
        return FUNC_9(VAR_1, ((void*)0),
                                 FUNC_1("Could not find the revision in which '%s' "
                                   "was deleted from the repository"),
                                 FUNC_7(
                                   FUNC_8(
                                     VAR_12,
                                     VAR_7->local_abspath),
                                   VAR_10));
      else if (VAR_14->deleted_rev != VAR_2 &&
               VAR_16 >= VAR_14->deleted_rev)
        return FUNC_9(VAR_1, ((void*)0),
                                 FUNC_1("Cannot resolve tree conflict on '%s' "
                                   "(expected an item copied from a revision "
                                   "smaller than r%ld, but the item was "
                                   "copied from r%ld)"),
                                 FUNC_7(
                                   FUNC_8(
                                     VAR_12, VAR_7->local_abspath),
                                   VAR_10),
                                 VAR_14->deleted_rev, VAR_16);

      else if (VAR_14->added_rev != VAR_2 &&
               VAR_16 < VAR_14->added_rev)
        return FUNC_9(VAR_1, ((void*)0),
                                 FUNC_1("Cannot resolve tree conflict on '%s' "
                                   "(expected an item copied from a revision "
                                   "larger than r%ld, but the item was "
                                   "copied from r%ld)"),
                                 FUNC_7(
                                   FUNC_8(
                                     VAR_12, VAR_7->local_abspath),
                                   VAR_10),
                                  VAR_14->added_rev, VAR_16);
      else if (VAR_13 == VAR_6)
        {
          const char *VAR_18;

          FUNC_0(FUNC_3(
                    &VAR_18, ((void*)0), ((void*)0), VAR_7,
                    VAR_10, VAR_10));
          if (FUNC_2(VAR_17, VAR_14->repos_relpath) != 0 &&
              FUNC_2(VAR_17, VAR_18) != 0)
            return FUNC_9(VAR_1, ((void*)0),
                                     FUNC_1("Cannot resolve tree conflict on '%s' "
                                       "(expected an item copied from '^/%s' "
                                       "or from '^/%s' but the item was "
                                       "copied from '^/%s@%ld')"),
                                     FUNC_7(
                                       FUNC_8(
                                         VAR_12, VAR_7->local_abspath),
                                       VAR_10),
                                     VAR_14->repos_relpath,
                                     VAR_18,
                                     VAR_17, VAR_16);
        }
      else if (VAR_13 == VAR_5)
        {
          const char *VAR_19;

          FUNC_0(FUNC_3(
                    &VAR_19, ((void*)0), ((void*)0), VAR_7,
                    VAR_10, VAR_10));

          if (FUNC_2(VAR_17, VAR_19) != 0)
            return FUNC_9(VAR_1, ((void*)0),
                                     FUNC_1("Cannot resolve tree conflict on '%s' "
                                       "(expected an item copied from '^/%s', "
                                       "but the item was copied from "
                                        "'^/%s@%ld')"),
                                     FUNC_7(
                                       FUNC_8(
                                         VAR_12,
                                         VAR_7->local_abspath),
                                       VAR_10),
                                     VAR_19,
                                     VAR_17, VAR_16);
        }
    }
  else if (VAR_13 == VAR_4)
    {
      svn_node_kind_t VAR_20;
      svn_node_kind_t VAR_21;


      VAR_20 =
        FUNC_6(VAR_7);
      FUNC_0(FUNC_10(VAR_11, &VAR_21, VAR_10));

      if (VAR_20 != VAR_21)
        return FUNC_9(VAR_1, ((void*)0),
                                 FUNC_1("Cannot resolve tree conflict on '%s' "
                                   "(expected node kind '%s' but found '%s')"),
                                 FUNC_7(
                                   FUNC_8(
                                     VAR_12, VAR_7->local_abspath),
                                   VAR_10),
                                 FUNC_11(VAR_20),
                                 FUNC_11(VAR_21));
    }

  return VAR_3;
}
