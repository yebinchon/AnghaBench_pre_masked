
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {int mode; int R_SI; int R_ES; int R_DX; scalar_t__ R_ECX; scalar_t__ R_CX; } ;
struct x86emu {TYPE_1__ x86; int (* emu_outl ) (struct x86emu*,int ,int ) ;int (* emu_outw ) (struct x86emu*,int ,int ) ;int (* emu_outb ) (struct x86emu*,int ,int ) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct x86emu*,int ,int) ;
 int FUNC_2 (struct x86emu*,int ,int) ;
 int FUNC_3 (struct x86emu*,int ,int) ;
 int FUNC_4 (struct x86emu*,int ,int ) ;
 int FUNC_5 (struct x86emu*,int ,int ) ;
 int FUNC_6 (struct x86emu*,int ,int ) ;
 int FUNC_7 (struct x86emu*,int ,int ) ;
 int FUNC_8 (struct x86emu*,int ,int ) ;
 int FUNC_9 (struct x86emu*,int ,int ) ;

__attribute__((used)) static void
FUNC_10(struct x86emu *VAR_4, int VAR_5)
{
 int VAR_6 = VAR_5;

 if (FUNC_0(VAR_0)) {
  VAR_6 = -VAR_5;
 }
 if (VAR_4->x86.mode & (VAR_2 | VAR_3)) {


  uint32_t VAR_7 = ((VAR_4->x86.mode & VAR_1) ?
      VAR_4->x86.R_ECX : VAR_4->x86.R_CX);
  switch (VAR_5) {
  case 1:
   while (VAR_7--) {
    (*VAR_4->emu_outb) (VAR_4, VAR_4->x86.R_DX,
        FUNC_1(VAR_4, VAR_4->x86.R_ES,
        VAR_4->x86.R_SI));
    VAR_4->x86.R_SI += VAR_6;
   }
   break;

  case 2:
   while (VAR_7--) {
    (*VAR_4->emu_outw) (VAR_4, VAR_4->x86.R_DX,
        FUNC_3(VAR_4, VAR_4->x86.R_ES,
        VAR_4->x86.R_SI));
    VAR_4->x86.R_SI += VAR_6;
   }
   break;
  case 4:
   while (VAR_7--) {
    (*VAR_4->emu_outl) (VAR_4, VAR_4->x86.R_DX,
        FUNC_2(VAR_4, VAR_4->x86.R_ES,
        VAR_4->x86.R_SI));
    VAR_4->x86.R_SI += VAR_6;
    break;
   }
  }
  VAR_4->x86.R_CX = 0;
  if (VAR_4->x86.mode & VAR_1) {
   VAR_4->x86.R_ECX = 0;
  }
  VAR_4->x86.mode &= ~(VAR_2 | VAR_3);
 } else {
  switch (VAR_5) {
  case 1:
   (*VAR_4->emu_outb) (VAR_4, VAR_4->x86.R_DX,
       FUNC_1(VAR_4, VAR_4->x86.R_ES, VAR_4->x86.R_SI));
   break;
  case 2:
   (*VAR_4->emu_outw) (VAR_4, VAR_4->x86.R_DX,
       FUNC_3(VAR_4, VAR_4->x86.R_ES, VAR_4->x86.R_SI));
   break;
  case 4:
   (*VAR_4->emu_outl) (VAR_4, VAR_4->x86.R_DX,
       FUNC_2(VAR_4, VAR_4->x86.R_ES, VAR_4->x86.R_SI));
   break;
  }
  VAR_4->x86.R_SI += VAR_6;
 }
}
