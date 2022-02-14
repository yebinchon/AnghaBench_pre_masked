
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;

int
FUNC_1 (char *VAR_0, const char *VAR_1, int VAR_2)
{
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
    {
      if (VAR_1[0] == 0 || VAR_1[1] == 0)
        {


          return VAR_3;
        }
      *VAR_0++ = FUNC_0 (VAR_1[0]) * 16 + FUNC_0 (VAR_1[1]);
      VAR_1 += 2;
    }
  return VAR_3;
}
