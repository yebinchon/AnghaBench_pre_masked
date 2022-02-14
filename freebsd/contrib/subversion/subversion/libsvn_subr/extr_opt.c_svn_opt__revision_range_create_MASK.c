
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_opt_revision_t ;
struct TYPE_4__ {int end; int start; } ;
typedef TYPE_1__ svn_opt_revision_range_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;

svn_opt_revision_range_t *
FUNC_1(const svn_opt_revision_t *VAR_0,
                               const svn_opt_revision_t *VAR_1,
                               apr_pool_t *VAR_2)
{
  svn_opt_revision_range_t *VAR_3 = FUNC_0(VAR_2, sizeof(*VAR_3));

  VAR_3->start = *VAR_0;
  VAR_3->end = *VAR_1;
  return VAR_3;
}
