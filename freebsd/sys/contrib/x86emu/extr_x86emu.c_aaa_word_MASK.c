
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct x86emu {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static uint16_t
FUNC_5(struct x86emu *VAR_5, uint16_t VAR_6)
{
 uint16_t VAR_7;
 if ((VAR_6 & 0xf) > 0x9 || FUNC_0(VAR_0)) {
  VAR_6 += 0x6;
  VAR_6 += 0x100;
  FUNC_4(VAR_0);
  FUNC_4(VAR_1);
 } else {
  FUNC_1(VAR_1);
  FUNC_1(VAR_0);
 }
 VAR_7 = (uint16_t) (VAR_6 & 0xFF0F);
 FUNC_1(VAR_3);
 FUNC_2(VAR_7 == 0, VAR_4);
 FUNC_2(FUNC_3(VAR_7 & 0xff), VAR_2);
 return VAR_7;
}
