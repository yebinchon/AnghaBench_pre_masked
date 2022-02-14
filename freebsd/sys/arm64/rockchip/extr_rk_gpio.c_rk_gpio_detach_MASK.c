
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_gpio_softc {int clk; int sc_mtx; int sc_res; scalar_t__ sc_busdev; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 struct rk_gpio_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_5(device_t VAR_1)
{
 struct rk_gpio_softc *VAR_2;

 VAR_2 = FUNC_2(VAR_1);

 if (VAR_2->sc_busdev)
  FUNC_3(VAR_1);
 FUNC_0(VAR_1, VAR_0, VAR_2->sc_res);
 FUNC_4(&VAR_2->sc_mtx);
 FUNC_1(VAR_2->clk);

 return(0);
}
