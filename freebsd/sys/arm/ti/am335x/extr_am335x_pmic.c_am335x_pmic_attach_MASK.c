
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct am335x_pmic_softc {int sc_irq_res; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct am335x_pmic_softc*) ;
 int FUNC_1 (int ,int ,int*,int ) ;
 struct am335x_pmic_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
 struct am335x_pmic_softc *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(VAR_2);

 VAR_4 = 0;
 VAR_3->sc_irq_res = FUNC_1(VAR_2, VAR_1, &VAR_4,
     VAR_0);
 if (!VAR_3->sc_irq_res) {
  FUNC_3(VAR_2, "cannot allocate interrupt\n");

 }

 FUNC_0(VAR_3);

 return (0);
}
