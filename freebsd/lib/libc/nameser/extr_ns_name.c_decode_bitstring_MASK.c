
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static int
FUNC_1(const unsigned char **VAR_0, char *VAR_1, const char *VAR_2)
{
 const unsigned char *VAR_3 = *VAR_0;
 char *VAR_4 = VAR_1, VAR_5;
 int VAR_6, VAR_7, VAR_8, VAR_9;

 if ((VAR_7 = (*VAR_3 & 0xff)) == 0)
  VAR_7 = 256;
 VAR_8 = (VAR_7 + 3) / 4;
 VAR_8 += sizeof("\\[x/]") + (VAR_7 > 99 ? 3 : (VAR_7 > 9) ? 2 : 1);
 if (VAR_1 + VAR_8 >= VAR_2)
  return (-1);

 VAR_3++;
 VAR_9 = FUNC_0((VAR_1, "\\[x"));
 if (VAR_9 < 0)
  return (-1);
 VAR_1 += VAR_9;
 for (VAR_6 = VAR_7; VAR_6 > 7; VAR_6 -= 8, VAR_3++) {
  VAR_9 = FUNC_0((VAR_1, "%02x", *VAR_3 & 0xff));
  if (VAR_9 < 0)
   return (-1);
  VAR_1 += VAR_9;
 }
 if (VAR_6 > 4) {
  VAR_5 = *VAR_3++;
  VAR_9 = FUNC_0((VAR_1, "%02x", VAR_5 & (0xff << (8 - VAR_6))));
  if (VAR_9 < 0)
   return (-1);
  VAR_1 += VAR_9;
 } else if (VAR_6 > 0) {
  VAR_5 = *VAR_3++;
  VAR_9 = FUNC_0((VAR_1, "%1x",
          ((VAR_5 >> 4) & 0x0f) & (0x0f << (4 - VAR_6))));
  if (VAR_9 < 0)
   return (-1);
  VAR_1 += VAR_9;
 }
 VAR_9 = FUNC_0((VAR_1, "/%d]", VAR_7));
 if (VAR_9 < 0)
  return (-1);
 VAR_1 += VAR_9;

 *VAR_0 = VAR_3;
 return (VAR_1 - VAR_4);
}
