
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;

__attribute__((used)) static void
FUNC_1 (char **VAR_0)
{
  if ((VAR_0 == ((void*)0)) || (*VAR_0 == ((void*)0)))
    return;
  while (FUNC_0 (**VAR_0))
    *VAR_0 += 1;
}
