
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void
FUNC_0(unsigned char *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < 8; VAR_1 ++) {
  unsigned VAR_2;

  VAR_2 = VAR_0[VAR_1];
  VAR_0[VAR_1] = VAR_0[15 - VAR_1];
  VAR_0[15 - VAR_1] = VAR_2;
 }
}
