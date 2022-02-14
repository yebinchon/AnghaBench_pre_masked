
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int R_AL; int R_DL; int R_AH; } ;
typedef TYPE_1__ x86regs_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,int ,int ) ;
 int FUNC_8 (int) ;
 int * FUNC_9 (scalar_t__) ;
 int FUNC_10 (TYPE_1__*) ;

int
FUNC_11(device_t VAR_3)
{

 x86regs_t VAR_4;

 if (!FUNC_6(VAR_3))
  return (VAR_0);

 if (FUNC_9(VAR_2) == ((void*)0))
  return (VAR_1);

 FUNC_10(&VAR_4);

 VAR_4.R_AH = FUNC_3(VAR_3);
 VAR_4.R_AL = (FUNC_5(VAR_3) << 3) | (FUNC_4(VAR_3) & 0x07);
 VAR_4.R_DL = 0x80;

 FUNC_2(VAR_3, "REPOSTing\n");
 FUNC_7(&VAR_4, FUNC_1(VAR_2 + 3),
     FUNC_0(VAR_2 + 3));

 FUNC_8(0x10);

 return (0);



}
