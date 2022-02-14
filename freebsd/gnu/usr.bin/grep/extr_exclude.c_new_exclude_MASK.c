
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exclude {int exclude_alloc; char const** exclude; scalar_t__ exclude_count; } ;


 scalar_t__ FUNC_0 (int) ;

struct exclude *
FUNC_1 (void)
{
  struct exclude *VAR_0 = (struct exclude *) FUNC_0 (sizeof (struct exclude));
  VAR_0->exclude_count = 0;
  VAR_0->exclude_alloc = 64;
  VAR_0->exclude = (char const **) FUNC_0 (VAR_0->exclude_alloc * sizeof (char *));
  return VAR_0;
}
