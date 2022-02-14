
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
typedef int mbstate_t ;
struct TYPE_2__ {int ch; } ;
typedef TYPE_1__ _MSKanjiState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static size_t
FUNC_0(wchar_t * __restrict VAR_3, const char * __restrict VAR_4, size_t VAR_5,
    mbstate_t * __restrict VAR_6)
{
 _MSKanjiState *VAR_7;
 wchar_t VAR_8;

 VAR_7 = (_MSKanjiState *)VAR_6;

 if ((VAR_7->ch & ~0xFF) != 0) {

  VAR_2 = VAR_1;
  return ((size_t)-1);
 }

 if (VAR_4 == ((void*)0)) {
  VAR_4 = "";
  VAR_5 = 1;
  VAR_3 = ((void*)0);
 }

 if (VAR_5 == 0)

  return ((size_t)-2);

 if (VAR_7->ch != 0) {
  if (*VAR_4 == '\0') {
   VAR_2 = VAR_0;
   return ((size_t)-1);
  }
  VAR_8 = (VAR_7->ch << 8) | (*VAR_4 & 0xFF);
  if (VAR_3 != ((void*)0))
   *VAR_3 = VAR_8;
  VAR_7->ch = 0;
  return (1);
 }
 VAR_8 = *VAR_4++ & 0xff;
 if ((VAR_8 > 0x80 && VAR_8 < 0xa0) || (VAR_8 >= 0xe0 && VAR_8 < 0xfd)) {
  if (VAR_5 < 2) {

   VAR_7->ch = VAR_8;
   return ((size_t)-2);
  }
  if (*VAR_4 == '\0') {
   VAR_2 = VAR_0;
   return ((size_t)-1);
  }
  VAR_8 = (VAR_8 << 8) | (*VAR_4++ & 0xff);
  if (VAR_3 != ((void*)0))
   *VAR_3 = VAR_8;
  return (2);
 } else {
  if (VAR_3 != ((void*)0))
   *VAR_3 = VAR_8;
  return (VAR_8 == L'\0' ? 0 : 1);
 }
}
