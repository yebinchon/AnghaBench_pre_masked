
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int R_AX; int R_BL; int R_CX; int R_DX; int R_DI; int R_ES; } ;
typedef TYPE_1__ x86regs_t ;
typedef int u_char ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_6(int VAR_3, int VAR_4, u_char *VAR_5, u_char *VAR_6, u_char *VAR_7,
   int VAR_8)
{
 x86regs_t VAR_9;
 int VAR_10;

 FUNC_4(&VAR_9);
 VAR_9.R_AX = 0x4f09;
 VAR_9.R_BL = 1;
 VAR_9.R_CX = VAR_4;
 VAR_9.R_DX = VAR_3;

 VAR_9.R_ES = FUNC_1(VAR_2);
 VAR_9.R_DI = FUNC_0(VAR_2);

 VAR_8 = 8 - VAR_8;
 FUNC_2(&VAR_0);
 FUNC_5(&VAR_9, 0x10);
 if (VAR_9.R_AX != 0x004f) {
  FUNC_3(&VAR_0);
  return (1);
 }
 for (VAR_10 = 0; VAR_10 < VAR_4; ++VAR_10) {
  VAR_5[VAR_10] = VAR_1[VAR_10 * 4 + 2] << VAR_8;
  VAR_6[VAR_10] = VAR_1[VAR_10 * 4 + 1] << VAR_8;
  VAR_7[VAR_10] = VAR_1[VAR_10 * 4] << VAR_8;
 }
 FUNC_3(&VAR_0);

 return (0);
}
