
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_spi_softc {int mtx; int * res; int * intrhand; int dev; int * clk_apb; int * clk_spi; int * spibus; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int *) ;
 struct rk_spi_softc* FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_7(device_t VAR_1)
{
 struct rk_spi_softc *VAR_2;

 VAR_2 = FUNC_5(VAR_1);

 FUNC_0(VAR_2->dev);
 if (VAR_2->spibus != ((void*)0))
  FUNC_4(VAR_1, VAR_2->spibus);

 if (VAR_2->clk_spi != ((void*)0))
  FUNC_3(VAR_2->clk_spi);
 if (VAR_2->clk_apb)
  FUNC_3(VAR_2->clk_apb);

 if (VAR_2->intrhand != ((void*)0))
  FUNC_2(VAR_2->dev, VAR_2->res[1], VAR_2->intrhand);

 FUNC_1(VAR_1, VAR_0, VAR_2->res);
 FUNC_6(&VAR_2->mtx);

 return (0);
}
