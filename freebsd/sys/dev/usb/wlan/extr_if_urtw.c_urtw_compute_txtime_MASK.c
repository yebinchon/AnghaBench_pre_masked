
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint16_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(uint16_t VAR_0, uint16_t VAR_1,
    uint8_t VAR_2, uint8_t VAR_3)
{
 uint16_t VAR_4, VAR_5, VAR_6;

 if (FUNC_0(VAR_1)) {
  if (VAR_2 || !VAR_3 || VAR_1 == 2)
   VAR_5 = (uint16_t)(144 + 48 +
       (VAR_0 * 8 / (VAR_1 / 2)));
  else
   VAR_5 = (uint16_t)(72 + 24 +
       (VAR_0 * 8 / (VAR_1 / 2)));
  if ((VAR_0 * 8 % (VAR_1 / 2)) != 0)
   VAR_5++;
 } else {
  VAR_6 = FUNC_1(VAR_1);
  VAR_4 = (16 + 8 * VAR_0 + 6) / VAR_6
      + (((16 + 8 * VAR_0 + 6) % VAR_6) ? 1 : 0);
  VAR_5 = (uint16_t)(16 + 4 + 4 * VAR_4 + 6);
 }
 return (VAR_5);
}
