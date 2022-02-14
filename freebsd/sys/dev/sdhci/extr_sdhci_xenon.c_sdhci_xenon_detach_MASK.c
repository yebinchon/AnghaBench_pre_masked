
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdhci_xenon_softc {int * slot; int mem_res; int irq_res; int intrhand; int * gpio; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 struct sdhci_xenon_softc* FUNC_3 (int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_3)
{
 struct sdhci_xenon_softc *VAR_4 = FUNC_3(VAR_3);

 if (VAR_4->gpio != ((void*)0))
  FUNC_7(VAR_4->gpio);

 FUNC_0(VAR_3);
 FUNC_2(VAR_3, VAR_4->irq_res, VAR_4->intrhand);
 FUNC_1(VAR_3, VAR_1, FUNC_5(VAR_4->irq_res),
     VAR_4->irq_res);
 FUNC_6(VAR_4->slot);
 FUNC_1(VAR_3, VAR_2, FUNC_5(VAR_4->mem_res),
     VAR_4->mem_res);
 FUNC_4(VAR_4->slot, VAR_0);
 VAR_4->slot = ((void*)0);

 return (0);
}
