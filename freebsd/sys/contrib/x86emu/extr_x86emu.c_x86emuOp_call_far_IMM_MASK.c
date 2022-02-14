
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint16_t ;
struct TYPE_2__ {void* R_IP; void* R_CS; } ;
struct x86emu {TYPE_1__ x86; } ;


 void* FUNC_0 (struct x86emu*) ;
 int FUNC_1 (struct x86emu*,void*) ;

__attribute__((used)) static void
FUNC_2(struct x86emu *VAR_0)
{
 uint16_t VAR_1, VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 VAR_1 = FUNC_0(VAR_0);





 FUNC_1(VAR_0, VAR_0->x86.R_CS);
 VAR_0->x86.R_CS = VAR_1;
 FUNC_1(VAR_0, VAR_0->x86.R_IP);
 VAR_0->x86.R_IP = VAR_2;
}
