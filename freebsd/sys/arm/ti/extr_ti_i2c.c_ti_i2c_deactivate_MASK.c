
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_i2c_softc {int clk_id; int * sc_irq_res; int * sc_mem_res; int * sc_irq_h; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 int FUNC_1 (int ,int *,int *) ;
 struct ti_i2c_softc* FUNC_2 (int ) ;
 int FUNC_3 (struct ti_i2c_softc*,int ,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(device_t VAR_5)
{
 struct ti_i2c_softc *VAR_6 = FUNC_2(VAR_5);


 FUNC_3(VAR_6, VAR_1, 0xffff);
 FUNC_3(VAR_6, VAR_2, 0xffff);
 FUNC_3(VAR_6, VAR_0, 0);


 if (VAR_6->sc_irq_h != ((void*)0)) {
  FUNC_1(VAR_5, VAR_6->sc_irq_res, VAR_6->sc_irq_h);
  VAR_6->sc_irq_h = ((void*)0);
 }


 if (VAR_6->sc_mem_res != ((void*)0)) {
  FUNC_0(VAR_5, VAR_4, 0, VAR_6->sc_mem_res);
  VAR_6->sc_mem_res = ((void*)0);
 }


 if (VAR_6->sc_irq_res != ((void*)0)) {
  FUNC_0(VAR_5, VAR_3, 0, VAR_6->sc_irq_res);
  VAR_6->sc_irq_res = ((void*)0);
 }


 FUNC_4(VAR_6->clk_id);
}
