
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,void const*) ;

void
FUNC_1 (int VAR_2, const void *VAR_3, const void *VAR_4)
{
  int VAR_5;

  for (VAR_5 = VAR_0; VAR_5 < VAR_0 + 31; ++VAR_5)
    if (VAR_2 == VAR_5 || VAR_2 == -1)
      FUNC_0 (VAR_5, (const char *)VAR_3 + (VAR_5 - VAR_0) * 8);

  if (VAR_2 == VAR_1 || VAR_2 == -1)
    FUNC_0 (VAR_1, VAR_4);
}
