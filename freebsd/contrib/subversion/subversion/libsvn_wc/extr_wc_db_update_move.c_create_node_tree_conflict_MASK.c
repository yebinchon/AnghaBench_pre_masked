
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int operation; int new_version; TYPE_3__* old_version; int db; int dst_op_depth; int wcroot; } ;
typedef TYPE_1__ update_move_baton_t ;
typedef int svn_wc_conflict_reason_t ;
typedef int svn_wc_conflict_action_t ;
typedef int svn_skel_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
struct TYPE_6__ {char const* dst_relpath; TYPE_1__* umb; } ;
typedef TYPE_2__ node_move_baton_t ;
typedef int apr_pool_t ;
struct TYPE_7__ {int path_in_repos; } ;


 int FUNC_0 (int **,int ,char const*,char*,int ,TYPE_3__*,int ,int ,int ,int ,char const*,int ,int ,char const*,int *,int *) ;
 int * FUNC_1 (int ) ;
 char* FUNC_2 (int ,int ,int *) ;
 char* FUNC_3 (char const*,int ,int *) ;
 int FUNC_4 (char const*,char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_skel_t **VAR_0,
                          node_move_baton_t *VAR_1,
                          const char *VAR_2,
                          svn_node_kind_t VAR_3,
                          svn_node_kind_t VAR_4,
                          svn_wc_conflict_reason_t VAR_5,
                          svn_wc_conflict_action_t VAR_6,
                          const char *VAR_7,
                          apr_pool_t *VAR_8,
                          apr_pool_t *VAR_9)
{
  update_move_baton_t *VAR_10 = VAR_1->umb;
  const char *VAR_11;
  const char *VAR_12 = FUNC_3(VAR_1->dst_relpath,
                                                    VAR_10->dst_op_depth,
                                                    VAR_9);

  VAR_11 =
            FUNC_2(VAR_1->umb->old_version->path_in_repos,
                             FUNC_4(VAR_12,
                                                       VAR_1->dst_relpath),
                             VAR_9);

  return FUNC_1(
            FUNC_0(VAR_0, VAR_10->wcroot, VAR_2,
                                 FUNC_3(VAR_2,
                                                    VAR_10->dst_op_depth,
                                                    VAR_9),
                                 VAR_10->db,
                                 VAR_10->old_version, VAR_10->new_version,
                                 VAR_10->operation, VAR_3, VAR_4,
                                 VAR_11,
                                 VAR_5, VAR_6, VAR_7,
                                 VAR_8, VAR_9));
}
