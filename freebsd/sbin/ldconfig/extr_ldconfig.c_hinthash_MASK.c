
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(char *VAR_0, int VAR_1)
{
 int VAR_2 = 0;

 while (*VAR_0)
  VAR_2 = (((VAR_2 << 1) + (VAR_2 >> 14)) ^ (*VAR_0++)) & 0x3fff;

 VAR_2 = (((VAR_2 << 1) + (VAR_2 >> 14)) ^ (VAR_1*257)) & 0x3fff;

 return VAR_2;
}
