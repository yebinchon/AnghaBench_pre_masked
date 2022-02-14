
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_source_file {struct macro_source_file* included_by; } ;



__attribute__((used)) static int
FUNC_0 (struct macro_source_file *VAR_0)
{
  int VAR_1;

  for (VAR_1 = 0; VAR_0->included_by; VAR_1++)
    VAR_0 = VAR_0->included_by;

  return VAR_1;
}
