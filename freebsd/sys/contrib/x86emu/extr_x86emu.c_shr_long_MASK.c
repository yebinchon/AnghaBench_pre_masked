
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct x86emu {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ) ;
 unsigned int FUNC_4 (unsigned int) ;

__attribute__((used)) static uint32_t
FUNC_5(struct x86emu *VAR_5, uint32_t VAR_6, uint8_t VAR_7)
{
 unsigned int VAR_8, VAR_9, VAR_10;

 if (VAR_7 < 32) {
  VAR_8 = VAR_7 % 32;
  if (VAR_8 > 0) {
   VAR_10 = VAR_6 & (1 << (VAR_8 - 1));
   VAR_9 = VAR_6 >> VAR_8;
   FUNC_1(VAR_10, VAR_0);
   FUNC_1((VAR_9 & 0xffffffff) == 0, VAR_4);
   FUNC_1(VAR_9 & 0x80000000, VAR_3);
   FUNC_1(FUNC_2(VAR_9 & 0xff), VAR_2);
  } else {
   VAR_9 = VAR_6;
  }
  if (VAR_8 == 1) {
   FUNC_1(FUNC_4(VAR_9 >> 30), VAR_1);
  } else {
   FUNC_0(VAR_1);
  }
 } else {
  VAR_9 = 0;
  FUNC_0(VAR_0);
  FUNC_0(VAR_1);
  FUNC_3(VAR_4);
  FUNC_0(VAR_3);
  FUNC_0(VAR_2);
 }
 return VAR_9;
}
