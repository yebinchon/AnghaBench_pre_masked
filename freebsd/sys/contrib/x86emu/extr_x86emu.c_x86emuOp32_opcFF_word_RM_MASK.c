
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct x86emu {int cur_mod; int cur_rh; } ;


 int FUNC_0 (struct x86emu*,int ) ;
 int FUNC_1 (struct x86emu*) ;
 int * FUNC_2 (struct x86emu*) ;
 int FUNC_3 (struct x86emu*,int ) ;
 int FUNC_4 (struct x86emu*,int ) ;
 int FUNC_5 (struct x86emu*,int ) ;
 int FUNC_6 (struct x86emu*,int ,int ) ;

__attribute__((used)) static void
FUNC_7(struct x86emu *VAR_0)
{
 uint32_t VAR_1 = 0;
 uint32_t VAR_2, *VAR_3;

 if (VAR_0->cur_mod != 3) {
  VAR_1 = FUNC_1(VAR_0);
  VAR_2 = FUNC_3(VAR_0, VAR_1);
  switch (VAR_0->cur_rh) {
  case 0:
   VAR_2 = FUNC_4(VAR_0, VAR_2);
   FUNC_6(VAR_0, VAR_1, VAR_2);
   break;
  case 1:
   VAR_2 = FUNC_0(VAR_0, VAR_2);
   FUNC_6(VAR_0, VAR_1, VAR_2);
   break;
  case 6:
   FUNC_5(VAR_0, VAR_2);
   break;
  }
 } else {
  VAR_3 = FUNC_2(VAR_0);
  switch (VAR_0->cur_rh) {
  case 0:
   *VAR_3 = FUNC_4(VAR_0, *VAR_3);
   break;
  case 1:
   *VAR_3 = FUNC_0(VAR_0, *VAR_3);
   break;
  case 6:
   FUNC_5(VAR_0, *VAR_3);
   break;
  }
 }
}
