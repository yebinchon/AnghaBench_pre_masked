
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_2__ {int mode; scalar_t__ R_BX; scalar_t__ R_AX; scalar_t__ R_EBX; scalar_t__ R_EAX; } ;
struct x86emu {TYPE_1__ x86; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct x86emu *VAR_1)
{
 uint32_t VAR_2;

 if (VAR_1->x86.mode & VAR_0) {
  VAR_2 = VAR_1->x86.R_EAX;
  VAR_1->x86.R_EAX = VAR_1->x86.R_EBX;
  VAR_1->x86.R_EBX = VAR_2;
 } else {
  VAR_2 = VAR_1->x86.R_AX;
  VAR_1->x86.R_AX = VAR_1->x86.R_BX;
  VAR_1->x86.R_BX = (uint16_t) VAR_2;
 }
}
