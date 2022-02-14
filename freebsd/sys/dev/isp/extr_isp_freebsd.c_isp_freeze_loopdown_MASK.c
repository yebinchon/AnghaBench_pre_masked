
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isp_fc {int simqfrozen; int * sim; } ;
typedef int ispsoftc_t ;


 struct isp_fc* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int ,char*,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(ispsoftc_t *VAR_2, int VAR_3)
{
 struct isp_fc *VAR_4 = FUNC_0(VAR_2, VAR_3);

 if (VAR_4->sim == ((void*)0))
  return;
 if (VAR_4->simqfrozen == 0) {
  FUNC_1(VAR_2, VAR_0,
      "Chan %d Freeze simq (loopdown)", VAR_3);
  VAR_4->simqfrozen = VAR_1;
  FUNC_3();
  FUNC_2(VAR_4->sim, 1);
 } else {
  FUNC_1(VAR_2, VAR_0,
      "Chan %d Mark simq frozen (loopdown)", VAR_3);
  VAR_4->simqfrozen |= VAR_1;
 }
}
