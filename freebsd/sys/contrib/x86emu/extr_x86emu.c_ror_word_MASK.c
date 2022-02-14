
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct x86emu {int dummy; } ;


 int FUNC_0 (unsigned int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (unsigned int) ;

__attribute__((used)) static uint16_t
FUNC_2(struct x86emu *VAR_2, uint16_t VAR_3, uint8_t VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7;

 VAR_5 = VAR_3;
 if ((VAR_6 = VAR_4 % 16) != 0) {
  VAR_5 = (VAR_3 << (16 - VAR_6));
  VAR_7 = (1 << (16 - VAR_6)) - 1;
  VAR_5 |= (VAR_3 >> (VAR_6)) & VAR_7;
  FUNC_0(VAR_4 == 1 && FUNC_1(VAR_5 >> 14), VAR_1);
 }
 if (VAR_4 != 0) {


  FUNC_0(VAR_5 & 0x8000, VAR_0);
 }
 return (uint16_t) VAR_5;
}
