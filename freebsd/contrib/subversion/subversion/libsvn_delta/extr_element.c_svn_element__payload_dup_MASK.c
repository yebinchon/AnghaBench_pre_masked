
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {void* branch_id; } ;
struct TYPE_9__ {scalar_t__ kind; void* target; scalar_t__ text; scalar_t__ props; TYPE_1__ branch_ref; } ;
typedef TYPE_2__ svn_element__payload_t ;
typedef int apr_pool_t ;


 TYPE_2__* FUNC_0 (int *,TYPE_2__ const*,int) ;
 void* FUNC_1 (int *,void*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_2__ const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__,int *) ;
 scalar_t__ FUNC_5 (scalar_t__,int *) ;

svn_element__payload_t *
FUNC_6(const svn_element__payload_t *VAR_2,
                         apr_pool_t *VAR_3)
{
  svn_element__payload_t *VAR_4;

  FUNC_2(! VAR_2 || FUNC_3(VAR_2));

  if (VAR_2 == ((void*)0))
    return ((void*)0);

  VAR_4 = FUNC_0(VAR_3, VAR_2, sizeof(*VAR_4));
  if (VAR_2->branch_ref.branch_id)
    VAR_4->branch_ref.branch_id
      = FUNC_1(VAR_3, VAR_2->branch_ref.branch_id);
  if (VAR_2->props)
    VAR_4->props = FUNC_4(VAR_2->props, VAR_3);
  if (VAR_2->kind == VAR_0 && VAR_2->text)
    VAR_4->text = FUNC_5(VAR_2->text, VAR_3);
  if (VAR_2->kind == VAR_1 && VAR_2->target)
    VAR_4->target = FUNC_1(VAR_3, VAR_2->target);
  return VAR_4;
}
