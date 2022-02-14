
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wchar_t ;
typedef int uint32_t ;
typedef int _index_t ;
typedef int _csid_t ;
struct TYPE_3__ {int mode; } ;
typedef TYPE_1__ _MSKanjiEncodingInfo ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static __inline int

FUNC_0(_MSKanjiEncodingInfo * __restrict VAR_2,
    wchar_t * __restrict VAR_3, _csid_t VAR_4, _index_t VAR_5)
{
 uint32_t VAR_6, VAR_7;
 int VAR_8;

 switch (VAR_4) {
 case 0:

  if (VAR_5 >= 0x80)
   return (VAR_0);
  *VAR_3 = (wchar_t)VAR_5;
  break;
 case 1:

  if (VAR_5 >= 0x80)
   return (VAR_0);
  *VAR_3 = (wchar_t)VAR_5 + 0x80;
  break;
 case 3:
  if ((VAR_2->mode & VAR_1) == 0)
   return (VAR_0);

 case 2:

  VAR_7 = (VAR_5 >> 8);
  if (VAR_7 < 0x21)
   return (VAR_0);
  if (VAR_4 == 3) {
   if (VAR_7 <= 0x2F)
    VAR_8 = (VAR_7 == 0x22 || VAR_7 >= 0x26) ?
        0xED : 0xF0;
   else if (VAR_7 >= 0x4D && VAR_7 <= 0x7E)
    VAR_8 = 0xCE;
   else
    return (VAR_0);
  } else {
   if (VAR_7 > 0x97)
    return (VAR_0);
   VAR_8 = (VAR_7 < 0x5F) ? 0x81 : 0xC1;
  }
  VAR_6 = VAR_5 & 0xFF;
  if (VAR_6 < 0x21 || VAR_6 > 0x7E)
   return (VAR_0);
  VAR_7 -= 0x21; VAR_6 -= 0x21;
  if ((VAR_7 & 1) == 0) {
   VAR_6 += 0x40;
   if (VAR_6 >= 0x7F)
    VAR_6 += 1;
  } else
   VAR_6 += 0x9F;
  VAR_7 = VAR_7 / 2 + VAR_8;
  *VAR_3 = ((wchar_t)VAR_7 << 8) | VAR_6;
  break;
 default:
  return (VAR_0);
 }

 return (0);
}
