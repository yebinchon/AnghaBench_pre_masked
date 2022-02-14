
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(const char *VAR_0, size_t VAR_1)
{
 int VAR_2 = 0;

 while (VAR_1 > 0) {
  VAR_2 *= 8;
  VAR_2 += *VAR_0 - '0';
  --VAR_1;
  ++VAR_0;
 }
 return (VAR_2);
}
