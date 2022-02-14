
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned char* FUNC_0 (size_t) ;

__attribute__((used)) static unsigned char * FUNC_1(const unsigned char *VAR_1, size_t VAR_2,
      size_t *VAR_3,
      const unsigned char *VAR_4,
      int VAR_5)
{
 unsigned char *VAR_6, *VAR_7;
 const unsigned char *VAR_8, *VAR_9;
 size_t VAR_10;
 int VAR_11;

 if (VAR_2 >= VAR_0 / 4)
  return ((void*)0);
 VAR_10 = VAR_2 * 4 / 3 + 4;
 if (VAR_5)
  VAR_10 += VAR_10 / 72;
 VAR_10++;
 if (VAR_10 < VAR_2)
  return ((void*)0);
 VAR_6 = FUNC_0(VAR_10);
 if (VAR_6 == ((void*)0))
  return ((void*)0);

 VAR_8 = VAR_1 + VAR_2;
 VAR_9 = VAR_1;
 VAR_7 = VAR_6;
 VAR_11 = 0;
 while (VAR_8 - VAR_9 >= 3) {
  *VAR_7++ = VAR_4[(VAR_9[0] >> 2) & 0x3f];
  *VAR_7++ = VAR_4[(((VAR_9[0] & 0x03) << 4) | (VAR_9[1] >> 4)) & 0x3f];
  *VAR_7++ = VAR_4[(((VAR_9[1] & 0x0f) << 2) | (VAR_9[2] >> 6)) & 0x3f];
  *VAR_7++ = VAR_4[VAR_9[2] & 0x3f];
  VAR_9 += 3;
  VAR_11 += 4;
  if (VAR_5 && VAR_11 >= 72) {
   *VAR_7++ = '\n';
   VAR_11 = 0;
  }
 }

 if (VAR_8 - VAR_9) {
  *VAR_7++ = VAR_4[(VAR_9[0] >> 2) & 0x3f];
  if (VAR_8 - VAR_9 == 1) {
   *VAR_7++ = VAR_4[((VAR_9[0] & 0x03) << 4) & 0x3f];
   if (VAR_5)
    *VAR_7++ = '=';
  } else {
   *VAR_7++ = VAR_4[(((VAR_9[0] & 0x03) << 4) |
     (VAR_9[1] >> 4)) & 0x3f];
   *VAR_7++ = VAR_4[((VAR_9[1] & 0x0f) << 2) & 0x3f];
  }
  if (VAR_5)
   *VAR_7++ = '=';
  VAR_11 += 4;
 }

 if (VAR_5 && VAR_11)
  *VAR_7++ = '\n';

 *VAR_7 = '\0';
 if (VAR_3)
  *VAR_3 = VAR_7 - VAR_6;
 return VAR_6;
}
