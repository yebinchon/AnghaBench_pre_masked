
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;

__attribute__((used)) static int
FUNC_1 (const char *VAR_0, char *VAR_1, int VAR_2)
{
  int VAR_3;

  for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
    {
      if (VAR_0[0] == 0 || VAR_0[1] == 0)
 {


   return VAR_3;
 }
      *VAR_1++ = FUNC_0 (VAR_0[0]) * 16 + FUNC_0 (VAR_0[1]);
      VAR_0 += 2;
    }
  return VAR_3;
}
