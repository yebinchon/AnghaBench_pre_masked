
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,char*,int) ;
 int FUNC_5 (char*,char**,int) ;

int
FUNC_6(char *VAR_1, const char *VAR_2)
{
 char *VAR_3, VAR_4[3];
 int VAR_5, VAR_6, VAR_7;

 if (FUNC_4(VAR_2, "$$1", 3) != 0)
  return VAR_0;
 VAR_2 += 3;
 VAR_5 = FUNC_3(VAR_2);
 if (VAR_5 & 1)
  return VAR_0;
 VAR_5 /= 2;
 VAR_4[2] = 0;
 VAR_7 = 27;
 while (VAR_5--) {
  VAR_4[0] = *VAR_2++;
  VAR_4[1] = *VAR_2++;
  VAR_6 = FUNC_5(VAR_4, &VAR_3, 16);
  if (*VAR_3 != 0)
   return VAR_0;
  VAR_6 ^= VAR_7;
  VAR_7 += 13;
  if (VAR_7 > 256)
   VAR_7 -= 256;
  if (FUNC_0(VAR_6))
      VAR_6 = (FUNC_2(VAR_6) ? ('A' + (VAR_6 - 'A' + 13) % 26) :
     FUNC_1(VAR_6) ? ('a' + (VAR_6 - 'a' + 13) % 26) : VAR_6);
  *VAR_1++ = VAR_6;
 }
 *VAR_1 = 0;
 return 0;
}
