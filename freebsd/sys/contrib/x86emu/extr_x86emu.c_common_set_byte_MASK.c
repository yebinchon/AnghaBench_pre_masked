
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct x86emu {int cur_mod; } ;


 int FUNC_0 (struct x86emu*) ;
 int* FUNC_1 (struct x86emu*) ;
 int FUNC_2 (struct x86emu*) ;
 int FUNC_3 (struct x86emu*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct x86emu *VAR_0, int VAR_1)
{
 uint32_t VAR_2;
 uint8_t *VAR_3, VAR_4;

 FUNC_2(VAR_0);
 VAR_4 = VAR_1 ? 0x01 : 0x00;
 if (VAR_0->cur_mod != 3) {
  VAR_2 = FUNC_0(VAR_0);
  FUNC_3(VAR_0, VAR_2, VAR_4);
 } else {
  VAR_3 = FUNC_1(VAR_0);
  *VAR_3 = VAR_4;
 }
}
