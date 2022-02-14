
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static char *
FUNC_1(const char *VAR_0)
{
 const char *VAR_1;
 char *VAR_2;
 int VAR_3 = 0;
 char *VAR_4;

 for (VAR_1 = VAR_0; *VAR_1 != '\0'; VAR_1++) {
  if (*VAR_1 < 33 || *VAR_1 > 126 || *VAR_1 == '%' || *VAR_1 == '=')
   VAR_3 += 3;
  else
   VAR_3++;
 }

 VAR_4 = (char *)FUNC_0(VAR_3 + 1);
 if (VAR_4 == ((void*)0))
  return (((void*)0));

 for (VAR_1 = VAR_0, VAR_2 = VAR_4; *VAR_1 != '\0'; VAR_1++) {

  if (*VAR_1 < 33 || *VAR_1 > 126 || *VAR_1 == '%' || *VAR_1 == '=') {

   *VAR_2++ = '%';
   *VAR_2++ = "0123456789ABCDEF"[0x0f & (*VAR_1 >> 4)];
   *VAR_2++ = "0123456789ABCDEF"[0x0f & *VAR_1];
  } else {
   *VAR_2++ = *VAR_1;
  }
 }
 *VAR_2 = '\0';
 return (VAR_4);
}
