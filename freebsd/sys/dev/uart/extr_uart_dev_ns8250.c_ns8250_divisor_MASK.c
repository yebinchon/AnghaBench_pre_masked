
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;
 int VAR_5;

 if (VAR_2 == 0)
  return (0);

 VAR_4 = (VAR_1 / (VAR_2 << 3) + 1) >> 1;
 if (VAR_4 == 0 || VAR_4 >= 65536)
  return (0);
 VAR_3 = VAR_1 / (VAR_4 << 4);


 VAR_5 = ((VAR_3 - VAR_2) * 2000 / VAR_2 + 1) >> 1;


 if (VAR_5 < -VAR_0 || VAR_5 > VAR_0)
  return (0);

 return (VAR_4);
}
