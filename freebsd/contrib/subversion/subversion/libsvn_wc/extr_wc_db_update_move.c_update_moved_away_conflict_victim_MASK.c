
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ src_op_depth; scalar_t__ dst_op_depth; void* cancel_baton; int cancel_func; TYPE_3__* wcroot; int * db; TYPE_2__* new_version; TYPE_2__* old_version; int operation; int * member_0; } ;
typedef TYPE_1__ update_move_baton_t ;
typedef int svn_wc_operation_t ;
struct TYPE_17__ {int peg_rev; int repos_uuid; int repos_url; int path_in_repos; int node_kind; } ;
typedef TYPE_2__ svn_wc_conflict_version_t ;
typedef int svn_wc_conflict_reason_t ;
typedef int svn_wc_conflict_action_t ;
struct TYPE_18__ {int sdb; } ;
typedef TYPE_3__ svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_cancel_func_t ;
struct TYPE_19__ {char const* src_relpath; char const* dst_relpath; TYPE_1__* umb; int member_0; } ;
typedef TYPE_4__ node_move_baton_t ;
typedef int apr_pool_t ;
typedef int apr_int64_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (scalar_t__*,TYPE_3__*,char const*,scalar_t__,int *) ;
 int FUNC_4 (TYPE_3__*,char const*,int *) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (TYPE_3__*,char const*,int *) ;
 int * FUNC_7 (int ,int *,int ,int ) ;
 int FUNC_8 (char const*,char const*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,TYPE_3__*,char const*,scalar_t__,int *,int *) ;
 int FUNC_11 (int *,int *,TYPE_3__*,int ,int *) ;
 int FUNC_12 (TYPE_3__*,char const*,scalar_t__,char const*,int *,int *,int *) ;
 int FUNC_13 (char const**,char const**,int *,TYPE_3__*,char const*,scalar_t__,int *,int *) ;
 int FUNC_14 (TYPE_4__*,TYPE_3__*,char const*,char const*,int *) ;
 int FUNC_15 (TYPE_3__*,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_16(svn_revnum_t *VAR_3,
                                  svn_revnum_t *VAR_4,
                                  svn_wc__db_t *VAR_5,
                                  svn_wc__db_wcroot_t *VAR_6,
                                  const char *VAR_7,
                                  const char *VAR_8,
                                  svn_wc_operation_t VAR_9,
                                  svn_wc_conflict_action_t VAR_10,
                                  svn_wc_conflict_reason_t VAR_11,
                                  svn_cancel_func_t VAR_12,
                                  void *VAR_13,
                                  apr_pool_t *VAR_14)
{
  update_move_baton_t VAR_15 = { ((void*)0) };
  const char *VAR_16, *VAR_17;
  svn_wc_conflict_version_t VAR_18;
  svn_wc_conflict_version_t VAR_19;
  apr_int64_t VAR_20;
  node_move_baton_t VAR_21 = { 0 };

  FUNC_1(FUNC_8(VAR_8, VAR_7));



  FUNC_0(FUNC_3(&VAR_15.src_op_depth, VAR_6,
                            VAR_7, FUNC_5(VAR_8),
                            VAR_14));

  FUNC_0(FUNC_13(&VAR_16, &VAR_17, ((void*)0),
                                            VAR_6, VAR_7,
                                            VAR_15.src_op_depth,
                                            VAR_14, VAR_14));

  if (VAR_17 == ((void*)0))
    return FUNC_7(VAR_1, ((void*)0),
                             FUNC_2("The node '%s' has not been moved away"),
                             FUNC_4(VAR_6, VAR_7,
                                                    VAR_14));

  VAR_15.dst_op_depth = FUNC_5(VAR_17);

  FUNC_0(FUNC_15(VAR_6, VAR_16, VAR_14));
  FUNC_0(FUNC_15(VAR_6, VAR_17, VAR_14));


  FUNC_0(FUNC_10(((void*)0), &VAR_19.node_kind,
                                    &VAR_19.peg_rev,
                                    &VAR_19.path_in_repos, &VAR_20,
                                    ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                    ((void*)0),
                                    VAR_6, VAR_16, VAR_15.src_op_depth,
                                    VAR_14, VAR_14));

  FUNC_0(FUNC_11(&VAR_19.repos_url,
                                      &VAR_19.repos_uuid,
                                      VAR_6, VAR_20,
                                      VAR_14));

  FUNC_0(FUNC_10(((void*)0), &VAR_18.node_kind,
                                    &VAR_18.peg_rev,
                                    &VAR_18.path_in_repos, &VAR_20,
                                    ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                    ((void*)0),
                                    VAR_6, VAR_17, VAR_15.dst_op_depth,
                                    VAR_14, VAR_14));

  FUNC_0(FUNC_11(&VAR_18.repos_url,
                                      &VAR_18.repos_uuid,
                                      VAR_6, VAR_20,
                                      VAR_14));
  *VAR_3 = VAR_18.peg_rev;
  *VAR_4 = VAR_19.peg_rev;

  VAR_15.operation = VAR_9;
  VAR_15.old_version= &VAR_18;
  VAR_15.new_version= &VAR_19;
  VAR_15.db = VAR_5;
  VAR_15.wcroot = VAR_6;
  VAR_15.cancel_func = VAR_12;
  VAR_15.cancel_baton = VAR_13;

  if (VAR_15.src_op_depth == 0)
    FUNC_0(FUNC_6(VAR_6, VAR_16, VAR_14));


  FUNC_0(FUNC_9(VAR_6->sdb,
                                      VAR_0));



  VAR_21.umb = &VAR_15;
  VAR_21.src_relpath = VAR_16;
  VAR_21.dst_relpath = VAR_17;







  FUNC_0(FUNC_14(&VAR_21, VAR_6, VAR_16, VAR_17,
                                 VAR_14));

  FUNC_0(FUNC_12(VAR_6, VAR_16,
                                            VAR_15.src_op_depth,
                                            VAR_17, ((void*)0), ((void*)0),
                                            VAR_14));

  return VAR_2;
}
