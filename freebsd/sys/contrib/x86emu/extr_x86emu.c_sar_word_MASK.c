
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct x86emu {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static uint16_t
FUNC_4(struct x86emu *VAR_4, uint16_t VAR_5, uint8_t VAR_6)
{
 unsigned int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_11 = VAR_5 & 0x8000;
 VAR_7 = VAR_6 % 16;
 VAR_8 = VAR_5;
 if (VAR_7 > 0 && VAR_7 < 16) {
  VAR_10 = (1 << (16 - VAR_7)) - 1;
  VAR_9 = VAR_5 & (1 << (VAR_7 - 1));
  VAR_8 = (VAR_5 >> VAR_7) & VAR_10;
  FUNC_1(VAR_9, VAR_0);
  if (VAR_11) {
   VAR_8 |= ~VAR_10;
  }
  FUNC_1((VAR_8 & 0xffff) == 0, VAR_3);
  FUNC_1(VAR_8 & 0x8000, VAR_2);
  FUNC_1(FUNC_2(VAR_8 & 0xff), VAR_1);
 } else if (VAR_7 >= 16) {
  if (VAR_11) {
   VAR_8 = 0xffff;
   FUNC_3(VAR_0);
   FUNC_0(VAR_3);
   FUNC_3(VAR_2);
   FUNC_3(VAR_1);
  } else {
   VAR_8 = 0;
   FUNC_0(VAR_0);
   FUNC_3(VAR_3);
   FUNC_0(VAR_2);
   FUNC_0(VAR_1);
  }
 }
 return (uint16_t) VAR_8;
}
