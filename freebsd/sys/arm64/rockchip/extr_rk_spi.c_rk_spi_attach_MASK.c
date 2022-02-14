
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_spi_softc {int fifo_size; int spibus; int max_freq; int clk_spi; int clk_apb; int * res; int intrhand; int mtx; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct rk_spi_softc*,int ,int) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *) ;
 scalar_t__ FUNC_4 (int ,int ,int,int *,int ,struct rk_spi_softc*,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,char*,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (int ) ;
 struct rk_spi_softc* FUNC_10 (int ) ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (int *,int ,int *,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct rk_spi_softc*) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int
FUNC_15(device_t VAR_9)
{
 struct rk_spi_softc *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_10(VAR_9);
 VAR_10->dev = VAR_9;

 FUNC_12(&VAR_10->mtx, FUNC_9(VAR_9), ((void*)0), VAR_3);

 if (FUNC_1(VAR_9, VAR_8, VAR_10->res) != 0) {
  FUNC_11(VAR_9, "cannot allocate resources for device\n");
  VAR_11 = VAR_0;
  goto fail;
 }

 if (FUNC_4(VAR_9, VAR_10->res[1],
     VAR_2 | VAR_1, ((void*)0), VAR_7, VAR_10,
     &VAR_10->intrhand)) {
  FUNC_3(VAR_9, VAR_8, VAR_10->res);
  FUNC_11(VAR_9, "cannot setup interrupt handler\n");
  return (VAR_0);
 }


 VAR_11 = FUNC_6(VAR_9, 0, "apb_pclk", &VAR_10->clk_apb);
 if (VAR_11 != 0) {
  FUNC_11(VAR_9, "cannot get apb_pclk clock\n");
  goto fail;
 }
 VAR_11 = FUNC_6(VAR_9, 0, "spiclk", &VAR_10->clk_spi);
 if (VAR_11 != 0) {
  FUNC_11(VAR_9, "cannot get spiclk clock\n");
  goto fail;
 }
 VAR_11 = FUNC_5(VAR_10->clk_apb);
 if (VAR_11 != 0) {
  FUNC_11(VAR_9, "cannot enable ahb clock\n");
  goto fail;
 }
 VAR_11 = FUNC_5(VAR_10->clk_spi);
 if (VAR_11 != 0) {
  FUNC_11(VAR_9, "cannot enable spiclk clock\n");
  goto fail;
 }
 FUNC_7(VAR_10->clk_spi, &VAR_10->max_freq);

 VAR_10->fifo_size = FUNC_14(VAR_10);
 if (VAR_10->fifo_size == 0) {
  FUNC_11(VAR_9, "failed to get fifo size\n");
  goto fail;
 }

 VAR_10->spibus = FUNC_8(VAR_9, "spibus", -1);

 FUNC_0(VAR_10, VAR_4, 0);
 FUNC_0(VAR_10, VAR_6, VAR_10->fifo_size/2 - 1);
 FUNC_0(VAR_10, VAR_5, VAR_10->fifo_size/2 - 1);

 return (FUNC_2(VAR_9));

fail:
 FUNC_13(VAR_9);
 return (VAR_11);
}
