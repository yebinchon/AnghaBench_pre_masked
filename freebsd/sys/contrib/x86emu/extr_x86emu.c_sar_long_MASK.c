
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct x86emu {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static uint32_t
FUNC_4(struct x86emu *VAR_4, uint32_t VAR_5, uint8_t VAR_6)
{
 uint32_t VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_11 = VAR_5 & 0x80000000;
 VAR_7 = VAR_6 % 32;
 VAR_8 = VAR_5;
 if (VAR_7 > 0 && VAR_7 < 32) {
  VAR_10 = (1 << (32 - VAR_7)) - 1;
  VAR_9 = VAR_5 & (1 << (VAR_7 - 1));
  VAR_8 = (VAR_5 >> VAR_7) & VAR_10;
  FUNC_1(VAR_9, VAR_0);
  if (VAR_11) {
   VAR_8 |= ~VAR_10;
  }
  FUNC_1((VAR_8 & 0xffffffff) == 0, VAR_3);
  FUNC_1(VAR_8 & 0x80000000, VAR_2);
  FUNC_1(FUNC_2(VAR_8 & 0xff), VAR_1);
 } else if (VAR_7 >= 32) {
  if (VAR_11) {
   VAR_8 = 0xffffffff;
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
 return VAR_8;
}
