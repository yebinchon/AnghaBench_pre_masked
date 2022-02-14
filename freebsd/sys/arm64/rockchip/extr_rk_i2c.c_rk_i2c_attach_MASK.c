
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_i2c_softc {int * iicbus; int * sclk; int * pclk; int * res; int intrhand; int mtx; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int ,int,int *,int ,struct rk_i2c_softc*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,char*,int **) ;
 int FUNC_6 (int ,int ) ;
 int * FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int ) ;
 struct rk_i2c_softc* FUNC_9 (int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int *,int ,char*,int ) ;
 int FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_14(device_t VAR_7)
{
 struct rk_i2c_softc *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_9(VAR_7);
 VAR_8->dev = VAR_7;

 FUNC_11(&VAR_8->mtx, FUNC_8(VAR_7), "rk_i2c", VAR_4);

 if (FUNC_0(VAR_7, VAR_6, VAR_8->res) != 0) {
  FUNC_10(VAR_7, "cannot allocate resources for device\n");
  VAR_9 = VAR_1;
  goto fail;
 }

 if (FUNC_3(VAR_7, VAR_8->res[1],
     VAR_3 | VAR_2, ((void*)0), VAR_5, VAR_8,
     &VAR_8->intrhand)) {
  FUNC_2(VAR_7, VAR_6, VAR_8->res);
  FUNC_10(VAR_7, "cannot setup interrupt handler\n");
  return (VAR_1);
 }

 FUNC_6(VAR_7, FUNC_12(VAR_7));


 VAR_9 = FUNC_5(VAR_7, 0, "i2c", &VAR_8->sclk);
 if (VAR_9 != 0) {
  FUNC_10(VAR_7, "cannot get i2c clock\n");
  goto fail;
 }
 VAR_9 = FUNC_4(VAR_8->sclk);
 if (VAR_9 != 0) {
  FUNC_10(VAR_7, "cannot enable i2c clock\n");
  goto fail;
 }

 VAR_9 = FUNC_5(VAR_7, 0, "pclk", &VAR_8->pclk);
 if (VAR_9 != 0 && VAR_9 != VAR_0) {
  FUNC_10(VAR_7, "cannot get pclk clock\n");
  goto fail;
 }
 if (VAR_8->sclk != ((void*)0)) {
  VAR_9 = FUNC_4(VAR_8->sclk);
  if (VAR_9 != 0) {
   FUNC_10(VAR_7, "cannot enable pclk clock\n");
   goto fail;
  }
 }

 VAR_8->iicbus = FUNC_7(VAR_7, "iicbus", -1);
 if (VAR_8->iicbus == ((void*)0)) {
  FUNC_10(VAR_7, "cannot add iicbus child device\n");
  VAR_9 = VAR_1;
  goto fail;
 }

 FUNC_1(VAR_7);

 return (0);

fail:
 if (FUNC_13(VAR_7) != 0)
  FUNC_10(VAR_7, "Failed to detach\n");
 return (VAR_9);
}
