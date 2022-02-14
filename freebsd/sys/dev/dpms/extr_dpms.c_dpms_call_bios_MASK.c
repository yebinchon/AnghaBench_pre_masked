
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int R_AX; int R_BL; int R_BH; } ;
typedef TYPE_1__ x86regs_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_3(int VAR_2, int *VAR_3)
{
 x86regs_t VAR_4;

 if (FUNC_0(0x10) == 0)
  return (VAR_0);

 FUNC_1(&VAR_4);
 VAR_4.R_AX = VAR_1;
 VAR_4.R_BL = VAR_2;
 VAR_4.R_BH = *VAR_3;
 FUNC_2(&VAR_4, 0x10);

 if (VAR_4.R_AX != 0x004f)
  return (VAR_0);

 *VAR_3 = VAR_4.R_BH;

 return (0);
}
