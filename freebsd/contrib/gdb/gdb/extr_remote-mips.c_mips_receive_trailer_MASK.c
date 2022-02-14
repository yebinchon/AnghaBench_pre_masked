
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2 (unsigned char *VAR_2, int *VAR_3, int *VAR_4, int VAR_5)
{
  int VAR_6;
  int VAR_7;

  for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
    {
      VAR_7 = FUNC_1 (VAR_5);
      *VAR_4 = VAR_7;
      if (VAR_7 == VAR_0)
 return -1;
      if (!FUNC_0 (VAR_7))
 return -2;
      VAR_2[VAR_6] = VAR_7;
    }
  return 0;
}
