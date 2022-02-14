
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct am335x_prcm_softc {int attach_done; } ;
typedef int device_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,unsigned int*) ;
 scalar_t__ FUNC_1 (int *,unsigned int*) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct am335x_prcm_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;

__attribute__((used)) static void
FUNC_6(device_t VAR_3)
{
 struct am335x_prcm_softc *VAR_4 = FUNC_4(VAR_3);
 unsigned int VAR_5, VAR_6;

 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4->attach_done ||
     VAR_2 < (VAR_1 + VAR_0)) {
  FUNC_2(VAR_3);
  return;
 }

 VAR_4->attach_done = 1;

 if (FUNC_1(((void*)0), &VAR_5) != 0)
  VAR_5 = 0;
 if (FUNC_0(((void*)0), &VAR_6) != 0)
  VAR_6 = 0;
 if (VAR_5 && VAR_6)
  FUNC_5(VAR_3, "Clocks: System %u.%01u MHz, CPU %u MHz\n",
      VAR_5/1000000, (VAR_5 % 1000000)/100000, VAR_6/1000000);
 else {
  FUNC_5(VAR_3, "can't read frequencies yet (SCM device not ready?)\n");
  goto fail;
 }

 return;

fail:
 FUNC_3(VAR_3);
 return;
}
