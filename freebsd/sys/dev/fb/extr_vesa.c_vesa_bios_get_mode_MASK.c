
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int R_AX; int R_CX; int R_DI; int R_ES; } ;
typedef TYPE_1__ x86regs_t ;
typedef int uint32_t ;
struct vesa_mode {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (void*,struct vesa_mode*,int) ;
 void* FUNC_3 (int *,int,int) ;
 int FUNC_4 (void*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int) ;

__attribute__((used)) static int
FUNC_7(int VAR_0, struct vesa_mode *VAR_1, int VAR_2)
{
 x86regs_t VAR_3;
 uint32_t VAR_4;
 void *VAR_5;

 VAR_5 = FUNC_3(&VAR_4, sizeof(*VAR_1), VAR_2);
 if (VAR_5 == ((void*)0))
  return (1);

 FUNC_5(&VAR_3);
 VAR_3.R_AX = 0x4f01;
 VAR_3.R_CX = VAR_0;

 VAR_3.R_ES = FUNC_1(VAR_4);
 VAR_3.R_DI = FUNC_0(VAR_4);

 FUNC_6(&VAR_3, 0x10);

 if (VAR_3.R_AX != 0x004f) {
  FUNC_4(VAR_5, sizeof(*VAR_1));
  return (1);
 }

 FUNC_2(VAR_5, VAR_1, sizeof(*VAR_1));
 FUNC_4(VAR_5, sizeof(*VAR_1));

 return (0);
}
