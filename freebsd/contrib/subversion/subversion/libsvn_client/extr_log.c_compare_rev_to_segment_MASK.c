
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ svn_revnum_t ;
struct TYPE_2__ {scalar_t__ range_start; scalar_t__ range_end; } ;
typedef TYPE_1__ svn_location_segment_t ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0,
                       const void *VAR_1)
{
  svn_revnum_t VAR_2 =
    * (svn_revnum_t *)VAR_0;
  const svn_location_segment_t *VAR_3 =
    *((const svn_location_segment_t * const *) VAR_1);

  if (VAR_2 < VAR_3->range_start)
    return -1;
  else if (VAR_2 > VAR_3->range_end)
    return 1;
  else
    return 0;
}
