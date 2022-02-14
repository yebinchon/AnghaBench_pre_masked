
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct x86emu {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static uint8_t
FUNC_5(struct x86emu *VAR_5, uint8_t VAR_6, uint8_t VAR_7)
{
 unsigned int VAR_8, VAR_9, VAR_10;

 if (VAR_7 < 8) {
  VAR_8 = VAR_7 % 8;


  if (VAR_8 > 0) {
   VAR_9 = VAR_6 << VAR_8;
   VAR_10 = VAR_6 & (1 << (8 - VAR_8));
   FUNC_2(VAR_10, VAR_0);
   FUNC_2((VAR_9 & 0xff) == 0, VAR_4);
   FUNC_2(VAR_9 & 0x80, VAR_3);
   FUNC_2(FUNC_3(VAR_9 & 0xff), VAR_2);
  } else {
   VAR_9 = (uint8_t) VAR_6;
  }

  if (VAR_8 == 1) {

   FUNC_2(
       (((VAR_9 & 0x80) == 0x80) ^
    (FUNC_0(VAR_0) != 0)),

       VAR_1);
  } else {
   FUNC_1(VAR_1);
  }
 } else {
  VAR_9 = 0;
  FUNC_2((VAR_6 << (VAR_7 - 1)) & 0x80, VAR_0);
  FUNC_1(VAR_1);
  FUNC_1(VAR_3);
  FUNC_4(VAR_2);
  FUNC_4(VAR_4);
 }
 return (uint8_t) VAR_9;
}
