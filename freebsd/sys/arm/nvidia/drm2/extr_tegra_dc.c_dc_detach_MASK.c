
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dc_softc {int * mem_res; int * irq_res; int * hwreset_dc; int * clk_dc; int * clk_parent; int * irq_ih; int dev; } ;
typedef int device_t ;


 int FUNC_0 (struct dc_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int FUNC_4 (int ,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 struct dc_softc* FUNC_7 (int ) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_2)
{
 struct dc_softc *VAR_3;

 VAR_3 = FUNC_7(VAR_2);

 FUNC_1(FUNC_6(VAR_3->dev), VAR_3->dev);

 if (VAR_3->irq_ih != ((void*)0))
  FUNC_4(VAR_2, VAR_3->irq_res, VAR_3->irq_ih);
 if (VAR_3->clk_parent != ((void*)0))
  FUNC_5(VAR_3->clk_parent);
 if (VAR_3->clk_dc != ((void*)0))
  FUNC_5(VAR_3->clk_dc);
 if (VAR_3->hwreset_dc != ((void*)0))
  FUNC_8(VAR_3->hwreset_dc);
 if (VAR_3->irq_res != ((void*)0))
  FUNC_3(VAR_2, VAR_0, 0, VAR_3->irq_res);
 if (VAR_3->mem_res != ((void*)0))
  FUNC_3(VAR_2, VAR_1, 0, VAR_3->mem_res);
 FUNC_0(VAR_3);

 return (FUNC_2(VAR_2));
}
