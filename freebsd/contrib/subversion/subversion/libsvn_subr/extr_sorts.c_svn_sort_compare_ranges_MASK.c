
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ start; scalar_t__ end; } ;
typedef TYPE_1__ svn_merge_range_t ;



int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
  const svn_merge_range_t *VAR_2 = *((const svn_merge_range_t * const *) VAR_0);
  const svn_merge_range_t *VAR_3 = *((const svn_merge_range_t * const *) VAR_1);

  if (VAR_2->start == VAR_3->start
      && VAR_2->end == VAR_3->end)
    return 0;

  if (VAR_2->start == VAR_3->start)
    return VAR_2->end < VAR_3->end ? -1 : 1;

  return VAR_2->start < VAR_3->start ? -1 : 1;
}
