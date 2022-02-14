
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef unsigned int uint32_t ;
struct x86emu {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static uint32_t
FUNC_5(struct x86emu *VAR_5, uint32_t VAR_6, uint32_t VAR_7, uint8_t VAR_8)
{
 unsigned int VAR_9, VAR_10, VAR_11;

 if (VAR_8 < 32) {
  VAR_9 = VAR_8 % 32;
  if (VAR_9 > 0) {
   VAR_10 = (VAR_6 << VAR_9) | (VAR_7 >> (32 - VAR_9));
   VAR_11 = VAR_6 & (1 << (32 - VAR_9));
   FUNC_2(VAR_11, VAR_0);
   FUNC_2((VAR_10 & 0xffffffff) == 0, VAR_4);
   FUNC_2(VAR_10 & 0x80000000, VAR_3);
   FUNC_2(FUNC_3(VAR_10 & 0xff), VAR_2);
  } else {
   VAR_10 = VAR_6;
  }
  if (VAR_9 == 1) {
   FUNC_2((((VAR_10 & 0x80000000) == 0x80000000)
       ^ (FUNC_0(VAR_0) != 0)), VAR_1);
  } else {
   FUNC_1(VAR_1);
  }
 } else {
  VAR_10 = 0;
  FUNC_2((VAR_6 << (VAR_8 - 1)) & 0x80000000, VAR_0);
  FUNC_1(VAR_1);
  FUNC_1(VAR_3);
  FUNC_4(VAR_2);
  FUNC_4(VAR_4);
 }
 return VAR_10;
}
