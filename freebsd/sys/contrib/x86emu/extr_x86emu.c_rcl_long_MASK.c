
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct x86emu {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static uint32_t
FUNC_3(struct x86emu *VAR_2, uint32_t VAR_3, uint8_t VAR_4)
{
 uint32_t VAR_5, VAR_6, VAR_7, VAR_8;

 VAR_5 = VAR_3;
 if ((VAR_6 = VAR_4 % 33) != 0) {
  VAR_8 = (VAR_3 >> (32 - VAR_6)) & 0x1;
  VAR_5 = (VAR_3 << VAR_6) & 0xffffffff;
  VAR_7 = (1 << (VAR_6 - 1)) - 1;
  VAR_5 |= (VAR_3 >> (33 - VAR_6)) & VAR_7;
  if (FUNC_0(VAR_0)) {
   VAR_5 |= 1 << (VAR_6 - 1);
  }
  FUNC_1(VAR_8, VAR_0);
  FUNC_1(VAR_6 == 1 && FUNC_2(VAR_8 + ((VAR_5 >> 30) & 0x2)),
      VAR_1);
 }
 return VAR_5;
}
