
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap4_prcm_softc {int attach_done; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 struct omap4_prcm_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned int*) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_3)
{
 struct omap4_prcm_softc *VAR_4 = FUNC_2(VAR_3);
 unsigned int VAR_5;

 if (VAR_4->attach_done ||
   VAR_2 < (VAR_1 + VAR_0)) {
  FUNC_1(VAR_3);
  return;
 }
 VAR_4->attach_done = 1;






 if (FUNC_3(VAR_3) == 2) {
  FUNC_4(((void*)0), &VAR_5);
  FUNC_0(VAR_5 / 2);
 }

 return;
}
