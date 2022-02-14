
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(uint8_t VAR_2)
{
 if ((VAR_2 & 0x80) == 0x00) {

  FUNC_2();
  FUNC_1(VAR_2);
  return;
 }
 if ((VAR_2 & 0xe0) == 0xc0) {

  FUNC_2();
  VAR_0 = 1;
  VAR_1 = VAR_2;
  return;
 }
 if ((VAR_2 & 0xf0) == 0xe0) {

  FUNC_2();
  VAR_0 = 2;
  VAR_1 = VAR_2;
  return;
 }
 if ((VAR_2 & 0xf8) == 0xf0) {

  FUNC_2();
  VAR_0 = 3;
  VAR_1 = VAR_2;
  return;
 }
 if ((VAR_2 & 0xc0) == 0x80) {

  if (VAR_0 == 0) {
   FUNC_1(VAR_2);
   return;
  }
  VAR_0--;
  VAR_1 = (VAR_1 << 8) | VAR_2;
  if (VAR_0 == 0) {
   uint32_t VAR_3, VAR_4;
   uint8_t VAR_5;

   VAR_3 = 0;
   VAR_4 = VAR_1;
   VAR_5 = (VAR_4 >> 24) & 0xff;
   if (VAR_5 != 0) {
    VAR_3 = VAR_5 & 0x07;
    VAR_5 = (VAR_4 >> 16) & 0xff;
    VAR_3 = (VAR_3 << 6) | (VAR_5 & 0x3f);
    VAR_5 = (VAR_4 >> 8) & 0xff;
    VAR_3 = (VAR_3 << 6) | (VAR_5 & 0x3f);
    VAR_5 = VAR_4 & 0xff;
    VAR_3 = (VAR_3 << 6) | (VAR_5 & 0x3f);
   } else if ((VAR_5 = (VAR_4 >> 16) & 0xff) != 0) {
    VAR_3 = VAR_5 & 0x0f;
    VAR_5 = (VAR_4 >> 8) & 0xff;
    VAR_3 = (VAR_3 << 6) | (VAR_5 & 0x3f);
    VAR_5 = VAR_4 & 0xff;
    VAR_3 = (VAR_3 << 6) | (VAR_5 & 0x3f);
   } else if ((VAR_5 = (VAR_4 >> 8) & 0xff) != 0) {
    VAR_3 = VAR_5 & 0x1f;
    VAR_5 = VAR_4 & 0xff;
    VAR_3 = (VAR_3 << 6) | (VAR_5 & 0x3f);
   }

   FUNC_0(VAR_3);
   VAR_1 = 0;
  }
  return;
 }

 FUNC_2();
 FUNC_1(VAR_2);
}
