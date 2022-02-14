
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ repos_node_status; scalar_t__ node_status; scalar_t__ moved_to_abspath; scalar_t__ changelist; scalar_t__ lock; scalar_t__ versioned; scalar_t__ switched; scalar_t__ conflicted; scalar_t__ repos_lock; } ;
typedef TYPE_1__ svn_wc_status3_t ;
struct TYPE_5__ {int op_root; TYPE_1__ s; } ;
typedef TYPE_2__ svn_wc__internal_status_t ;
typedef scalar_t__ svn_boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static svn_boolean_t
FUNC_0(const svn_wc__internal_status_t *VAR_7,
                   svn_boolean_t VAR_8,
                   svn_boolean_t VAR_9)
{
  const svn_wc_status3_t *VAR_10 = &VAR_7->s;

  if (VAR_10->repos_node_status != VAR_4)
    return VAR_1;


  if (VAR_10->repos_lock)
    return VAR_1;

  if (VAR_10->conflicted)
    return VAR_1;


  if ((VAR_10->node_status == VAR_3) && (! VAR_8))
    return VAR_0;



  if (VAR_9)
    return VAR_1;


  if (VAR_10->node_status == VAR_6)
    return VAR_1;


  if ((VAR_10->node_status != VAR_4)
       && (VAR_10->node_status != VAR_5)
       && !(VAR_10->node_status == VAR_2
            && !VAR_7->op_root))
    return VAR_1;


  if (VAR_10->switched)
    return VAR_1;


  if (VAR_10->versioned && VAR_10->lock)
    return VAR_1;


  if (VAR_10->changelist)
    return VAR_1;

  if (VAR_10->moved_to_abspath)
    return VAR_1;


  return VAR_0;
}
