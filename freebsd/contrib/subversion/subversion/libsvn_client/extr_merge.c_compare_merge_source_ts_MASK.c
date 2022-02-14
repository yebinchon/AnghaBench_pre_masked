
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
struct TYPE_4__ {TYPE_1__* loc1; } ;
typedef TYPE_2__ merge_source_t ;
struct TYPE_3__ {scalar_t__ rev; } ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0,
                        const void *VAR_1)
{
  svn_revnum_t VAR_2 = (*(const merge_source_t *const *)VAR_0)->loc1->rev;
  svn_revnum_t VAR_3 = (*(const merge_source_t *const *)VAR_1)->loc1->rev;
  if (VAR_2 == VAR_3)
    return 0;
  return VAR_2 < VAR_3 ? 1 : -1;
}
