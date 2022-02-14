
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_opt_revision_t ;


 scalar_t__ VAR_0 ;

const svn_opt_revision_t *
FUNC_0(const svn_opt_revision_t *VAR_1,
                           const svn_opt_revision_t *VAR_2)
{
  if (VAR_1->kind == VAR_0)
    return VAR_2;
  return VAR_1;
}
