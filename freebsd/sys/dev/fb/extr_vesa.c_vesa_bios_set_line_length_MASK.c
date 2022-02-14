
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int R_AX; int R_CX; int R_BX; int R_DX; } ;
typedef TYPE_1__ x86regs_t ;


 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_3(int VAR_0, int *VAR_1, int *VAR_2)
{
 x86regs_t VAR_3;

 FUNC_1(&VAR_3);
 VAR_3.R_AX = 0x4f06;

 VAR_3.R_CX = VAR_0;

 FUNC_2(&VAR_3, 0x10);




 if (VAR_3.R_AX != 0x004f)
  return (-1);

 if (VAR_1 != ((void*)0))
  *VAR_1 = VAR_3.R_BX;
 if (VAR_2 != ((void*)0))
  *VAR_2 = VAR_3.R_DX;

 return (0);
}
