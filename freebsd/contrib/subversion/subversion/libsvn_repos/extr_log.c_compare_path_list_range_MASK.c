
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ start; scalar_t__ end; } ;
struct path_list_range {TYPE_1__ range; } ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
  struct path_list_range *VAR_2 = *((struct path_list_range *const *) VAR_0);
  struct path_list_range *VAR_3 = *((struct path_list_range *const *) VAR_1);

  if (VAR_2->range.start < VAR_3->range.start)
    return -1;
  if (VAR_2->range.start > VAR_3->range.start)
    return 1;
  if (VAR_2->range.end < VAR_3->range.end)
    return -1;
  if (VAR_2->range.end > VAR_3->range.end)
    return 1;

  return 0;
}
