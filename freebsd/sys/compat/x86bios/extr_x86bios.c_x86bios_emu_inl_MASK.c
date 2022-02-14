
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct x86emu {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static uint32_t
FUNC_3(struct x86emu *VAR_0, uint16_t VAR_1)
{
 uint32_t VAR_2;


 if (VAR_1 >= 0x80 && VAR_1 < 0x88)
  return (0);

 if ((VAR_1 & 1) != 0) {
  VAR_2 = FUNC_0(VAR_1);
  VAR_2 |= FUNC_1(VAR_1 + 1) << 8;
  VAR_2 |= FUNC_0(VAR_1 + 3) << 24;
 } else if ((VAR_1 & 2) != 0) {
  VAR_2 = FUNC_1(VAR_1);
  VAR_2 |= FUNC_1(VAR_1 + 2) << 16;
 } else

 VAR_2 = FUNC_2(VAR_1);

 return (VAR_2);
}
