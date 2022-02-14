
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;



__attribute__((used)) static uint32_t
FUNC_0(const char *VAR_0, int VAR_1, int VAR_2)
{
 uint32_t VAR_3, VAR_4 = 0x12A3FE2D, VAR_5 = 0x37ABE8F9;
 uint32_t VAR_6 = 0x6D22F5;
 const unsigned char *VAR_7 = (const unsigned char *)VAR_0;
 const signed char *VAR_8 = (const signed char *)VAR_0;
 int VAR_9, VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  if (VAR_2)
   VAR_9 = (u_int)*VAR_7++;
  else
   VAR_9 = (int)*VAR_8++;

  VAR_3 = VAR_5 + (VAR_4 ^ (VAR_9 * VAR_6));
  if (VAR_3 & 0x80000000)
   VAR_3 -= 0x7FFFFFFF;
  VAR_5 = VAR_4;
  VAR_4 = VAR_3;
 }

 return (VAR_4 << 1);
}
