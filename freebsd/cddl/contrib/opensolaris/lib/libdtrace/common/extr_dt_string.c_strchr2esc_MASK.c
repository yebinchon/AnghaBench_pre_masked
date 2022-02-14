
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (size_t) ;

char *
FUNC_1(const char *VAR_0, size_t VAR_1)
{
 const char *VAR_2;
 char *VAR_3, *VAR_4, VAR_5;
 size_t VAR_6 = 0;

 for (VAR_2 = VAR_0; VAR_2 < VAR_0 + VAR_1; VAR_2++) {
  switch (VAR_5 = *VAR_2) {
  case '\0':
  case '\a':
  case '\b':
  case '\f':
  case '\n':
  case '\r':
  case '\t':
  case '\v':
  case '"':
  case '\\':
   VAR_6++;
   break;
  case ' ':
   break;
  default:
   if (VAR_5 < '!' || VAR_5 > '~')
    VAR_6 += 3;
  }
 }

 if ((VAR_4 = FUNC_0(VAR_1 + VAR_6 + 1)) == ((void*)0))
  return (((void*)0));

 for (VAR_2 = VAR_0, VAR_3 = VAR_4; VAR_2 < VAR_0 + VAR_1; VAR_2++) {
  switch (VAR_5 = *VAR_2) {
  case '\0':
   *VAR_3++ = '\\';
   *VAR_3++ = '0';
   break;
  case '\a':
   *VAR_3++ = '\\';
   *VAR_3++ = 'a';
   break;
  case '\b':
   *VAR_3++ = '\\';
   *VAR_3++ = 'b';
   break;
  case '\f':
   *VAR_3++ = '\\';
   *VAR_3++ = 'f';
   break;
  case '\n':
   *VAR_3++ = '\\';
   *VAR_3++ = 'n';
   break;
  case '\r':
   *VAR_3++ = '\\';
   *VAR_3++ = 'r';
   break;
  case '\t':
   *VAR_3++ = '\\';
   *VAR_3++ = 't';
   break;
  case '\v':
   *VAR_3++ = '\\';
   *VAR_3++ = 'v';
   break;
  case '"':
   *VAR_3++ = '\\';
   *VAR_3++ = '"';
   break;
  case '\\':
   *VAR_3++ = '\\';
   *VAR_3++ = '\\';
   break;
  case ' ':
   *VAR_3++ = VAR_5;
   break;
  default:
   if (VAR_5 < '!' || VAR_5 > '~') {
    *VAR_3++ = '\\';
    *VAR_3++ = ((VAR_5 >> 6) & 3) + '0';
    *VAR_3++ = ((VAR_5 >> 3) & 7) + '0';
    *VAR_3++ = (VAR_5 & 7) + '0';
   } else
    *VAR_3++ = VAR_5;
  }

  if (VAR_5 == '\0')
   break;
 }

 *VAR_3 = '\0';
 return (VAR_4);
}
