
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int
FUNC_0(unsigned char *VAR_0, size_t VAR_1)
{
 size_t VAR_2;
 int VAR_3;

 for (VAR_3 = VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  VAR_3 |= (*VAR_0++ << ((VAR_1 - VAR_2 - 1) * 8));
 }
 return (VAR_3);
}
