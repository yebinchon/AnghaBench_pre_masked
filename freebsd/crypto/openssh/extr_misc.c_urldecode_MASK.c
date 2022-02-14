
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (unsigned char) ;
 scalar_t__ FUNC_3 (char const*) ;
 char* FUNC_4 (scalar_t__) ;

__attribute__((used)) static char *
FUNC_5(const char *VAR_0)
{
 char *VAR_1, *VAR_2;
 int VAR_3;

 VAR_1 = FUNC_4(FUNC_3(VAR_0) + 1);
 for (VAR_2 = VAR_1; *VAR_0 != '\0'; VAR_0++) {
  switch (*VAR_0) {
  case '+':
   *VAR_2++ = ' ';
   break;
  case '%':
   if (!FUNC_2((unsigned char)VAR_0[1]) ||
       !FUNC_2((unsigned char)VAR_0[2]) ||
       (VAR_3 = FUNC_1(VAR_0 + 1)) == -1) {
    FUNC_0(VAR_1);
    return ((void*)0);
   }
   *VAR_2++ = VAR_3;
   VAR_0 += 2;
   break;
  default:
   *VAR_2++ = *VAR_0;
   break;
  }
 }
 *VAR_2 = '\0';

 return VAR_1;
}
