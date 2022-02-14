
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int ispsoftc_t ;
typedef int XS_T ;


 int FUNC_0 (int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,char*,int ) ;

__attribute__((used)) static void
FUNC_8(ispsoftc_t *VAR_2, uint32_t VAR_3)
{
 XS_T *VAR_4;

 if (VAR_3 == 0) {
  return;
 }
 VAR_4 = FUNC_6(VAR_2, VAR_3);
 if (VAR_4 == ((void*)0)) {
  FUNC_7(VAR_2, VAR_0,
      "Command for fast post handle 0x%x not found", VAR_3);
  return;
 }
 FUNC_4(VAR_2, VAR_3);






 FUNC_1(VAR_4, 0);
 *FUNC_2(VAR_4) = VAR_1;
 if (FUNC_3(VAR_4)) {
  FUNC_0(VAR_2, VAR_4, VAR_3);
 }
 FUNC_5(VAR_4);
}
