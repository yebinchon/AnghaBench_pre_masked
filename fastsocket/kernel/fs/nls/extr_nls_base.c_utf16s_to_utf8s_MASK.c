
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
typedef scalar_t__ u8 ;
typedef enum utf16_endian { ____Placeholder_utf16_endian } utf16_endian ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_0 (int const,int) ;
 int FUNC_1 (unsigned long,scalar_t__*,int) ;

int FUNC_2(const wchar_t *VAR_5, int VAR_6, enum utf16_endian VAR_7,
  u8 *VAR_8, int VAR_9)
{
 u8 *VAR_10;
 int VAR_11;
 unsigned long VAR_12, VAR_13;

 VAR_10 = VAR_8;
 while (VAR_6 > 0 && VAR_9 > 0) {
  VAR_12 = FUNC_0(*VAR_5, VAR_7);
  if (!VAR_12)
   break;
  VAR_5++;
  VAR_6--;
  if (VAR_12 > 0x7f) {
   if ((VAR_12 & VAR_3) == VAR_4) {
    if (VAR_12 & VAR_2) {

     continue;
    }
    if (VAR_6 <= 0)
     break;
    VAR_13 = FUNC_0(*VAR_5, VAR_7);
    if ((VAR_13 & VAR_3) != VAR_4 ||
      !(VAR_13 & VAR_2)) {

     continue;
    }
    VAR_12 = VAR_0 + ((VAR_12 & VAR_1) << 10)
      + (VAR_13 & VAR_1);
    VAR_5++;
    VAR_6--;
   }
   VAR_11 = FUNC_1(VAR_12, VAR_10, VAR_9);
   if (VAR_11 == -1) {

   } else {
    VAR_10 += VAR_11;
    VAR_9 -= VAR_11;
   }
  } else {
   *VAR_10++ = (u8) VAR_12;
   VAR_9--;
  }
 }
 return VAR_10 - VAR_8;
}
