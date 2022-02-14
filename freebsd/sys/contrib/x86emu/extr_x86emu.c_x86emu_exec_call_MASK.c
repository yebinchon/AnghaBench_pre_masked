
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint16_t ;
struct TYPE_2__ {void* R_IP; void* R_CS; } ;
struct x86emu {TYPE_1__ x86; } ;


 int FUNC_0 (struct x86emu*,int ) ;
 int FUNC_1 (struct x86emu*) ;

void
FUNC_2(struct x86emu *VAR_0, uint16_t VAR_1, uint16_t VAR_2)
{
 FUNC_0(VAR_0, 0);
 FUNC_0(VAR_0, 0);
 VAR_0->x86.R_CS = VAR_1;
 VAR_0->x86.R_IP = VAR_2;

 FUNC_1(VAR_0);
}
