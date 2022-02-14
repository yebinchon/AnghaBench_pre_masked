
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(char *VAR_0, unsigned char VAR_1)
{
  char VAR_2[] = "0123456789ABCDEF";
  VAR_0[0] = VAR_2[(VAR_1>>4)];
  VAR_0[1] = VAR_2[VAR_1&0xF];
  VAR_0[2] = 0;
}
