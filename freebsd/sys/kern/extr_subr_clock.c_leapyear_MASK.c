
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(int VAR_0)
{
 int VAR_1 = 0;

 if ((VAR_0 & 3) == 0) {
  VAR_1 = 1;
  if ((VAR_0 % 100) == 0) {
   VAR_1 = 0;
   if ((VAR_0 % 400) == 0)
    VAR_1 = 1;
  }
 }
 return (VAR_1);
}
