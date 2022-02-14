
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int db; int wcroot; int dst_op_depth; } ;
typedef TYPE_2__ update_move_baton_t ;
typedef int svn_wc_conflict_action_t ;
typedef int svn_skel_t ;
typedef int svn_node_kind_t ;
typedef int svn_error_t ;
struct TYPE_8__ {int * dst_relpath; int skip; TYPE_1__* pb; scalar_t__ shadowed; TYPE_2__* umb; } ;
typedef TYPE_3__ node_move_baton_t ;
typedef int apr_pool_t ;
struct TYPE_6__ {int shadowed; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int **,TYPE_3__*,int *,int ,int ,int ,int ,int *,int *,int *) ;
 int VAR_2 ;
 int FUNC_3 (int *,char const**,int *,int ,int *,int ,int *,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,int *,int ,int ,int ,int ,int ,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_5(node_move_baton_t *VAR_7,
                   svn_node_kind_t VAR_8,
                   svn_node_kind_t VAR_9,
                   svn_wc_conflict_action_t VAR_10,
                   apr_pool_t *VAR_11)
{
  update_move_baton_t *VAR_12 = VAR_7->umb;
  const char *VAR_13;
  svn_skel_t *VAR_14;

  FUNC_1(VAR_7->shadowed && !VAR_7->pb->shadowed);

  VAR_7->skip = VAR_1;

  if (VAR_8 == VAR_2)
    VAR_13 = ((void*)0);
  else
    FUNC_0(FUNC_3(((void*)0), &VAR_13, ((void*)0),
                                              VAR_12->wcroot, VAR_7->dst_relpath,
                                              VAR_12->dst_op_depth,
                                              VAR_11, VAR_11));

  FUNC_0(FUNC_2(&VAR_14, VAR_7, VAR_7->dst_relpath,
                                    VAR_8, VAR_9,
                                    (VAR_13
                                     ? VAR_4
                                     : VAR_3),
                                    VAR_10, VAR_13
                                              ? VAR_7->dst_relpath
                                              : ((void*)0),
                                    VAR_11, VAR_11));

  FUNC_0(FUNC_4(VAR_12->wcroot, VAR_7->dst_relpath, VAR_12->db,
                               VAR_6,
                               VAR_9,
                               VAR_5,
                               VAR_5,
                               VAR_14, ((void*)0), VAR_11));

  return VAR_0;
}
