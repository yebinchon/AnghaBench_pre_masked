
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_wc_notify_state_t ;
typedef scalar_t__ svn_node_kind_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_5__ {TYPE_1__* b; int local_relpath; } ;
typedef TYPE_2__ added_node_baton_t ;
struct TYPE_4__ {int db; int wcroot; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ,int ,scalar_t__,int ,int ,int *,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_2(added_node_baton_t *VAR_6,
                                              svn_node_kind_t VAR_7,
                                              svn_node_kind_t VAR_8,
                                              apr_pool_t *VAR_9)
{
  svn_wc_notify_state_t VAR_10;

  if (VAR_8 == VAR_1)
      VAR_10 = VAR_4;
  else
      VAR_10 = VAR_5;

  FUNC_0(FUNC_1(VAR_6->b->wcroot, VAR_6->local_relpath, VAR_6->b->db,
                               VAR_2, VAR_7,
                               VAR_10, VAR_3,
                               ((void*)0), ((void*)0), VAR_9));
  return VAR_0;
}
