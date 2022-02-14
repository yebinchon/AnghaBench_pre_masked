
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct x86emu {int cur_rh; } ;


 int FUNC_0 (struct x86emu*) ;
 int FUNC_1 (struct x86emu*,int *) ;
 int FUNC_2 (struct x86emu*,int ) ;
 int FUNC_3 (struct x86emu*) ;
 int FUNC_4 (struct x86emu*,int ) ;
 int FUNC_5 (struct x86emu*,int ) ;
 int FUNC_6 (struct x86emu*,int ) ;
 int FUNC_7 (struct x86emu*,int ) ;
 int FUNC_8 (struct x86emu*,int ,int ) ;
 int FUNC_9 (struct x86emu*,int ) ;
 int FUNC_10 (struct x86emu*) ;

__attribute__((used)) static void
FUNC_11(struct x86emu *VAR_0)
{
 uint8_t VAR_1, VAR_2;



 FUNC_3(VAR_0);
 if (VAR_0->cur_rh == 1)
  FUNC_10(VAR_0);

 if (VAR_0->cur_rh == 0) {
  VAR_1 = FUNC_1(VAR_0, &VAR_2);
  FUNC_8(VAR_0, VAR_1, VAR_2);
  return;
 }
 VAR_1 = FUNC_0(VAR_0);
 switch (VAR_0->cur_rh) {
 case 2:
  VAR_1 = ~VAR_1;
  FUNC_9(VAR_0, VAR_1);
  break;
 case 3:
  VAR_1 = FUNC_7(VAR_0, VAR_1);
  FUNC_9(VAR_0, VAR_1);
  break;
 case 4:
  FUNC_6(VAR_0, VAR_1);
  break;
 case 5:
  FUNC_5(VAR_0, VAR_1);
  break;
 case 6:
  FUNC_2(VAR_0, VAR_1);
  break;
 case 7:
  FUNC_4(VAR_0, VAR_1);
  break;
 }
}
