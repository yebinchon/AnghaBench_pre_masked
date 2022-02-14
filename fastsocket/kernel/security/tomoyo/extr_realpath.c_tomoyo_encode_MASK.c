
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char const) ;

int FUNC_1(char *VAR_1, int VAR_2, const char *VAR_3)
{
 while (1) {
  const unsigned char VAR_4 = *(unsigned char *) VAR_3++;

  if (FUNC_0(VAR_4)) {
   if (--VAR_2 <= 0)
    break;
   *VAR_1++ = (char) VAR_4;
   if (VAR_4 != '\\')
    continue;
   if (--VAR_2 <= 0)
    break;
   *VAR_1++ = (char) VAR_4;
   continue;
  }
  if (!VAR_4) {
   if (--VAR_2 <= 0)
    break;
   *VAR_1 = '\0';
   return 0;
  }
  VAR_2 -= 4;
  if (VAR_2 <= 0)
   break;
  *VAR_1++ = '\\';
  *VAR_1++ = (VAR_4 >> 6) + '0';
  *VAR_1++ = ((VAR_4 >> 3) & 7) + '0';
  *VAR_1++ = (VAR_4 & 7) + '0';
 }
 return -VAR_0;
}
