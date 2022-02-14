
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct x86emu {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static uint8_t
FUNC_4(struct x86emu *VAR_5, uint8_t VAR_6)
{
 if ((VAR_6 & 0xf) > 9 || FUNC_0(VAR_0)) {
  VAR_6 -= 6;
  FUNC_3(VAR_0);
 }
 if (VAR_6 > 0x9F || FUNC_0(VAR_1)) {
  VAR_6 -= 0x60;
  FUNC_3(VAR_1);
 }
 FUNC_1(VAR_6 & 0x80, VAR_3);
 FUNC_1(VAR_6 == 0, VAR_4);
 FUNC_1(FUNC_2(VAR_6 & 0xff), VAR_2);
 return VAR_6;
}
