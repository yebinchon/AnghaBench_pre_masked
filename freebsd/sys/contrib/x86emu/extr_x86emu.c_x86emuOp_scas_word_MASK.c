
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int mode; scalar_t__ R_CX; int R_DI; int R_AX; int R_ES; int R_EAX; } ;
struct x86emu {TYPE_1__ x86; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct x86emu*,int ,scalar_t__) ;
 int FUNC_2 (struct x86emu*,int ,int ) ;
 scalar_t__ FUNC_3 (struct x86emu*,int ,int) ;
 scalar_t__ FUNC_4 (struct x86emu*,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct x86emu *VAR_5)
{
 int VAR_6;
 uint32_t VAR_7;

 if (VAR_5->x86.mode & VAR_2)
  VAR_6 = 4;
 else
  VAR_6 = 2;

 if (FUNC_0(VAR_0))
  VAR_6 = -VAR_6;

 if (VAR_5->x86.mode & VAR_3) {


  while (VAR_5->x86.R_CX != 0) {
   if (VAR_5->x86.mode & VAR_2) {
    VAR_7 = FUNC_3(VAR_5, VAR_5->x86.R_ES,
        VAR_5->x86.R_DI);
    FUNC_1(VAR_5, VAR_5->x86.R_EAX, VAR_7);
   } else {
    VAR_7 = FUNC_4(VAR_5, VAR_5->x86.R_ES,
        VAR_5->x86.R_DI);
    FUNC_2(VAR_5, VAR_5->x86.R_AX, (uint16_t) VAR_7);
   }
   VAR_5->x86.R_CX -= 1;
   VAR_5->x86.R_DI += VAR_6;
   if (FUNC_0(VAR_1) == 0)
    break;
  }
  VAR_5->x86.mode &= ~VAR_3;
 } else if (VAR_5->x86.mode & VAR_4) {


  while (VAR_5->x86.R_CX != 0) {
   if (VAR_5->x86.mode & VAR_2) {
    VAR_7 = FUNC_3(VAR_5, VAR_5->x86.R_ES,
        VAR_5->x86.R_DI);
    FUNC_1(VAR_5, VAR_5->x86.R_EAX, VAR_7);
   } else {
    VAR_7 = FUNC_4(VAR_5, VAR_5->x86.R_ES,
        VAR_5->x86.R_DI);
    FUNC_2(VAR_5, VAR_5->x86.R_AX, (uint16_t) VAR_7);
   }
   VAR_5->x86.R_CX -= 1;
   VAR_5->x86.R_DI += VAR_6;
   if (FUNC_0(VAR_1))
    break;
  }
  VAR_5->x86.mode &= ~VAR_4;
 } else {
  if (VAR_5->x86.mode & VAR_2) {
   VAR_7 = FUNC_3(VAR_5, VAR_5->x86.R_ES, VAR_5->x86.R_DI);
   FUNC_1(VAR_5, VAR_5->x86.R_EAX, VAR_7);
  } else {
   VAR_7 = FUNC_4(VAR_5, VAR_5->x86.R_ES, VAR_5->x86.R_DI);
   FUNC_2(VAR_5, VAR_5->x86.R_AX, (uint16_t) VAR_7);
  }
  VAR_5->x86.R_DI += VAR_6;
 }
}
