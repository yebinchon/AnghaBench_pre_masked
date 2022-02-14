
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(int VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
 int VAR_4 = 1, VAR_5, VAR_6;

 VAR_0 = VAR_0 / 1000;
 VAR_1 = VAR_1 / 1000;
 VAR_2 /= 1000;
 VAR_3 /= 1000;

 do {
  VAR_5 = -VAR_4;
  VAR_6 = VAR_4 * (VAR_0 - VAR_1);
  do {
   VAR_5--;
   VAR_6 = VAR_6 - VAR_1;
   if ((VAR_6 > VAR_2) && (VAR_6 < VAR_3)) {
    return 1;
   }
  } while ((VAR_6 > (VAR_1 - VAR_3)) || (VAR_5 > -5));
  VAR_4++;
 } while (VAR_4 < 5);

 return 0;
}
