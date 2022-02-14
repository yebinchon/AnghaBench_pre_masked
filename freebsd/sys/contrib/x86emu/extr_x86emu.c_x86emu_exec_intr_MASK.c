
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ intr; int R_IP; int R_CS; int R_FLG; } ;
struct x86emu {TYPE_1__ x86; int (* emu_rdw ) (struct x86emu*,int) ;} ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct x86emu*,int ) ;
 int FUNC_2 (struct x86emu*,int) ;
 int FUNC_3 (struct x86emu*,int) ;
 int FUNC_4 (struct x86emu*) ;

void
FUNC_5(struct x86emu *VAR_2, uint8_t VAR_3)
{
 FUNC_1(VAR_2, VAR_2->x86.R_FLG);
 FUNC_0(VAR_0);
 FUNC_0(VAR_1);
 FUNC_1(VAR_2, 0);
 FUNC_1(VAR_2, 0);
 VAR_2->x86.R_CS = (*VAR_2->emu_rdw)(VAR_2, VAR_3 * 4 + 2);
 VAR_2->x86.R_IP = (*VAR_2->emu_rdw)(VAR_2, VAR_3 * 4);
 VAR_2->x86.intr = 0;

 FUNC_4(VAR_2);
}
