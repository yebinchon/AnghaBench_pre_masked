
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_client_ctx_t ;
struct TYPE_9__ {int pool; struct conflict_tree_incoming_delete_details* tree_conflict_incoming_details; } ;
typedef TYPE_1__ svn_client_conflict_t ;
struct TYPE_10__ {int description; TYPE_1__* conflict; } ;
typedef TYPE_2__ svn_client_conflict_option_t ;
struct conflict_tree_incoming_delete_details {int wc_move_target_idx; int * wc_move_targets; } ;
typedef int apr_pool_t ;
struct TYPE_11__ {int nelts; } ;
typedef TYPE_3__ apr_array_header_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,TYPE_1__*,int *,struct conflict_tree_incoming_delete_details*,int ,int *) ;
 int FUNC_4 (struct conflict_tree_incoming_delete_details*,int *) ;
 char* FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_7 (char const*,int *) ;
 int * FUNC_8 (int ,int *,int ,int,...) ;
 TYPE_3__* FUNC_9 (int *,int ) ;

svn_error_t *
FUNC_10(
  svn_client_conflict_option_t *VAR_5,
  int VAR_6,
  svn_client_ctx_t *VAR_7,
  apr_pool_t *VAR_8)
{
  svn_client_conflict_t *VAR_9 = VAR_5->conflict;
  struct conflict_tree_incoming_delete_details *VAR_10;
  const char *VAR_11;
  apr_array_header_t *VAR_12;

  FUNC_1(FUNC_6(VAR_5) ==
                 VAR_4 ||
                 FUNC_6(VAR_5) ==
                 VAR_3);

  VAR_11 = FUNC_5(VAR_9);
  VAR_10 = VAR_9->tree_conflict_incoming_details;
  if (VAR_10 == ((void*)0) || VAR_10->wc_move_targets == ((void*)0))
    return FUNC_8(VAR_1, ((void*)0),
                             FUNC_2("Setting a move target requires details "
                               "for tree conflict at '%s' to be fetched "
                               "from the repository first"),
                            FUNC_7(VAR_11,
                                                   VAR_8));

  VAR_12 =
    FUNC_9(VAR_10->wc_move_targets,
                  FUNC_4(VAR_10, VAR_8));

  if (VAR_6 < 0 ||
      VAR_6 > VAR_12->nelts)
    return FUNC_8(VAR_0, ((void*)0),
                             FUNC_2("Index '%d' is out of bounds of the possible "
                               "move target list for '%s'"),
                            VAR_6,
                            FUNC_7(VAR_11,
                                                   VAR_8));


  VAR_10->wc_move_target_idx = VAR_6;


  FUNC_0(FUNC_3(&VAR_5->description,
                                                       VAR_9, VAR_7,
                                                       VAR_10,
                                                       VAR_9->pool,
                                                       VAR_8));
  return VAR_2;
}
