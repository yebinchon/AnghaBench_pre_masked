
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned long
FUNC_0(const unsigned char *VAR_0, size_t VAR_1)
{
 unsigned VAR_2;
 unsigned long VAR_3 = 0;

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  VAR_3 <<= 8;
  VAR_3 += VAR_0[VAR_2];
 }
 return (VAR_3);
}
