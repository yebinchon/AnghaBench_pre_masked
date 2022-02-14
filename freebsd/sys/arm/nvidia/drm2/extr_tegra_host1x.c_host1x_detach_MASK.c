
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct host1x_softc {int * mem_res; int * syncpt_irq_res; int * gen_irq_res; int * syncpt_irq_h; int * reset; int * clk; int * tegra_drm; int * gen_irq_h; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct host1x_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,int *) ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int *) ;
 struct host1x_softc* FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct host1x_softc*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_3)
{
 struct host1x_softc *VAR_4;

 VAR_4 = FUNC_5(VAR_3);

 FUNC_7(VAR_4);

 if (VAR_4->gen_irq_h != ((void*)0))
  FUNC_3(VAR_3, VAR_4->gen_irq_res, VAR_4->gen_irq_h);
 if (VAR_4->tegra_drm != ((void*)0))
  FUNC_6(VAR_4->tegra_drm, VAR_0);
 if (VAR_4->clk != ((void*)0))
  FUNC_4(VAR_4->clk);
 if (VAR_4->reset != ((void*)0))
  FUNC_8(VAR_4->reset);
 if (VAR_4->syncpt_irq_h != ((void*)0))
  FUNC_3(VAR_3, VAR_4->syncpt_irq_res, VAR_4->syncpt_irq_h);
 if (VAR_4->gen_irq_res != ((void*)0))
  FUNC_2(VAR_3, VAR_1, 1, VAR_4->gen_irq_res);
 if (VAR_4->syncpt_irq_res != ((void*)0))
  FUNC_2(VAR_3, VAR_1, 0, VAR_4->syncpt_irq_res);
 if (VAR_4->mem_res != ((void*)0))
  FUNC_2(VAR_3, VAR_2, 0, VAR_4->mem_res);
 FUNC_0(VAR_4);
 return (FUNC_1(VAR_3));
}
