
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 size_t FUNC_1 (char const*) ;

size_t
FUNC_2 (char const *VAR_0)
{
  size_t VAR_1;

  for (VAR_1 = FUNC_1 (VAR_0); 1 < VAR_1 && FUNC_0 (VAR_0[VAR_1 - 1]); VAR_1--)
    continue;

  return VAR_1;
}
