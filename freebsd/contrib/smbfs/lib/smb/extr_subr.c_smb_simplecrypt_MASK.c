
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char const*) ;

char *
FUNC_6(char *VAR_0, const char *VAR_1)
{
 int VAR_2, VAR_3;
 char *VAR_4;

 if (VAR_0 == ((void*)0)) {
  VAR_0 = FUNC_3(4 + 2 * FUNC_5(VAR_1));
  if (VAR_0 == ((void*)0))
   return ((void*)0);
 }
 VAR_4 = VAR_0;
 *VAR_0++ = '$';
 *VAR_0++ = '$';
 *VAR_0++ = '1';
 VAR_3 = 27;
 while (*VAR_1) {
  VAR_2 = *VAR_1++;
  if (FUNC_0(VAR_2))
      VAR_2 = (FUNC_2(VAR_2) ? ('A' + (VAR_2 - 'A' + 13) % 26) :
     FUNC_1(VAR_2) ? ('a' + (VAR_2 - 'a' + 13) % 26) : VAR_2);
  VAR_2 ^= VAR_3;
  VAR_3 += 13;
  if (VAR_3 > 256)
   VAR_3 -= 256;
  FUNC_4(VAR_0, "%02x", VAR_2);
  VAR_0 += 2;
 }
 *VAR_0 = 0;
 return VAR_4;
}
