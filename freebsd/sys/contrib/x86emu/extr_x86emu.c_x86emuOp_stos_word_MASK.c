
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int mode; int R_CX; int R_DI; int R_AX; int R_ES; int R_EAX; } ;
struct x86emu {TYPE_1__ x86; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct x86emu*,int ,int,int ) ;
 int FUNC_2 (struct x86emu*,int ,int,int ) ;

__attribute__((used)) static void
FUNC_3(struct x86emu *VAR_4)
{
 int VAR_5;
 uint32_t VAR_6;

 if (VAR_4->x86.mode & VAR_1)
  VAR_5 = 4;
 else
  VAR_5 = 2;

 if (FUNC_0(VAR_0))
  VAR_5 = -VAR_5;

 VAR_6 = 1;
 if (VAR_4->x86.mode & (VAR_2 | VAR_3)) {


  VAR_6 = VAR_4->x86.R_CX;
  VAR_4->x86.R_CX = 0;
  VAR_4->x86.mode &= ~(VAR_2 | VAR_3);
 }
 while (VAR_6--) {
  if (VAR_4->x86.mode & VAR_1) {
   FUNC_1(VAR_4, VAR_4->x86.R_ES, VAR_4->x86.R_DI,
       VAR_4->x86.R_EAX);
  } else {
   FUNC_2(VAR_4, VAR_4->x86.R_ES, VAR_4->x86.R_DI,
       VAR_4->x86.R_AX);
  }
  VAR_4->x86.R_DI += VAR_5;
 }
}
