
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ range_start; } ;
typedef TYPE_1__ svn_location_segment_t ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
  const svn_location_segment_t *VAR_2
    = *((const svn_location_segment_t * const *) VAR_0);
  const svn_location_segment_t *VAR_3
    = *((const svn_location_segment_t * const *) VAR_1);
  if (VAR_2->range_start == VAR_3->range_start)
    return 0;
  return (VAR_2->range_start < VAR_3->range_start) ? -1 : 1;
}
