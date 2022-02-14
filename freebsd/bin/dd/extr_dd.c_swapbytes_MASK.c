
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void
FUNC_0(void *VAR_0, size_t VAR_1)
{
 unsigned char *VAR_2 = VAR_0;
 unsigned char VAR_3;

 while (VAR_1 > 1) {
  VAR_3 = VAR_2[0];
  VAR_2[0] = VAR_2[1];
  VAR_2[1] = VAR_3;
  VAR_2 += 2;
  VAR_1 -= 2;
 }
}
