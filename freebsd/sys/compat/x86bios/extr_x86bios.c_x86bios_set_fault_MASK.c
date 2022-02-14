
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int R_IP; int R_CS; } ;
struct x86emu {TYPE_1__ x86; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct x86emu*) ;

__attribute__((used)) static void
FUNC_1(struct x86emu *VAR_4, uint32_t VAR_5)
{

 VAR_0 = 1;
 VAR_1 = VAR_5;
 VAR_2 = VAR_4->x86.R_CS;
 VAR_3 = VAR_4->x86.R_IP;
 FUNC_0(VAR_4);
}
