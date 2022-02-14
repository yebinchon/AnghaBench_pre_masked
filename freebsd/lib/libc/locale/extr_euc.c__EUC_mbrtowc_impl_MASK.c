
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
typedef unsigned char uint8_t ;
typedef int mbstate_t ;
struct TYPE_2__ {int want; int ch; } ;
typedef TYPE_1__ _EucState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,size_t) ;
 int VAR_3 ;

__attribute__((used)) static size_t
FUNC_1(wchar_t * __restrict VAR_4, const char * __restrict VAR_5,
 size_t VAR_6, mbstate_t * __restrict VAR_7,
 uint8_t VAR_8, uint8_t VAR_9, uint8_t VAR_10, uint8_t VAR_11)
{
 _EucState *VAR_12;
 int VAR_13, VAR_14;
 wchar_t VAR_15 = 0;
 unsigned char VAR_16, VAR_17;

 VAR_12 = (_EucState *)VAR_7;

 if (VAR_12->want < 0 || VAR_12->want > VAR_2) {
  VAR_3 = VAR_1;
  return ((size_t)-1);
 }

 if (VAR_5 == ((void*)0)) {
  VAR_5 = "";
  VAR_6 = 1;
  VAR_4 = ((void*)0);
 }

 if (VAR_6 == 0)

  return ((size_t)-2);

 if (VAR_12->want == 0) {

  if (((VAR_16 = (unsigned char)*VAR_5) & 0x80) == 0) {
   if (VAR_4 != ((void*)0))
    *VAR_4 = VAR_16;
   return (VAR_16 != '\0' ? 1 : 0);
  }

  if (VAR_16 >= 0xa1) {

   VAR_14 = 2;
  } else if (VAR_16 == VAR_8) {
   VAR_14 = VAR_9;
  } else if (VAR_16 == VAR_10) {
   VAR_14 = VAR_11;
  } else {
   VAR_3 = VAR_0;
   return ((size_t)-1);
  }


  VAR_12->want = VAR_14;
  VAR_12->ch = 0;
 } else {
  VAR_14 = VAR_12->want;
  VAR_15 = VAR_12->ch;
 }

 for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_14, VAR_6); VAR_13++) {
  VAR_15 <<= 8;
  VAR_17 = *VAR_5;
  VAR_15 |= VAR_17;
  VAR_5++;
 }
 if (VAR_13 < VAR_14) {

  VAR_12->want = VAR_14 - VAR_13;
  VAR_12->ch = VAR_15;
  VAR_3 = VAR_0;
  return ((size_t)-2);
 }
 if (VAR_4 != ((void*)0))
  *VAR_4 = VAR_15;
 VAR_12->want = 0;
 return (VAR_15 == L'\0' ? 0 : VAR_14);
}
