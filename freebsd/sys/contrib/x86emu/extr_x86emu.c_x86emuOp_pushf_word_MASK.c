
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_2__ {int R_EFLG; int mode; } ;
struct x86emu {TYPE_1__ x86; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct x86emu*,int) ;
 int FUNC_1 (struct x86emu*,int ) ;

__attribute__((used)) static void
FUNC_2(struct x86emu *VAR_3)
{
 uint32_t VAR_4;


 VAR_4 = (VAR_3->x86.R_EFLG & VAR_1) | VAR_0;
 if (VAR_3->x86.mode & VAR_2) {
  FUNC_0(VAR_3, VAR_4);
 } else {
  FUNC_1(VAR_3, (uint16_t) VAR_4);
 }
}
