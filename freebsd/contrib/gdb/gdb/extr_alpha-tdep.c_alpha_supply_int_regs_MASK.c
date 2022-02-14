
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,void const*) ;

void
FUNC_1 (int VAR_3, const void *VAR_4,
         const void *VAR_5, const void *VAR_6)
{
  int VAR_7;

  for (VAR_7 = 0; VAR_7 < 31; ++VAR_7)
    if (VAR_3 == VAR_7 || VAR_3 == -1)
      FUNC_0 (VAR_7, (const char *)VAR_4 + VAR_7*8);

  if (VAR_3 == VAR_2 || VAR_3 == -1)
    FUNC_0 (VAR_2, ((void*)0));

  if (VAR_3 == VAR_0 || VAR_3 == -1)
    FUNC_0 (VAR_0, VAR_5);

  if (VAR_3 == VAR_1 || VAR_3 == -1)
    FUNC_0 (VAR_1, VAR_6);
}
