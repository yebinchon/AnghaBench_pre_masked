
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct soctherm_softc {int * mem_res; int * irq_res; int * reset; int * soctherm_clk; int * tsensor_clk; int * irq_ih; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (int *) ;
 struct soctherm_softc* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_4)
{
 struct soctherm_softc *VAR_5;
 VAR_5 = FUNC_3(VAR_4);

 if (VAR_5->irq_ih != ((void*)0))
  FUNC_1(VAR_4, VAR_5->irq_res, VAR_5->irq_ih);
 FUNC_5(&VAR_3);
 if (VAR_5->tsensor_clk != ((void*)0))
  FUNC_2(VAR_5->tsensor_clk);
 if (VAR_5->soctherm_clk != ((void*)0))
  FUNC_2(VAR_5->soctherm_clk);
 if (VAR_5->reset != ((void*)0))
  FUNC_4(VAR_5->reset);
 if (VAR_5->irq_res != ((void*)0))
  FUNC_0(VAR_4, VAR_1, 0, VAR_5->irq_res);
 if (VAR_5->mem_res != ((void*)0))
  FUNC_0(VAR_4, VAR_2, 0, VAR_5->mem_res);

 return (VAR_0);
}
