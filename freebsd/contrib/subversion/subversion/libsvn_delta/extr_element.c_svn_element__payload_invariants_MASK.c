
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int eid; scalar_t__ branch_id; int rev; } ;
struct TYPE_5__ {scalar_t__ kind; int target; int text; scalar_t__ props; TYPE_1__ branch_ref; scalar_t__ is_subbranch_root; } ;
typedef TYPE_2__ svn_element__payload_t ;
typedef int svn_boolean_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

svn_boolean_t
FUNC_1(const svn_element__payload_t *VAR_6)
{
  if (VAR_6->is_subbranch_root)
    return VAR_1;



  if (VAR_6->kind == VAR_5)
    if (FUNC_0(VAR_6->branch_ref.rev)
        && VAR_6->branch_ref.branch_id
        && VAR_6->branch_ref.eid != -1)
      return VAR_1;
  if ((VAR_6->kind == VAR_2
       || VAR_6->kind == VAR_3
       || VAR_6->kind == VAR_4)
      && (VAR_6->props
          && ((VAR_6->kind == VAR_3) == !!VAR_6->text)
          && ((VAR_6->kind == VAR_4) == !!VAR_6->target)))
    return VAR_1;
  return VAR_0;
}
