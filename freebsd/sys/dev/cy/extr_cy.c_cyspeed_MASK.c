
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
typedef int speed_t ;



__attribute__((used)) static int
FUNC_0(speed_t VAR_0, u_long VAR_1, int *VAR_2)
{
 int VAR_3;
 int VAR_4;
 int VAR_5;
 int VAR_6;
 int VAR_7;

 if (VAR_0 == 0)
  return (0);
 if (VAR_0 < 0 || VAR_0 > 150000)
  return (-1);


 for (VAR_7 = 4, VAR_6 = 2048; VAR_7;
  VAR_7--, VAR_6 >>= 2) {
  if (VAR_1 / VAR_6 / VAR_0 > 63)
   break;
 }

 VAR_5 = (VAR_1 / VAR_6 * 2 / VAR_0 + 1) / 2;
 if (VAR_5 > 255)
  VAR_5 = 255;
 VAR_3 = VAR_1/VAR_6/VAR_5;


 VAR_4 = ((VAR_3 - (long)VAR_0) * 2000 / (long)VAR_0 + 1) / 2;


 if (VAR_4 < -30 || VAR_4 > 30)
  return (-1);

 *VAR_2 = VAR_7;
 return (VAR_5);
}
