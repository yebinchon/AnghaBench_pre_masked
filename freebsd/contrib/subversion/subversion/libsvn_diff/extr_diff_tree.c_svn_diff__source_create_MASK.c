
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int svn_revnum_t ;
struct TYPE_4__ {int revision; } ;
typedef TYPE_1__ svn_diff_source_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;

svn_diff_source_t *
FUNC_1(svn_revnum_t VAR_0,
                        apr_pool_t *VAR_1)
{
  svn_diff_source_t *VAR_2 = FUNC_0(VAR_1, sizeof(*VAR_2));

  VAR_2->revision = VAR_0;
  return VAR_2;
}
