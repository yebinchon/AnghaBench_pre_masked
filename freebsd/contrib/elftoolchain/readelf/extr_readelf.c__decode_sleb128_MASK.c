
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int64_t ;



__attribute__((used)) static int64_t
FUNC_0(uint8_t **VAR_0, uint8_t *VAR_1)
{
 int64_t VAR_2 = 0;
 uint8_t VAR_3 = 0;
 int VAR_4 = 0;

 uint8_t *VAR_5 = *VAR_0;

 do {
  if (VAR_5 >= VAR_1)
   break;
  VAR_3 = *VAR_5++;
  VAR_2 |= ((VAR_3 & 0x7f) << VAR_4);
  VAR_4 += 7;
 } while ((VAR_3 & 0x80) != 0);

 if (VAR_4 < 32 && (VAR_3 & 0x40) != 0)
  VAR_2 |= (-1 << VAR_4);

 *VAR_0 = VAR_5;

 return (VAR_2);
}
