
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path_revision {scalar_t__ revnum; } ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
  struct path_revision *VAR_2 = *(struct path_revision *const *)VAR_0;
  struct path_revision *VAR_3 = *(struct path_revision *const *)VAR_1;

  if (VAR_2->revnum == VAR_3->revnum)
    return 0;

  return VAR_2->revnum < VAR_3->revnum ? 1 : -1;
}
