
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bcm_pwm_softc {scalar_t__ sc_mem_res; scalar_t__ mode2; scalar_t__ mode; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct bcm_pwm_softc*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,scalar_t__) ;
 struct bcm_pwm_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 struct bcm_pwm_softc *VAR_2;

 FUNC_1(VAR_1);

 VAR_2 = FUNC_3(VAR_1);
 VAR_2->mode = 0;
 VAR_2->mode2 = 0;
 (void)FUNC_0(VAR_2);
 if (VAR_2->sc_mem_res)
  FUNC_2(VAR_1, VAR_0, 0, VAR_2->sc_mem_res);

 return (0);
}
