
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_2__ {int R_CL; } ;
struct x86emu {TYPE_1__ x86; } ;


 int FUNC_0 (struct x86emu*) ;
 int FUNC_1 (struct x86emu*,int *) ;
 int * FUNC_2 (struct x86emu*) ;
 int FUNC_3 (struct x86emu*) ;
 int FUNC_4 (struct x86emu*,int ,int ,int ) ;
 int FUNC_5 (struct x86emu*,int ,int ,int ) ;
 int FUNC_6 (struct x86emu*,int ) ;

__attribute__((used)) static void
FUNC_7(struct x86emu *VAR_0, int VAR_1, int VAR_2)
{
 uint8_t VAR_3;
 uint16_t VAR_4, *VAR_5;

 FUNC_3(VAR_0);
 VAR_5 = FUNC_2(VAR_0);
 if (VAR_2) {
  VAR_4 = FUNC_0(VAR_0);
  VAR_3 = VAR_0->x86.R_CL;
 } else {
  VAR_4 = FUNC_1(VAR_0, &VAR_3);
 }
 if (VAR_1)
  VAR_4 = FUNC_4(VAR_0, VAR_4, *VAR_5, VAR_3);
 else
  VAR_4 = FUNC_5(VAR_0, VAR_4, *VAR_5, VAR_3);
 FUNC_6(VAR_0, VAR_4);
}
