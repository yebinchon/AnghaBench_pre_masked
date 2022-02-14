
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int R_AX; int R_DL; int R_BX; int R_ES; int R_CX; } ;
typedef TYPE_1__ x86regs_t ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*,void*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_7(int VAR_5, void *VAR_6)
{
 x86regs_t VAR_7;

 if (VAR_5 != 128 && VAR_5 != 129)
  return (1);

 FUNC_5(&VAR_7);
 VAR_7.R_AX = 0x4f04;
 VAR_7.R_DL = VAR_5;
 VAR_7.R_CX = VAR_1;

 VAR_7.R_ES = FUNC_1(VAR_3);
 VAR_7.R_BX = FUNC_0(VAR_3);

 FUNC_3(&VAR_0);
 switch (VAR_5) {
 case 128:
  FUNC_6(&VAR_7, 0x10);
  if (VAR_7.R_AX == 0x004f)
   FUNC_2(VAR_2, VAR_6, VAR_4);
  break;
 case 129:
  FUNC_2(VAR_6, VAR_2, VAR_4);
  FUNC_6(&VAR_7, 0x10);
  break;
 }
 FUNC_4(&VAR_0);

 return (VAR_7.R_AX != 0x004f);
}
