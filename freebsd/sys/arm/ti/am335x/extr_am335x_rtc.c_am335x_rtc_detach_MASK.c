
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct am335x_rtc_softc {scalar_t__ sc_mem_res; int ** sc_irq_res; } ;
typedef int device_t ;


 int FUNC_0 (struct am335x_rtc_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,scalar_t__) ;
 int FUNC_2 (int ,int ,int **) ;
 struct am335x_rtc_softc* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_2)
{
 struct am335x_rtc_softc *VAR_3;

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3->sc_irq_res[0] != ((void*)0))
  FUNC_2(VAR_2, VAR_1, VAR_3->sc_irq_res);
 if (VAR_3->sc_mem_res)
  FUNC_1(VAR_2, VAR_0, 0, VAR_3->sc_mem_res);
 FUNC_0(VAR_3);

 return (0);
}
