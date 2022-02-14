
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(int VAR_0, int VAR_1)
{
 int VAR_2, VAR_3, VAR_4;

 if (VAR_1 == 0)
  return (-1);

 VAR_3 = (VAR_0 + VAR_1) / (VAR_1 << 1) - 2;
 if (VAR_3 < 0 || VAR_3 >= 65536)
  return (-1);
 VAR_2 = VAR_0 / 2 / (VAR_3 + 2);


 VAR_4 = ((VAR_2 - VAR_1) * 2000 / VAR_1 + 1) >> 1;


 if (VAR_4 < -30 || VAR_4 > 30)
  return (-1);

 return (VAR_3);
}
