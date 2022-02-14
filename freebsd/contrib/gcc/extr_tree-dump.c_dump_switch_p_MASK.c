
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (char const*,int *,int) ;
 int * VAR_3 ;
 size_t VAR_4 ;

int
FUNC_1 (const char *VAR_5)
{
  size_t VAR_6;
  int VAR_7 = 0;

  for (VAR_6 = VAR_1 + 1; VAR_6 != VAR_0; VAR_6++)
    VAR_7 |= FUNC_0 (VAR_5, &VAR_2[VAR_6], 0);


  if (!VAR_7)
    for (VAR_6 = VAR_1 + 1; VAR_6 != VAR_0; VAR_6++)
      VAR_7 |= FUNC_0 (VAR_5, &VAR_2[VAR_6], 1);

  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
    VAR_7 |= FUNC_0 (VAR_5, &VAR_3[VAR_6], 0);

  if (!VAR_7)
    for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
      VAR_7 |= FUNC_0 (VAR_5, &VAR_3[VAR_6], 1);


  return VAR_7;
}
