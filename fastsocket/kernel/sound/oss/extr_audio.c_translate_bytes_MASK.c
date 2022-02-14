
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(const unsigned char *VAR_0, unsigned char *VAR_1, int VAR_2)
{
 unsigned long VAR_3;

 if (VAR_2 <= 0)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3)
  VAR_1[VAR_3] = VAR_0[VAR_1[VAR_3]];
}
