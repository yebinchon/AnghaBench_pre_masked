
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(int VAR_0, int VAR_1)
{
 int VAR_2;

 if (VAR_1 == 0)
  return (0);

 VAR_2 = (VAR_0 >> 4) / VAR_1;
 if (VAR_2 <= 1 || VAR_2 >= 1024)
  return (0);

 return (VAR_2);
}
