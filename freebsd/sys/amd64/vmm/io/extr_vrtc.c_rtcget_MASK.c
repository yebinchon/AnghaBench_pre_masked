
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rtcdev {int reg_b; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct rtcdev *VAR_1, int VAR_2, int *VAR_3)
{
 uint8_t VAR_4, VAR_5;

 if (VAR_1->reg_b & VAR_0) {
  *VAR_3 = VAR_2;
  return (0);
 }

 VAR_5 = VAR_2 & 0xf;
 VAR_4 = (VAR_2 >> 4) & 0xf;

 if (VAR_5 > 9 || VAR_4 > 9)
  return (-1);

 *VAR_3 = VAR_4 * 10 + VAR_5;
 return (0);
}
