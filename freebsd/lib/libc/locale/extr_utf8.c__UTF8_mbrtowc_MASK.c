
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
typedef int mbstate_t ;
struct TYPE_2__ {int want; int lbound; int ch; } ;
typedef TYPE_1__ _UTF8State ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,size_t) ;
 int VAR_2 ;

__attribute__((used)) static size_t
FUNC_1(wchar_t * __restrict VAR_3, const char * __restrict VAR_4, size_t VAR_5,
    mbstate_t * __restrict VAR_6)
{
 _UTF8State *VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;
 wchar_t VAR_12, VAR_13;

 VAR_7 = (_UTF8State *)VAR_6;

 if (VAR_7->want < 0 || VAR_7->want > 6) {
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

 if (VAR_7->want == 0) {
  VAR_8 = (unsigned char)*VAR_4;
  if ((VAR_8 & 0x80) == 0) {

   if (VAR_3 != ((void*)0))
    *VAR_3 = VAR_8;
   return (VAR_8 != '\0' ? 1 : 0);
  }
  if ((VAR_8 & 0xe0) == 0xc0) {
   VAR_10 = 0x1f;
   VAR_11 = 2;
   VAR_12 = 0x80;
  } else if ((VAR_8 & 0xf0) == 0xe0) {
   VAR_10 = 0x0f;
   VAR_11 = 3;
   VAR_12 = 0x800;
  } else if ((VAR_8 & 0xf8) == 0xf0) {
   VAR_10 = 0x07;
   VAR_11 = 4;
   VAR_12 = 0x10000;
  } else {



   VAR_2 = VAR_0;
   return ((size_t)-1);
  }
 } else {
  VAR_11 = VAR_7->want;
  VAR_12 = VAR_7->lbound;
 }





 if (VAR_7->want == 0)
  VAR_13 = (unsigned char)*VAR_4++ & VAR_10;
 else
  VAR_13 = VAR_7->ch;

 for (VAR_9 = (VAR_7->want == 0) ? 1 : 0; VAR_9 < FUNC_0(VAR_11, VAR_5); VAR_9++) {
  if ((*VAR_4 & 0xc0) != 0x80) {




   VAR_2 = VAR_0;
   return ((size_t)-1);
  }
  VAR_13 <<= 6;
  VAR_13 |= *VAR_4++ & 0x3f;
 }
 if (VAR_9 < VAR_11) {

  VAR_7->want = VAR_11 - VAR_9;
  VAR_7->lbound = VAR_12;
  VAR_7->ch = VAR_13;
  return ((size_t)-2);
 }
 if (VAR_13 < VAR_12) {



  VAR_2 = VAR_0;
  return ((size_t)-1);
 }
 if ((VAR_13 >= 0xd800 && VAR_13 <= 0xdfff) || VAR_13 > 0x10ffff) {



  VAR_2 = VAR_0;
  return ((size_t)-1);
 }
 if (VAR_3 != ((void*)0))
  *VAR_3 = VAR_13;
 VAR_7->want = 0;
 return (VAR_13 == L'\0' ? 0 : VAR_11);
}
