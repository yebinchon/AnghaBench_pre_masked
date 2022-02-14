
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ wchar_t ;
typedef int _wc_t ;
typedef int _index_t ;
typedef int _csid_t ;
struct TYPE_3__ {int mode; } ;
typedef TYPE_1__ _MSKanjiEncodingInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static __inline int

FUNC_2(_MSKanjiEncodingInfo * __restrict VAR_2,
    _csid_t * __restrict VAR_3, _index_t * __restrict VAR_4, wchar_t VAR_5)
{
 _index_t VAR_6, VAR_7;
 int VAR_8;

 if ((_wc_t)VAR_5 < 0x80) {

  *VAR_3 = 0;
  *VAR_4 = (_index_t)VAR_5;
 } else if ((_wc_t)VAR_5 < 0x100) {

  *VAR_3 = 1;
  *VAR_4 = (_index_t)VAR_5 & 0x7F;
 } else {
  VAR_7 = ((_wc_t)VAR_5 >> 8) & 0xFF;
  VAR_6 = (_wc_t)VAR_5 & 0xFF;
  if (!FUNC_0(VAR_7) || !FUNC_1(VAR_6))
   return (VAR_0);
  if ((VAR_2->mode & VAR_1) == 0 || VAR_7 < 0xF0) {
   *VAR_3 = 2;
   VAR_8 = 0x81;
  } else {
   *VAR_3 = 3;
   if ((_wc_t)VAR_5 <= 0xF49E) {
    VAR_8 = (_wc_t)VAR_5 >= 0xF29F ||
        ((_wc_t)VAR_5 >= 0xF09F &&
        (_wc_t)VAR_5 <= 0xF0FC) ? 0xED : 0xF0;
   } else
    VAR_8 = 0xCE;
  }
  VAR_7 -= VAR_8;
  if (VAR_7 >= 0x5F)
   VAR_7 -= 0x40;
  VAR_7 = VAR_7 * 2 + 0x21;
  VAR_6 -= 0x1F;
  if (VAR_6 >= 0x61)
   VAR_6 -= 1;
  if (VAR_6 > 0x7E) {
   VAR_7 += 1;
   VAR_6 -= 0x5E;
  }
  *VAR_4 = ((_index_t)VAR_7 << 8) | VAR_6;
 }

 return (0);
}
