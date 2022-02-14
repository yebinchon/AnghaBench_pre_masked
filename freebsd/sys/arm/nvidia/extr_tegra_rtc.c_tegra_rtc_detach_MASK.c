
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_rtc_softc {int * mem_res; int * irq_res; int * irq_h; } ;
typedef int device_t ;


 int FUNC_0 (struct tegra_rtc_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ,int *,int *) ;
 struct tegra_rtc_softc* FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2)
{
 struct tegra_rtc_softc *VAR_3;

 VAR_3 = FUNC_4(VAR_2);
 if (VAR_3->irq_h != ((void*)0))
  FUNC_3(VAR_2, VAR_3->irq_res, VAR_3->irq_h);
 if (VAR_3->irq_res != ((void*)0))
  FUNC_2(VAR_2, VAR_0, 0, VAR_3->irq_res);
 if (VAR_3->mem_res != ((void*)0))
  FUNC_2(VAR_2, VAR_1, 0, VAR_3->mem_res);

 FUNC_0(VAR_3);
 return (FUNC_1(VAR_2));
}
