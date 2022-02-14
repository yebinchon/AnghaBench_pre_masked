
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DCACHE ;
typedef scalar_t__ CORE_ADDR ;


 int FUNC_0 (int *,scalar_t__,char*) ;
 int FUNC_1 (int *,scalar_t__,char*) ;
 int FUNC_2 (int *) ;

int
FUNC_3 (DCACHE *VAR_0, CORE_ADDR VAR_1, char *VAR_2, int VAR_3,
      int VAR_4)
{
  int VAR_5;
  int (*VAR_6) (DCACHE *VAR_7, CORE_ADDR VAR_8, char *VAR_9);
  VAR_6 = VAR_4 ? FUNC_1 : FUNC_0;

  for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++)
    {
      if (!VAR_6 (VAR_0, VAR_1 + VAR_5, VAR_2 + VAR_5))
 return 0;
    }
  if (VAR_4)
    FUNC_2 (VAR_0);

  return VAR_3;
}
