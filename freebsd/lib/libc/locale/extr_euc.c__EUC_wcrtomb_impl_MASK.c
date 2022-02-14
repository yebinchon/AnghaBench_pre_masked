
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
typedef int uint8_t ;
typedef int mbstate_t ;
struct TYPE_2__ {scalar_t__ want; } ;
typedef TYPE_1__ _EucState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static size_t
FUNC_0(char * __restrict VAR_4, wchar_t VAR_5,
    mbstate_t * __restrict VAR_6,
    uint8_t VAR_7, uint8_t VAR_8, uint8_t VAR_9, uint8_t VAR_10)
{
 _EucState *VAR_11;
 int VAR_12, VAR_13;
 wchar_t VAR_14;

 VAR_11 = (_EucState *)VAR_6;

 if (VAR_11->want != 0) {
  VAR_3 = VAR_1;
  return ((size_t)-1);
 }

 if (VAR_4 == ((void*)0))

  return (1);

 if ((VAR_5 & ~0x7f) == 0) {

  *VAR_4 = (char)VAR_5;
  return (1);
 }


 if ((unsigned)VAR_5 > 0xffffff) {
  VAR_13 = 4;
 } else if ((unsigned)VAR_5 > 0xffff) {
  VAR_13 = 3;
 } else if ((unsigned)VAR_5 > 0xff) {
  VAR_13 = 2;
 } else {
  VAR_13 = 1;
 }

 if (VAR_13 > VAR_2) {
  VAR_3 = VAR_0;
  return ((size_t)-1);
 }


 if ((VAR_5 < 0xa100) || (VAR_5 > 0xffff)) {

  VAR_14 = (VAR_5 >> ((VAR_13 - 1) * 8));
  if (VAR_14 == VAR_7) {
   if (VAR_13 != VAR_8) {
    VAR_3 = VAR_0;
    return ((size_t)-1);
   }
  } else if (VAR_14 == VAR_9) {
   if (VAR_13 != VAR_10) {
    VAR_3 = VAR_0;
    return ((size_t)-1);
   }
  } else {
   VAR_3 = VAR_0;
   return ((size_t)-1);
  }
 }


 for (VAR_12 = VAR_13 - 1; VAR_12 >= 0; VAR_12--) {
  VAR_4[VAR_12] = (VAR_5 & 0xff);
  VAR_5 >>= 8;
 }
 return (VAR_13);
}
