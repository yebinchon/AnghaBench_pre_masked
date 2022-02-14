
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int R_AX; int R_BH; } ;
typedef TYPE_1__ x86regs_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_2(int VAR_0)
{
 x86regs_t VAR_1;

 FUNC_0(&VAR_1);
 VAR_1.R_AX = 0x4f08;

 VAR_1.R_BH = VAR_0;

 FUNC_1(&VAR_1, 0x10);

 if (VAR_1.R_AX != 0x004f)
  return (6);

 return (VAR_1.R_BH);
}
