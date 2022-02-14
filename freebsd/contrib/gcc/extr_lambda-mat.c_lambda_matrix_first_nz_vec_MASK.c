
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ** lambda_matrix ;


 int FUNC_0 (int *,int,int) ;

int
FUNC_1 (lambda_matrix VAR_0, int VAR_1, int VAR_2,
       int VAR_3)
{
  int VAR_4;
  bool VAR_5 = 0;

  for (VAR_4 = VAR_3; (VAR_4 < VAR_1) && !VAR_5; VAR_4++)
    {
      if ((VAR_0[VAR_4] != ((void*)0))
   && (FUNC_0 (VAR_0[VAR_4], VAR_2, VAR_3) < VAR_2))
 VAR_5 = 1;
    }

  if (VAR_5)
    return VAR_4 - 1;
  return VAR_1;
}
