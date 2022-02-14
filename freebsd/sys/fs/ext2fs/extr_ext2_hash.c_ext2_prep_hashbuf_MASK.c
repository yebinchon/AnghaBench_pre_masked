
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;



__attribute__((used)) static void
FUNC_0(const char *VAR_0, int VAR_1, uint32_t *VAR_2, int VAR_3,
    int VAR_4)
{
 uint32_t VAR_5 = VAR_1 | (VAR_1 << 8) | (VAR_1 << 16) | (VAR_1 << 24);
 uint32_t VAR_6;
 const unsigned char *VAR_7 = (const unsigned char *)VAR_0;
 const signed char *VAR_8 = (const signed char *)VAR_0;
 int VAR_9, VAR_10;
 int VAR_11;

 if (VAR_1 > VAR_3)
  VAR_9 = VAR_3;
 else
  VAR_9 = VAR_1;

 VAR_6 = VAR_5;

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++) {
  if (VAR_4)
   VAR_11 = (u_int)VAR_7[VAR_10];
  else
   VAR_11 = (int)VAR_8[VAR_10];

  if ((VAR_10 % 4) == 0)
   VAR_6 = VAR_5;

  VAR_6 <<= 8;
  VAR_6 += VAR_11;

  if ((VAR_10 % 4) == 3) {
   *VAR_2++ = VAR_6;
   VAR_3 -= sizeof(uint32_t);
   VAR_6 = VAR_5;
  }
 }

 VAR_3 -= sizeof(uint32_t);
 if (VAR_3 >= 0)
  *VAR_2++ = VAR_6;

 VAR_3 -= sizeof(uint32_t);
 while (VAR_3 >= 0) {
  *VAR_2++ = VAR_5;
  VAR_3 -= sizeof(uint32_t);
 }
}
