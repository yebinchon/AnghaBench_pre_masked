
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONGEST ;



__attribute__((used)) static int
FUNC_0 (char *VAR_0, ULONGEST VAR_1, int VAR_2)
{
  int VAR_3;

  VAR_0[VAR_2] = '\0';

  for (VAR_3 = VAR_2 - 1; VAR_3 >= 0; VAR_3--)
    {
      VAR_0[VAR_3] = "0123456789abcdef"[(VAR_1 & 0xf)];
      VAR_1 >>= 4;
    }

  return VAR_2;
}
