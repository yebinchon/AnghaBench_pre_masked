
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef void* uint16_t ;
struct TYPE_2__ {int mode; void* R_IP; void* R_CS; } ;
struct x86emu {int cur_mod; int cur_rh; TYPE_1__ x86; } ;


 int VAR_0 ;
 int FUNC_0 (struct x86emu*) ;
 void** FUNC_1 (struct x86emu*) ;
 void* FUNC_2 (struct x86emu*,int ) ;
 int FUNC_3 (struct x86emu*) ;
 int FUNC_4 (struct x86emu*,void*) ;
 int FUNC_5 (struct x86emu*) ;
 int FUNC_6 (struct x86emu*) ;
 int FUNC_7 (struct x86emu*) ;

__attribute__((used)) static void
FUNC_8(struct x86emu *VAR_1)
{
 uint32_t VAR_2 = 0;
 uint16_t VAR_3, VAR_4;


 FUNC_3(VAR_1);
 if ((VAR_1->cur_mod == 3 && (VAR_1->cur_rh == 3 || VAR_1->cur_rh == 5)) ||
     VAR_1->cur_rh == 7)
  FUNC_7(VAR_1);
 if (VAR_1->cur_rh == 0 || VAR_1->cur_rh == 1 || VAR_1->cur_rh == 6) {
  if (VAR_1->x86.mode & VAR_0)
   FUNC_6(VAR_1);
  else
   FUNC_5(VAR_1);
  return;
 }

 if (VAR_1->cur_mod != 3) {
  VAR_2 = FUNC_0(VAR_1);
  VAR_3 = FUNC_2(VAR_1, VAR_2);
  switch (VAR_1->cur_rh) {
  case 3:
   VAR_4 = FUNC_2(VAR_1, VAR_2 + 2);
   FUNC_4(VAR_1, VAR_1->x86.R_CS);
   VAR_1->x86.R_CS = VAR_4;
   FUNC_4(VAR_1, VAR_1->x86.R_IP);
   VAR_1->x86.R_IP = VAR_3;
   break;
  case 5:
   VAR_4 = FUNC_2(VAR_1, VAR_2 + 2);
   VAR_1->x86.R_IP = VAR_3;
   VAR_1->x86.R_CS = VAR_4;
   break;
  }
 } else {
  VAR_3 = *FUNC_1(VAR_1);
 }

 switch (VAR_1->cur_rh) {
 case 2:
  FUNC_4(VAR_1, VAR_1->x86.R_IP);
  VAR_1->x86.R_IP = VAR_3;
  break;
 case 4:
  VAR_1->x86.R_IP = VAR_3;
  break;
 }
}
