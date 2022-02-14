
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,void*) ;

void
FUNC_1 (int VAR_2, void *VAR_3, void *VAR_4, void *VAR_5)
{
  int VAR_6;

  for (VAR_6 = 0; VAR_6 < 31; ++VAR_6)
    if (VAR_2 == VAR_6 || VAR_2 == -1)
      FUNC_0 (VAR_6, (char *)VAR_3 + VAR_6*8);

  if (VAR_2 == VAR_0 || VAR_2 == -1)
    FUNC_0 (VAR_0, VAR_4);

  if (VAR_5 && (VAR_2 == VAR_1 || VAR_2 == -1))
    FUNC_0 (VAR_1, VAR_5);
}
