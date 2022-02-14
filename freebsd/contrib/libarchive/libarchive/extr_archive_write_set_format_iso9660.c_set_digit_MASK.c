
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void
FUNC_0(unsigned char *VAR_0, size_t VAR_1, int VAR_2)
{

 while (VAR_1--) {
  VAR_0[VAR_1] = '0' + (VAR_2 % 10);
  VAR_2 /= 10;
 }
}
