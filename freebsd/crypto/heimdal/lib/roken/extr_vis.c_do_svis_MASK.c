
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u_char ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int * FUNC_6 (char const*,int) ;

__attribute__((used)) static char *
FUNC_7(char *VAR_4, int VAR_5, int VAR_6, int VAR_7, const char *VAR_8)
{
 int VAR_9;
 VAR_9 = FUNC_6(VAR_8, VAR_5) != ((void*)0);
 if (!VAR_9 && FUNC_0(VAR_5) && (FUNC_2(VAR_5) || FUNC_5(VAR_5) ||
     ((VAR_6 & VAR_3) && FUNC_4(VAR_5)))) {
  *VAR_4++ = VAR_5;
  return VAR_4;
 }
 if (VAR_6 & VAR_0) {
  switch (VAR_5) {
  case '\n':
   *VAR_4++ = '\\'; *VAR_4++ = 'n';
   return VAR_4;
  case '\r':
   *VAR_4++ = '\\'; *VAR_4++ = 'r';
   return VAR_4;
  case '\b':
   *VAR_4++ = '\\'; *VAR_4++ = 'b';
   return VAR_4;
  case 128:
   *VAR_4++ = '\\'; *VAR_4++ = 'a';
   return VAR_4;
  case '\v':
   *VAR_4++ = '\\'; *VAR_4++ = 'v';
   return VAR_4;
  case '\t':
   *VAR_4++ = '\\'; *VAR_4++ = 't';
   return VAR_4;
  case '\f':
   *VAR_4++ = '\\'; *VAR_4++ = 'f';
   return VAR_4;
  case ' ':
   *VAR_4++ = '\\'; *VAR_4++ = 's';
   return VAR_4;
  case '\0':
   *VAR_4++ = '\\'; *VAR_4++ = '0';
   if (FUNC_3(VAR_7)) {
    *VAR_4++ = '0';
    *VAR_4++ = '0';
   }
   return VAR_4;
  default:
   if (FUNC_2(VAR_5)) {
    *VAR_4++ = '\\'; *VAR_4++ = VAR_5;
    return VAR_4;
   }
  }
 }
 if (VAR_9 || ((VAR_5 & 0177) == ' ') || (VAR_6 & VAR_2)) {
  *VAR_4++ = '\\';
  *VAR_4++ = (u_char)(((unsigned int)(u_char)VAR_5 >> 6) & 03) + '0';
  *VAR_4++ = (u_char)(((unsigned int)(u_char)VAR_5 >> 3) & 07) + '0';
  *VAR_4++ = (u_char)( VAR_5 & 07) + '0';
 } else {
  if ((VAR_6 & VAR_1) == 0) *VAR_4++ = '\\';
  if (VAR_5 & 0200) {
   VAR_5 &= 0177; *VAR_4++ = 'M';
  }
  if (FUNC_1(VAR_5)) {
   *VAR_4++ = '^';
   if (VAR_5 == 0177)
    *VAR_4++ = '?';
   else
    *VAR_4++ = VAR_5 + '@';
  } else {
   *VAR_4++ = '-'; *VAR_4++ = VAR_5;
  }
 }
 return VAR_4;
}
