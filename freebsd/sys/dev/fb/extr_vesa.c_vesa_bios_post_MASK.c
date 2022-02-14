
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int R_AL; int R_DL; int R_AH; } ;
typedef TYPE_1__ x86regs_t ;
typedef int * device_t ;
typedef int * devclass_t ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 int * FUNC_2 (char*) ;
 int * FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *,int ***,int*) ;
 scalar_t__ FUNC_5 (int *) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (int **,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,char*) ;
 scalar_t__ VAR_3 ;
 int FUNC_12 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_13 (int) ;
 int * FUNC_14 (scalar_t__) ;
 int FUNC_15 (TYPE_1__*) ;
 scalar_t__ FUNC_16 (scalar_t__,int *) ;

__attribute__((used)) static int
FUNC_17(void)
{
 x86regs_t VAR_4;
 devclass_t VAR_5;
 device_t *VAR_6;
 device_t VAR_7;
 int VAR_8, VAR_9, VAR_10;

 if (FUNC_14(VAR_3) == ((void*)0))
  return (1);

 VAR_7 = ((void*)0);
 VAR_10 = 0;


 VAR_5 = FUNC_2("vgapci");
 if (VAR_5 != ((void*)0) && FUNC_4(VAR_5, &VAR_6, &VAR_8) == 0) {
  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
   if (FUNC_5(VAR_6[VAR_9]) != 0 &&
       FUNC_16(VAR_3, VAR_6[VAR_9])) {
    VAR_7 = VAR_6[VAR_9];
    VAR_10 = 1;
    break;
   }
  FUNC_7(VAR_6, VAR_0);
 }


 if (VAR_7 == ((void*)0)) {
  VAR_5 = FUNC_2(VAR_1);
  if (VAR_5 != ((void*)0))
   VAR_7 = FUNC_3(VAR_5, 0);
 }

 if (VAR_2)
  FUNC_11("%s: calling BIOS POST\n",
      VAR_7 == ((void*)0) ? "VESA" : FUNC_6(VAR_7));

 FUNC_15(&VAR_4);
 if (VAR_10) {
  VAR_4.R_AH = FUNC_8(VAR_7);
  VAR_4.R_AL = (FUNC_10(VAR_7) << 3) |
      (FUNC_9(VAR_7) & 0x07);
 }
 VAR_4.R_DL = 0x80;
 FUNC_12(&VAR_4, FUNC_1(VAR_3 + 3),
     FUNC_0(VAR_3 + 3));

 if (FUNC_13(0x10) == 0)
  return (1);

 return (0);
}
