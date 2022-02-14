
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_atoms {scalar_t__ total_runtime; } ;



__attribute__((used)) static int FUNC_0(struct work_atoms *VAR_0, struct work_atoms *VAR_1)
{
 if (VAR_0->total_runtime < VAR_1->total_runtime)
  return -1;
 if (VAR_0->total_runtime > VAR_1->total_runtime)
  return 1;

 return 0;
}
