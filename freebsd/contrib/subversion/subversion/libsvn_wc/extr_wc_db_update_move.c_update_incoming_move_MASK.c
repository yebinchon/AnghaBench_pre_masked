
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {void* cancel_baton; int cancel_func; TYPE_3__* wcroot; int * db; TYPE_2__* new_version; TYPE_2__* old_version; int operation; void* src_op_depth; void* dst_op_depth; int * member_0; } ;
typedef TYPE_1__ update_move_baton_t ;
typedef int svn_wc_operation_t ;
struct TYPE_14__ {int peg_rev; int repos_uuid; int repos_url; int path_in_repos; int node_kind; } ;
typedef TYPE_2__ svn_wc_conflict_version_t ;
typedef int svn_wc_conflict_reason_t ;
typedef int svn_wc_conflict_action_t ;
struct TYPE_15__ {int sdb; int abspath; } ;
typedef TYPE_3__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
typedef scalar_t__ svn_boolean_t ;
struct TYPE_16__ {char const* src_relpath; char const* dst_relpath; TYPE_1__* umb; int member_0; } ;
typedef TYPE_4__ node_move_baton_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (char const*) ;
 int FUNC_4 (TYPE_3__*,char const*,int *) ;
 int FUNC_5 (int ,char const*,int *) ;
 int FUNC_6 (int ,int *) ;
 int * FUNC_7 (int ,int *,int ,int ,int ) ;
 int * FUNC_8 (char const*,char const*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,TYPE_3__*,char const*,int *,int *) ;
 int FUNC_11 (int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,TYPE_3__*,char const*,void*,int *,int *) ;
 int FUNC_12 (int *,int *,TYPE_3__*,int ,int *) ;
 int FUNC_13 (scalar_t__*,int *,int *,int ,int ,int ,void*,int *) ;
 int FUNC_14 (TYPE_4__*,TYPE_3__*,char const*,char const*,int *) ;
 int FUNC_15 (TYPE_3__*,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_16(svn_revnum_t *VAR_4,
                    svn_revnum_t *VAR_5,
                    svn_wc__db_t *VAR_6,
                    svn_wc__db_wcroot_t *VAR_7,
                    const char *VAR_8,
                    const char *VAR_9,
                    svn_wc_operation_t VAR_10,
                    svn_wc_conflict_action_t VAR_11,
                    svn_wc_conflict_reason_t VAR_12,
                    svn_cancel_func_t VAR_13,
                    void *VAR_14,
                    apr_pool_t *VAR_15)
{
  update_move_baton_t VAR_16 = { ((void*)0) };
  svn_wc_conflict_version_t VAR_17;
  svn_wc_conflict_version_t VAR_18;
  apr_int64_t VAR_19;
  node_move_baton_t VAR_20 = { 0 };
  svn_boolean_t VAR_21;

  FUNC_1(FUNC_8(VAR_9, VAR_8) == ((void*)0));
  VAR_16.src_op_depth = FUNC_3(VAR_8);
  VAR_16.dst_op_depth = FUNC_3(VAR_9);

  FUNC_0(FUNC_15(VAR_7, VAR_8, VAR_15));
  FUNC_0(FUNC_15(VAR_7, VAR_9, VAR_15));


  FUNC_0(FUNC_13(&VAR_21, ((void*)0), VAR_6,
                                      FUNC_5(VAR_7->abspath,
                                                      VAR_9,
                                                      VAR_15),
                                      VAR_3, VAR_13, VAR_14,
                                      VAR_15));
  if (VAR_21)
    return FUNC_7(VAR_1, ((void*)0),
                             FUNC_2("Cannot merge local changes from '%s' because "
                               "'%s' already contains other local changes "
                               "(please commit or revert these other changes "
                               "and try again)"),
                             FUNC_6(
                               FUNC_5(VAR_7->abspath, VAR_8,
                                               VAR_15),
                               VAR_15),
                             FUNC_6(
                               FUNC_5(VAR_7->abspath, VAR_9,
                                               VAR_15),
                               VAR_15));


  FUNC_0(FUNC_4(VAR_7, VAR_9, VAR_15));


  FUNC_0(FUNC_10(((void*)0), &VAR_18.node_kind,
                                            &VAR_18.peg_rev,
                                            &VAR_18.path_in_repos,
                                            &VAR_19,
                                            ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                            ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                            VAR_7, VAR_9,
                                            VAR_15, VAR_15));

  FUNC_0(FUNC_12(&VAR_18.repos_url,
                                      &VAR_18.repos_uuid,
                                      VAR_7, VAR_19,
                                      VAR_15));


  FUNC_0(FUNC_11(((void*)0), &VAR_17.node_kind,
                                    &VAR_17.peg_rev,
                                    &VAR_17.path_in_repos, &VAR_19,
                                    ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                    ((void*)0), VAR_7,
                                    VAR_8, VAR_16.src_op_depth,
                                    VAR_15, VAR_15));

  FUNC_0(FUNC_12(&VAR_17.repos_url,
                                      &VAR_17.repos_uuid,
                                      VAR_7, VAR_19,
                                      VAR_15));
  *VAR_4 = VAR_17.peg_rev;
  *VAR_5 = VAR_18.peg_rev;

  VAR_16.operation = VAR_10;
  VAR_16.old_version= &VAR_17;
  VAR_16.new_version= &VAR_18;
  VAR_16.db = VAR_6;
  VAR_16.wcroot = VAR_7;
  VAR_16.cancel_func = VAR_13;
  VAR_16.cancel_baton = VAR_14;


  FUNC_0(FUNC_9(VAR_7->sdb,
                                      VAR_0));



  VAR_20.umb = &VAR_16;
  VAR_20.src_relpath = VAR_8;
  VAR_20.dst_relpath = VAR_9;







  FUNC_0(FUNC_14(&VAR_20, VAR_7, VAR_8, VAR_9,
                                     VAR_15));

  return VAR_2;
}
