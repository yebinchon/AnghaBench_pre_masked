
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
struct x86emu {int dummy; } ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static void
FUNC_1(struct x86emu *VAR_0, uint16_t VAR_1, uint8_t VAR_2)
{


 if (VAR_1 == 0xb2)
  return;
 if (VAR_1 >= 0x80 && VAR_1 < 0x88)
  return;


 FUNC_0(VAR_1, VAR_2);
}
