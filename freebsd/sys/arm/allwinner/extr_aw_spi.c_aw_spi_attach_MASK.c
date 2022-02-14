
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aw_spi_softc {int spibus; int clk_mod; int clk_ahb; int rst_ahb; int * res; int intrhand; int mtx; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int,int *,int ,struct aw_spi_softc*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,char*,int *) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int ) ;
 struct aw_spi_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ,int ,int ,int *) ;
 int FUNC_12 (int *,int ,int *,int ) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_6)
{
 struct aw_spi_softc *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_8(VAR_6);
 VAR_7->dev = VAR_6;

 FUNC_12(&VAR_7->mtx, FUNC_7(VAR_6), ((void*)0), VAR_3);

 if (FUNC_1(VAR_6, VAR_5, VAR_7->res) != 0) {
  FUNC_9(VAR_6, "cannot allocate resources for device\n");
  VAR_8 = VAR_0;
  goto fail;
 }

 if (FUNC_3(VAR_6, VAR_7->res[1],
     VAR_2 | VAR_1, ((void*)0), VAR_4, VAR_7,
     &VAR_7->intrhand)) {
  FUNC_2(VAR_6, VAR_5, VAR_7->res);
  FUNC_9(VAR_6, "cannot setup interrupt handler\n");
  return (VAR_0);
 }


 if (FUNC_11(VAR_6, 0, 0, &VAR_7->rst_ahb) == 0) {
  VAR_8 = FUNC_10(VAR_7->rst_ahb);
  if (VAR_8 != 0) {
   FUNC_9(VAR_6, "cannot de-assert reset\n");
   goto fail;
  }
 }


 VAR_8 = FUNC_5(VAR_6, 0, "ahb", &VAR_7->clk_ahb);
 if (VAR_8 != 0) {
  FUNC_9(VAR_6, "cannot get ahb clock\n");
  goto fail;
 }
 VAR_8 = FUNC_5(VAR_6, 0, "mod", &VAR_7->clk_mod);
 if (VAR_8 != 0) {
  FUNC_9(VAR_6, "cannot get mod clock\n");
  goto fail;
 }
 VAR_8 = FUNC_4(VAR_7->clk_ahb);
 if (VAR_8 != 0) {
  FUNC_9(VAR_6, "cannot enable ahb clock\n");
  goto fail;
 }
 VAR_8 = FUNC_4(VAR_7->clk_mod);
 if (VAR_8 != 0) {
  FUNC_9(VAR_6, "cannot enable mod clock\n");
  goto fail;
 }

 VAR_7->spibus = FUNC_6(VAR_6, "spibus", -1);

 return (0);

fail:
 FUNC_0(VAR_6);
 return (VAR_8);
}
