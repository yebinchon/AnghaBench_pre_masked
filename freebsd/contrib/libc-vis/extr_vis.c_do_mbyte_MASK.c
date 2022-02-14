
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wint_t ;
typedef int wchar_t ;
typedef int u_int32_t ;
typedef void* u_char ;



 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static wchar_t *
FUNC_3(wchar_t *VAR_3, wint_t VAR_4, int VAR_5, wint_t VAR_6, int VAR_7)
{
 if (VAR_5 & VAR_0) {
  switch (VAR_4) {
  case L'\n':
   *VAR_3++ = L'\\'; *VAR_3++ = L'n';
   return VAR_3;
  case L'\r':
   *VAR_3++ = L'\\'; *VAR_3++ = L'r';
   return VAR_3;
  case L'\b':
   *VAR_3++ = L'\\'; *VAR_3++ = L'b';
   return VAR_3;
  case 128:
   *VAR_3++ = L'\\'; *VAR_3++ = L'a';
   return VAR_3;
  case L'\v':
   *VAR_3++ = L'\\'; *VAR_3++ = L'v';
   return VAR_3;
  case L'\t':
   *VAR_3++ = L'\\'; *VAR_3++ = L't';
   return VAR_3;
  case L'\f':
   *VAR_3++ = L'\\'; *VAR_3++ = L'f';
   return VAR_3;
  case L' ':
   *VAR_3++ = L'\\'; *VAR_3++ = L's';
   return VAR_3;
  case L'\0':
   *VAR_3++ = L'\\'; *VAR_3++ = L'0';
   if (FUNC_2(VAR_6)) {
    *VAR_3++ = L'0';
    *VAR_3++ = L'0';
   }
   return VAR_3;


  case L'n':
  case L'r':
  case L'b':
  case L'a':
  case L'v':
  case L't':
  case L'f':
  case L's':
  case L'0':
  case L'M':
  case L'^':
  case L'$':
   break;
  default:
   if (FUNC_0(VAR_5, VAR_4) && !FUNC_2(VAR_4)) {
    *VAR_3++ = L'\\';
    *VAR_3++ = VAR_4;
    return VAR_3;
   }
  }
 }
 if (VAR_7 || ((VAR_4 & 0177) == L' ') || (VAR_5 & VAR_2)) {
  *VAR_3++ = L'\\';
  *VAR_3++ = (u_char)(((u_int32_t)(u_char)VAR_4 >> 6) & 03) + L'0';
  *VAR_3++ = (u_char)(((u_int32_t)(u_char)VAR_4 >> 3) & 07) + L'0';
  *VAR_3++ = (VAR_4 & 07) + L'0';
 } else {
  if ((VAR_5 & VAR_1) == 0)
   *VAR_3++ = L'\\';

  if (VAR_4 & 0200) {
   VAR_4 &= 0177;
   *VAR_3++ = L'M';
  }

  if (FUNC_1(VAR_4)) {
   *VAR_3++ = L'^';
   if (VAR_4 == 0177)
    *VAR_3++ = L'?';
   else
    *VAR_3++ = VAR_4 + L'@';
  } else {
   *VAR_3++ = L'-';
   *VAR_3++ = VAR_4;
  }
 }

 return VAR_3;
}
