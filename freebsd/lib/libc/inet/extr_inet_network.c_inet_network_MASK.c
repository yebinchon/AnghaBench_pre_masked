
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int in_addr_t ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 int FUNC_2 (char const) ;
 scalar_t__ FUNC_3 (unsigned char) ;

in_addr_t
FUNC_4(const char *VAR_1)
{
 in_addr_t VAR_2, VAR_3, VAR_4;
 char VAR_5;
 in_addr_t VAR_6[4], *VAR_7 = VAR_6;
 int VAR_8, VAR_9;

again:
 VAR_2 = 0; VAR_3 = 10; VAR_9 = 0;
 if (*VAR_1 == '0')
  VAR_9 = 1, VAR_3 = 8, VAR_1++;
 if (*VAR_1 == 'x' || *VAR_1 == 'X')
  VAR_3 = 16, VAR_1++;
 while ((VAR_5 = *VAR_1) != 0) {
  if (FUNC_0((unsigned char)VAR_5)) {
   if (VAR_3 == 8U && (VAR_5 == '8' || VAR_5 == '9'))
    return (VAR_0);
   VAR_2 = (VAR_2 * VAR_3) + (VAR_5 - '0');
   VAR_1++;
   VAR_9 = 1;
   continue;
  }
  if (VAR_3 == 16U && FUNC_3((unsigned char)VAR_5)) {
   VAR_2 = (VAR_2 << 4) +
         (VAR_5 + 10 - (FUNC_1((unsigned char)VAR_5) ? 'a' : 'A'));
   VAR_1++;
   VAR_9 = 1;
   continue;
  }
  break;
 }
 if (!VAR_9)
  return (VAR_0);
 if (VAR_7 >= VAR_6 + 4 || VAR_2 > 0xffU)
  return (VAR_0);
 if (*VAR_1 == '.') {
  *VAR_7++ = VAR_2, VAR_1++;
  goto again;
 }
 if (*VAR_1 && !FUNC_2(*VAR_1&0xff))
  return (VAR_0);
 *VAR_7++ = VAR_2;
 VAR_4 = VAR_7 - VAR_6;
 if (VAR_4 > 4U)
  return (VAR_0);
 for (VAR_2 = 0, VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  VAR_2 <<= 8;
  VAR_2 |= VAR_6[VAR_8] & 0xff;
 }
 return (VAR_2);
}
