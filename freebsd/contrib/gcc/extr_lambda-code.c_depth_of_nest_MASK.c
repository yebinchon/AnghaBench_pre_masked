
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loop {struct loop* inner; } ;



__attribute__((used)) static int
FUNC_0 (struct loop *VAR_0)
{
  size_t VAR_1 = 0;
  while (VAR_0)
    {
      VAR_1++;
      VAR_0 = VAR_0->inner;
    }
  return VAR_1;
}
