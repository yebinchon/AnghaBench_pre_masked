
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef void* uint16_t ;
struct TYPE_2__ {void* R_BP; void* R_SP; int R_SS; } ;
struct x86emu {TYPE_1__ x86; } ;


 int FUNC_0 (struct x86emu*) ;
 void* FUNC_1 (struct x86emu*,int ,int) ;
 void* FUNC_2 (struct x86emu*) ;
 int FUNC_3 (struct x86emu*,void*) ;

__attribute__((used)) static void
FUNC_4(struct x86emu *VAR_0)
{
 uint16_t VAR_1, VAR_2;
 uint8_t VAR_3;
 int VAR_4;

 VAR_1 = FUNC_2(VAR_0);
 VAR_3 = FUNC_0(VAR_0);
 FUNC_3(VAR_0, VAR_0->x86.R_BP);
 VAR_2 = VAR_0->x86.R_SP;
 if (VAR_3 > 0) {
  for (VAR_4 = 1; VAR_4 < VAR_3; VAR_4++) {
   VAR_0->x86.R_BP -= 2;
   FUNC_3(VAR_0, FUNC_1(VAR_0, VAR_0->x86.R_SS,
       VAR_0->x86.R_BP));
  }
  FUNC_3(VAR_0, VAR_2);
 }
 VAR_0->x86.R_BP = VAR_2;
 VAR_0->x86.R_SP = (uint16_t) (VAR_0->x86.R_SP - VAR_1);
}
