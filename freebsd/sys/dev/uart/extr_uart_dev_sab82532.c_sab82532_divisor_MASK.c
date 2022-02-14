
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(int VAR_0, int VAR_1)
{
 int VAR_2, VAR_3, VAR_4;
 int VAR_5, VAR_6, VAR_7;

 if (VAR_1 == 0)
  return (0);

 VAR_4 = (VAR_0 / (VAR_1 << 3) + 1) >> 1;
 if (VAR_4 < 2 || VAR_4 >= 1048576)
  return (0);


 for (VAR_6 = 1; VAR_6 < 15; VAR_6++) {
  VAR_7 = VAR_4 / (1<<VAR_6);
  if (VAR_7 < 1 || VAR_7 > 63)
   continue;
  VAR_3 = VAR_7 * (1<<VAR_6);
  VAR_2 = VAR_0 / (VAR_3 << 4);


  VAR_5 = ((VAR_2 - VAR_1) * 2000 / VAR_1 + 1) >> 1;


  if (VAR_5 < -30 || VAR_5 > 30)
   continue;


  return ((VAR_7 - 1) | (VAR_6 << 6));
 }

 return (0);
}
