
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int* VAR_1 ;
 long* VAR_2 ;
 int FUNC_0 (int) ;

int
FUNC_1 (long VAR_3)
{
  long *VAR_4;

  FUNC_0 ((VAR_2 != ((void*)0)) || (VAR_0 == 0));

  for (VAR_4 = VAR_2; VAR_4 < VAR_2 + VAR_0; ++VAR_4)
    if (*VAR_4 == VAR_3)
      return VAR_1[VAR_4 - VAR_2];


  return 0;
}
