
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int node_kind; int path_in_repos; int peg_rev; } ;
typedef TYPE_2__ svn_wc_conflict_version_t ;
typedef int svn_wc_conflict_reason_t ;
typedef int svn_wc__db_wcroot_t ;
typedef int svn_wc__db_t ;
typedef int svn_skel_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_9__ {int local_relpath; TYPE_1__* b; } ;
typedef TYPE_3__ added_node_baton_t ;
struct TYPE_7__ {int new_version; int * wcroot; int * db; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int **,int *,int ,int ,int *,int *,TYPE_2__*,int ,int ,int ,int *,int ,int ,int *,int *,int *) ;
 int VAR_1 ;
 int FUNC_2 (int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int ,int *,int *) ;
 int VAR_2 ;
 TYPE_2__* FUNC_3 (int ,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int *,int ,int *,int ,int ,int ,int ,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(added_node_baton_t *VAR_6,
                                  svn_node_kind_t VAR_7,
                                  svn_node_kind_t VAR_8,
                                  svn_wc_conflict_reason_t VAR_9,
                                  apr_pool_t *VAR_10,
                                  apr_pool_t *VAR_11)

{
  svn_wc__db_t *VAR_12 = VAR_6->b->db;
  svn_wc__db_wcroot_t *VAR_13 = VAR_6->b->wcroot;
  svn_wc_conflict_version_t *VAR_14;
  svn_skel_t *VAR_15;

  VAR_14 = FUNC_3(VAR_6->b->new_version, VAR_10);


  FUNC_0(FUNC_2(((void*)0), ((void*)0), &VAR_14->peg_rev,
                                            &VAR_14->path_in_repos,
                                            ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                            ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                            VAR_13, VAR_6->local_relpath,
                                            VAR_11, VAR_11));
  VAR_14->node_kind = VAR_7;

  FUNC_0(FUNC_1(&VAR_15, VAR_13, VAR_6->local_relpath,
                               VAR_6->local_relpath, VAR_12, ((void*)0), VAR_14,
                               VAR_5,
                               VAR_1, VAR_7, ((void*)0),
                               VAR_9, VAR_2,
                               ((void*)0), VAR_11, VAR_11));

  FUNC_0(FUNC_4(VAR_13, VAR_6->local_relpath, VAR_12,
                               VAR_4, VAR_8,
                               VAR_3,
                               VAR_3,
                               VAR_15, ((void*)0), VAR_11));
  return VAR_0;
}
