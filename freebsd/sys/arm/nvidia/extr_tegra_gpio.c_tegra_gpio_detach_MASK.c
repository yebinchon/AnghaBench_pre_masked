
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_gpio_softc {int * mem_res; int ** irq_res; int * isrcs; int ** irq_ih; int mtx; } ;
typedef int device_t ;


 int FUNC_0 (struct tegra_gpio_softc*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ,int *,int *) ;
 struct tegra_gpio_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct tegra_gpio_softc*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_3)
{
 struct tegra_gpio_softc *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_4(VAR_3);

 FUNC_1(FUNC_6(&VAR_4->mtx), ("gpio mutex not initialized"));

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_4->irq_ih[VAR_5] != ((void*)0))
   FUNC_3(VAR_3, VAR_4->irq_res[VAR_5], VAR_4->irq_ih[VAR_5]);
 }

 if (VAR_4->isrcs != ((void*)0))
  FUNC_7(VAR_4);

 FUNC_5(VAR_3);

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_4->irq_res[VAR_5] != ((void*)0))
   FUNC_2(VAR_3, VAR_1, 0,
       VAR_4->irq_res[VAR_5]);
 }
 if (VAR_4->mem_res != ((void*)0))
  FUNC_2(VAR_3, VAR_2, 0, VAR_4->mem_res);
 FUNC_0(VAR_4);

 return(0);
}
