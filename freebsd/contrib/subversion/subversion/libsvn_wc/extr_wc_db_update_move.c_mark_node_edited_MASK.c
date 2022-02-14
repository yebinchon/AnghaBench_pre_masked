
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_node_kind_t ;
typedef int svn_error_t ;
struct TYPE_6__ {TYPE_1__* umb; int src_relpath; int dst_relpath; scalar_t__ shadowed; struct TYPE_6__* pb; void* skip; void* edited; } ;
typedef TYPE_2__ node_move_baton_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {int src_op_depth; int wcroot; int dst_op_depth; } ;


 int FUNC_0 (int *) ;
 int * VAR_0 ;
 void* VAR_1 ;
 int * FUNC_1 (TYPE_2__*,int ,int ,int ,int *) ;
 int * FUNC_2 (int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int *,int ,int ,int ,int *,int *) ;
 int VAR_2 ;

__attribute__((used)) static svn_error_t *
FUNC_3(node_move_baton_t *VAR_3,
                 apr_pool_t *VAR_4)
{
  if (VAR_3->edited)
    return VAR_0;

  if (VAR_3->pb)
    {
      FUNC_0(FUNC_3(VAR_3->pb, VAR_4));

      if (VAR_3->pb->skip)
        VAR_3->skip = VAR_1;
    }

  VAR_3->edited = VAR_1;

  if (VAR_3->skip)
    return VAR_0;

  if (VAR_3->shadowed && !(VAR_3->pb && VAR_3->pb->shadowed))
    {
      svn_node_kind_t VAR_5, VAR_6;

      FUNC_0(FUNC_2(((void*)0), &VAR_5, ((void*)0),
                                        ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                        ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                        VAR_3->umb->wcroot, VAR_3->dst_relpath,
                                        VAR_3->umb->dst_op_depth,
                                        VAR_4, VAR_4));

      FUNC_0(FUNC_2(((void*)0), &VAR_6, ((void*)0), ((void*)0),
                                        ((void*)0), ((void*)0), ((void*)0),
                                        ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0),
                                        VAR_3->umb->wcroot, VAR_3->src_relpath,
                                        VAR_3->umb->src_op_depth,
                                        VAR_4, VAR_4));

      FUNC_0(FUNC_1(VAR_3,
                                 VAR_5, VAR_6,
                                 VAR_2,
                                 VAR_4));
    }

  return VAR_0;
}
